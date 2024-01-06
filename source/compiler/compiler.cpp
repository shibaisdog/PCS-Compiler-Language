#include "compiler.h"
#include "./cpp/init/def.h"
#include "./cpp/init/for.h"
#include "./cpp/init/ifs.h"
#include "./cpp/init/class.h"
#include "./cpp/init/while.h"
#include "./cpp/init/print.h"
#include "./cpp/init/import.h"
#include "./cpp/init/variable.h"
#include "./cpp/replace/pass.h"
#include "./cpp/replace/array.h"
#include "./cpp/replace/number.h"
#include "./cpp/replace/Fstring.h"
#include "./cpp/replace/comment.h"
#include "./cpp/replace/trigraph.h"
using namespace std;
string compiler::EnterSpaces(int number) {return string(number, ' ');}
bool compiler::Count(list<string> Variable_Name,string name) {return find(Variable_Name.begin(),Variable_Name.end(),name) != Variable_Name.end();}
int compiler::CountLeadingSpaces(string str) {
    int count = 0;
    for (char c : str) {
        if (std::isspace(c)) {count++;} 
        else {break;}
    }
    return count;
}
list<string> compiler::itr_line(list<string> file) {
    list<string> value;
    list<int> DEF_SCNumber;
    list<int> WHE_SCNumber;
    list<string> Variable_Name;
    list<string>::iterator line = file.begin(); 
    for (line=file.begin();line!=file.end();++line) {
        list<string> after;
        string file_line_value(*line);
        list<int>::iterator Leading;
        for (Leading=DEF_SCNumber.begin();Leading!=DEF_SCNumber.end();) {
            if (*Leading >= compiler::CountLeadingSpaces(file_line_value)) {
                after.push_back("\n"+compiler::EnterSpaces(*Leading)+"};\n");
                Leading = DEF_SCNumber.erase(Leading);
                Variable_Name.clear();
            } else {++Leading;}
        }
        list<int>::iterator RLeading;
        for (RLeading=WHE_SCNumber.begin();RLeading!=WHE_SCNumber.end();) {
            if (*RLeading >= compiler::CountLeadingSpaces(file_line_value)) {
                after.push_back("\n"+compiler::EnterSpaces(*RLeading)+"}\n");
                RLeading = WHE_SCNumber.erase(RLeading);
            } else {++RLeading;}
        }
        file_line_value = CP::aft(file_line_value);
        file_line_value = CC::aft(file_line_value);
        file_line_value = CG::aft(file_line_value);
        file_line_value = CNB::aft(file_line_value);
        string Spaces = file_line_value;
        file_line_value = _def::aft(file_line_value);
        file_line_value = _class::aft(file_line_value);
        if (Spaces != file_line_value) {DEF_SCNumber.push_back(compiler::CountLeadingSpaces(Spaces));}
        Spaces = file_line_value;
        file_line_value = _ifs::aft(file_line_value);
        file_line_value = _for::aft(file_line_value);
        file_line_value = _while::aft(file_line_value);
        if (Spaces != file_line_value) {WHE_SCNumber.push_back(compiler::CountLeadingSpaces(Spaces));}
        file_line_value = _print::aft(file_line_value);
        file_line_value = _import::aft(file_line_value);
        string* Variable = _variable::aft(Variable_Name,file_line_value);
        file_line_value = Variable[0];
        if (Variable[1] != "<None>") {Variable_Name.push_back(Variable[1]);}
        file_line_value = CF::aft(file_line_value);
        file_line_value = CA::aft(file_line_value);
        if (!file_line_value.empty() && file_line_value.back() != ';' && file_line_value.back() != '{' && file_line_value.substr(0,8) != "#include") {file_line_value += ';';}
        for (const auto& a : after) {file_line_value = a + file_line_value;}
        value.push_back(file_line_value);
    }
    if (!DEF_SCNumber.empty()) {value.push_back("\n}");}
    return value;
}

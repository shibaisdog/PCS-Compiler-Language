#include "compiler.h"
#include "./init/print.h"
#include "./init/import.h"
#include "./init/variable.h"
#include "./replace/Fstring.h"
#include "./replace/comment.h"
using namespace std;
bool compiler::Count(list<string> Variable_Name,string name) {
    list<string>::iterator list = Variable_Name.begin(); 
    for (list=Variable_Name.begin();list!=Variable_Name.end();list++) {
        string listn(*list);
        if (!strcmp(listn.c_str(),name.c_str())) {
            return true;
        }
    }
    return false;
}
list<string> compiler::itr_line(list<string> file) {
    list<string> value;
    list<string> Variable_Name;
    list<string>::iterator line = file.begin(); 
    for (line=file.begin();line!=file.end();line++) {
        string file_line_value(*line);
        file_line_value = CC::aft(file_line_value);
        file_line_value = _print::aft(file_line_value);
        file_line_value = _import::aft(file_line_value);
        string* Variable = _variable::aft(Variable_Name,file_line_value);
        file_line_value = Variable[0];
        if (strcmp(Variable[1].c_str(),"<None>")) {Variable_Name.push_back(Variable[1]);}
        file_line_value = CF::aft(file_line_value);
        value.push_back(file_line_value);
    }
    return value;
}
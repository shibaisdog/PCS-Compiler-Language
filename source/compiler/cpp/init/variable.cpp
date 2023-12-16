#include "variable.h"
#include "../type/CK.h"
#include "../../compiler.h"
using namespace std;
string* _variable::aft(list<string> Variable_Name,string line) {
    string* ret = new string[2];
    ret[0] = line;
    ret[1] = "<None>";
    string intext = line;
    int index = line.find("=");
    if (index != std::string::npos && line.find("//") == std::string::npos) {
        int sp = 0;
        string name = line.substr(0,(line.find_last_of("=")));
        sp = name.size();
        name = regex_replace(name,regex(" "),"");
        sp = (sp - name.size())-1;
        if (name.empty()) {return ret;}
        string value = line.substr(line.find("=")+1);
        if (value.empty()) {return ret;}
        string type = regex_replace(value,regex(" "),"");
        type = TCK::aft(type);
        if (compiler::Count(Variable_Name,name)) {line = line.substr(0,sp)+name+" = "+value+";";}
        else if (name.find("[") != std::string::npos || name.find("]") != std::string::npos) {line = line.substr(0,sp)+name+" = "+value+";";}
        else {line = line.substr(0,sp)+type+" "+name+" = "+value+";";}
        ret[0] = line;
        ret[1] = name;
        return ret;
    }
    return ret;
}
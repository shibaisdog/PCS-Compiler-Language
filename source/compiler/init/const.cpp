#include "const.h"
#include "../type/CK.h"
using namespace std;
string _const::aft(string line) {
    int index = line.find("const");
    if (index != std::string::npos) {
        string name = line.substr(line.find("const")+5,(line.find_last_of("=")-line.find("const")-5));
        name = regex_replace(name,regex(" "),"");
        string value = line.substr(line.find("=")+1);
        string type = regex_replace(value,regex(" "),"");
        type = TCK::aft(type);
        line = regex_replace(line,regex("const"),"const "+type+" "+name+" = "+value+"; //");
        return line;
    }
    return line;
}
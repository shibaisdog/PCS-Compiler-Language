#include "let.h"
#include "../type/CK.h"
using namespace std;
string _let::aft(string line) {
    int index = line.find("let");
    if (index != std::string::npos) {
        string name = line.substr(line.find("let")+3,(line.find_last_of("=")-line.find("let")-3));
        name = regex_replace(name,regex(" "),"");
        string value = line.substr(line.find("=")+1);
        string type = regex_replace(value,regex(" "),"");
        type = TCK::aft(type);
        line = regex_replace(line,regex("let"),type+" "+name+" = "+value+"; //");
        return line;
    }
    return line;
}
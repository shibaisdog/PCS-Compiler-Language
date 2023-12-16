#include "def.h"
using namespace std;
string _def::aft(string line) {
    int index = line.find("def");
    if (index != std::string::npos && line.find(":") != std::string::npos) {
        //string sn = line.substr(line.find("def")+3,(line.find(">")-line.find("def")-3));
        //string rn = line.substr(line.find(">")+1,(line.find_last_of(":")-line.find(">")-1));
        //line = line.substr(0,line.find("def"))+rn+" "+sn+" {";
        line = regex_replace(line,regex("def "),"");
        line = regex_replace(line,regex(":"),"");
        line += "{";
        return line;
    }
    return line;
}
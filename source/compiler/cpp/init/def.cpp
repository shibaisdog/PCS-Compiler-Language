#include "def.h"
using namespace std;
string _def::aft(string line) {
    int index = line.find("def");
    if (index != std::string::npos && line.find(":") != std::string::npos) {
        string sn = line.substr(line.find("def")+3,(line.find("(")-line.find("def")-3));
        if (line.find("main()") != std::string::npos) {
            line = "int main() {";
        } else {
            line = regex_replace(line,regex("def "),"");
            line = regex_replace(line,regex(":"),"");
            line += "{";
        }
        return line;
    }
    return line;
}
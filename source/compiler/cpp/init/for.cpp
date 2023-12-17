#include "for.h"
using namespace std;
string _for::aft(string line) {
    int index = line.find("for");
    if (index != std::string::npos && line.find(":") != std::string::npos) {
        line = regex_replace(line,regex("for"),"for (int ");
        line = regex_replace(line,regex(":"),")");
        line += "{";
        return line;
    }
    return line;
}
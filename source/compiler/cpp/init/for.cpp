#include "for.h"
using namespace std;
string _for::aft(string line) {
    int index = line.find("for");
    if (index != std::string::npos && line.find(":") != std::string::npos) {
        if (line.find("in") != std::string::npos && line.find(":")) {
            line = regex_replace(line,regex("for"),"for (const auto& ");
            line = regex_replace(line,regex(":"),")");
            line = regex_replace(line,regex("in"),":");
        } else {
            line = regex_replace(line,regex("for"),"for (int ");
            line = regex_replace(line,regex(":"),")");
        }
        line += "{";
        return line;
    }
    return line;
}
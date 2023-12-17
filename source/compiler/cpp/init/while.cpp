#include "while.h"
using namespace std;
string _while::aft(string line) {
    int index = line.find("while");
    if (index != std::string::npos && line.find(":") != std::string::npos) {
        line = regex_replace(line,regex("while "),"while (");
        line = regex_replace(line,regex(":"),")");
        line += "{";
        return line;
    }
    return line;
}
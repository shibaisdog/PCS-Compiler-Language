#include "class.h"
using namespace std;
string _class::aft(string line) {
    int index = line.find("class");
    if (index != std::string::npos && line.find(":") != std::string::npos) {
        line = regex_replace(line,regex(":"),"{public:\n");
        return line;
    }
    return line;
}
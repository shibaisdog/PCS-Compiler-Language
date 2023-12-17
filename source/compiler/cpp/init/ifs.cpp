#include "ifs.h"
using namespace std;
string _ifs::aft(string line) {
    int ifindex = line.find("if");
    int elifindex = line.find("elif");
    int elseindex = line.find("else");
    if (ifindex != std::string::npos && line.find(":") != std::string::npos && elifindex == std::string::npos) {
        line = regex_replace(line,regex("if"),"if (");
        line = regex_replace(line,regex(":"),") {");
    } else if (elifindex != std::string::npos && line.find(":") != std::string::npos) {
        line = regex_replace(line,regex("elif"),"else if (");
        line = regex_replace(line,regex(":"),") {");
    } else if (elseindex != std::string::npos && line.find(":") != std::string::npos) {
        line = regex_replace(line,regex(":"),"{");
    }
    return line;
}
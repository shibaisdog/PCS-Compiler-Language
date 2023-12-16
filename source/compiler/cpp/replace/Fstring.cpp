#include "Fstring.h"
using namespace std;
string CF::aft(string line) {
    int index = line.find("f\"");
    if (index != std::string::npos) {
        line.erase(index,1);
        line = regex_replace(line,regex("\\{"),"\"+");
        line = regex_replace(line,regex("\\}"),"+\"");
        return line;
    }
    return line;
}
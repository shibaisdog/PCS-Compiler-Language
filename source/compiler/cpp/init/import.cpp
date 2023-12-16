#include "import.h"
using namespace std;
string _import::aft(string line) {
    int index = line.find("import");
    if (index != std::string::npos) {\
        line = regex_replace(line,regex(" "),"");
        if (line.find(".h") == std::string::npos) {
            line = regex_replace(line,regex("import"),"#include <");
            line += ">";
        } else {
            line = regex_replace(line,regex("import"),"#include \"");
            line += "\"";
        }
        return line;
    }
    return line;
}
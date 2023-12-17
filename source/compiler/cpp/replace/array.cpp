#include "array.h"
using namespace std;
string CA::aft(string line) {
    int index = line.find("Array.");
    if (index != std::string::npos) {
        line = regex_replace(line,regex("Array."),"new ");
        line = regex_replace(line,regex("\\("),"[");
        line = regex_replace(line,regex("\\)"),"]");
    }
    return line;
}
#include "number.h"
using namespace std;
string CNB::aft(string line) {
    std::regex re("\\b\\d+_\\d+(_\\d{3})*\\b");
    std::smatch match;
    while (true) {
        if (std::regex_search(line,match,re)) {
            string name = regex_replace(match.str(),regex("_"),"");
            line = regex_replace(line,regex(match.str()),name);
        } else {break;}
    }
    return line;
}
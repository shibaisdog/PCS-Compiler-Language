#include "comment.h"
using namespace std;
string CC::aft(string line) {
    line = regex_replace(line,regex("#"),"//");
    return line;
}
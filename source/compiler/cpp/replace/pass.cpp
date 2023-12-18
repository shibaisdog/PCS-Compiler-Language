#include "pass.h"
using namespace std;
string CP::aft(string line) {
    line = regex_replace(line,regex("pass"),"");
    return line;
}
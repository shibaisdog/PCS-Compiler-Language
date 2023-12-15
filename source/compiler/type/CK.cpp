#include "CK.h"
using namespace std;
string TCK::aft(string line) {
    string value;
    if (line.find("\"") != std::string::npos) { //string
        value = "string";
    } else if (!strcmp(line.c_str(),"true") || !strcmp(line.c_str(),"false")) { //bool
        value = "bool";
    } else { //number
        if (line.find(".") != std::string::npos) { //float
            value = "float";
        } else { //auto (예외처리)
            value = "auto";
        }
    }
    return value;
}
#include "CK.h"
using namespace std;
bool TCK::strings(string line) {
    if (
        line.find("a") != std::string::npos ||
        line.find("b") != std::string::npos ||
        line.find("c") != std::string::npos ||
        line.find("d") != std::string::npos ||
        line.find("e") != std::string::npos ||
        line.find("f") != std::string::npos ||
        line.find("g") != std::string::npos ||
        line.find("h") != std::string::npos ||
        line.find("i") != std::string::npos ||
        line.find("j") != std::string::npos ||
        line.find("k") != std::string::npos ||
        line.find("l") != std::string::npos ||
        line.find("m") != std::string::npos ||
        line.find("n") != std::string::npos ||
        line.find("o") != std::string::npos ||
        line.find("p") != std::string::npos ||
        line.find("q") != std::string::npos ||
        line.find("r") != std::string::npos ||
        line.find("s") != std::string::npos ||
        line.find("t") != std::string::npos ||
        line.find("u") != std::string::npos ||
        line.find("v") != std::string::npos ||
        line.find("w") != std::string::npos ||
        line.find("x") != std::string::npos ||
        line.find("y") != std::string::npos ||
        line.find("z") != std::string::npos
    ) {return true;}
    else if (
        line.find("A") != std::string::npos ||
        line.find("B") != std::string::npos ||
        line.find("C") != std::string::npos ||
        line.find("D") != std::string::npos ||
        line.find("E") != std::string::npos ||
        line.find("F") != std::string::npos ||
        line.find("G") != std::string::npos ||
        line.find("H") != std::string::npos ||
        line.find("I") != std::string::npos ||
        line.find("J") != std::string::npos ||
        line.find("K") != std::string::npos ||
        line.find("L") != std::string::npos ||
        line.find("M") != std::string::npos ||
        line.find("N") != std::string::npos ||
        line.find("O") != std::string::npos ||
        line.find("P") != std::string::npos ||
        line.find("Q") != std::string::npos ||
        line.find("R") != std::string::npos ||
        line.find("S") != std::string::npos ||
        line.find("T") != std::string::npos ||
        line.find("U") != std::string::npos ||
        line.find("V") != std::string::npos ||
        line.find("W") != std::string::npos ||
        line.find("X") != std::string::npos ||
        line.find("Y") != std::string::npos ||
        line.find("Z") != std::string::npos
    ) {return true;}
    return false;
}
string TCK::aft(string line) {
    string value;
    if (line.find("\"") != std::string::npos) { //string
        value = "string";
    } else if (!strcmp(line.c_str(),"true") || !strcmp(line.c_str(),"false")) { //bool
        value = "bool";
    } else { //number
        if (line.find(".") != std::string::npos && line.find("Array.") == std::string::npos && !TCK::strings(line)) { //float
            value = "float";
        } else {
            if (!TCK::strings(line)) { // int
                value = "int";
            } else { //auto (예외처리)
                value = "auto";
            }
        }
    }
    return value;
}
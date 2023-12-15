#include "print.h"
using namespace std;
string _print::aft(string line) {
    int index = line.find("print");
    if (index != std::string::npos) {
        string rn = line.substr(line.find("(")+1,(line.find_last_of(")")-line.find("(")-1));
        rn = regex_replace(rn,regex(",")," << \" \" << ");
        rn = regex_replace(rn,regex(";"),"");
        line = regex_replace(line,regex("print"),"cout << "+rn+" << endl; //");
        return line;
    }
    return line;
}
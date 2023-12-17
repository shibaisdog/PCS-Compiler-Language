#include "mingw32.h"
void mingw32::chcp(int cp) {
    string command = "chcp "+to_string(cp);
    char* c = const_cast<char*>(command.c_str());
    system(c);
}
void mingw32::comfile(string filename,string after) {
    string command = "g++ \""+filename+"\" -o \""+after+"\" -std=c++11";
    char* c = const_cast<char*>(command.c_str());
    system(c);
}
void mingw32::run(string filename) {
    string command = filename;
    char* c = const_cast<char*>(command.c_str());
    system(c);
}
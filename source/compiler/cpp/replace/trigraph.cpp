#include "trigraph.h"
using namespace std;
string CG::aft(string line) {
    line = regex_replace(line,regex("\\?\\?\\="),"#");
    line = regex_replace(line,regex("\\?\\?\\("),"[");
    line = regex_replace(line,regex("\\?\\?\\/"),"\\");
    line = regex_replace(line,regex("\\?\\?\\)"),"]");
    line = regex_replace(line,regex("\\?\\?\\'"),"^");
    line = regex_replace(line,regex("\\?\\?\\<"),"{");
    line = regex_replace(line,regex("\\?\\?\\!"),"|");
    line = regex_replace(line,regex("\\?\\?\\>"),"}");
    line = regex_replace(line,regex("\\?\\?\\-"),"~");
    return line;
}
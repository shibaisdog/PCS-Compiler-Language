#include "xml.h"
#include "../process/file.h"
string XML_::read(string file,string value) {
    list<string> fp = file::NPread(file);
    list<string>::iterator line = fp.begin(); 
    for (line=fp.begin();line!=fp.end();line++) {
        string file_line_value(*line);
        string start = "<"+value+">";
        string end = "</"+value+">";
        int Sindex = file_line_value.find(start);
        int Eindex = file_line_value.find(end);
        if (Sindex != std::string::npos && Eindex != std::string::npos) {
            string rn = file_line_value.substr(Sindex+start.length(),(Eindex-Sindex-start.length()));
            return rn;
        }
    }
    return "";
}
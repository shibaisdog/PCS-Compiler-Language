#include <stdio.h>
#include <iostream>
#include <list>
#include "CMR.h"
#include "./process/mingw32.h"
#include "./XML/xml.h"
using namespace std;
int main(int argc,char* argv[]) {
    bool prints;
    std::istringstream(XML_::read("./compiler.xml","log")) >> std::boolalpha >> prints;
    if (prints) cout << "--------------------------" << endl;
    if (prints) cout << "argc     > " << argc << endl;
    int i;
    bool comfile_exe = false;
    int pathC = 0;
    int fileC = 0;
    int OutsC = 0;
    int OutsSC = 0;
    int PathP = 0;
    int Debug_C = 0;
    string pathS;
    string OutsS;
    string Debug_S;
    list<string> fileS;
    for (i=0;i<argc;i++) {
        if (!strcmp(argv[i],"-v") || !strcmp(argv[i],"--version")) {
            string version = XML_::read("./compiler.xml","version");
            cout << version << endl;
            if (prints) cout << "--------------------------" << endl;
            return 2;
        }
        if (!strcmp(argv[i],"-o")) {comfile_exe = true; OutsC = i;}
        else if (!strcmp(argv[i],"-p") || !strcmp(argv[i],"--p")) {pathC = i;}
        else if (!strcmp(argv[i],"-debug") || !strcmp(argv[i],"--debug")) {Debug_C = i;}
        else if (!strcmp(argv[i],"-f") || !strcmp(argv[i],"--f")) {fileC = i;}
        if (pathC < i && fileC < pathC && OutsC < pathC && Debug_C < pathC &&!strcmp(argv[i],"!!")) {pathS = argv[i];PathP = 1;}
        else if (pathC < i && fileC < pathC && OutsC < pathC && Debug_C < pathC && strcmp(argv[i],"!!")) {pathS = argv[i];}
        else if (fileC < i && pathC < fileC && OutsC < fileC && Debug_C < fileC) {fileS.push_back(argv[i]);}
        else if (OutsC < i && pathC < OutsC && fileC < OutsC && Debug_C < OutsC) {OutsS = argv[i];OutsSC = 1;}
        else if (Debug_C < i && pathC < Debug_C && fileC < Debug_C && OutsC < Debug_C) {Debug_S = Debug_S+" "+argv[i];}
        if (prints) cout << "argv[" << i << "]  > " << argv[i] << endl;
    }
    if (pathS.empty() || fileS.empty()) {
        if (pathS.empty() && PathP == 0) {if (prints) cout << "none -p" << endl;} 
        else if (pathS.empty() && PathP == 1) {} 
        else {if (prints) cout << "none -f" << endl;}
        return 1;
    }
    list<string>::iterator line = fileS.begin(); 
    for (line=fileS.begin();line!=fileS.end();line++) {
        if (strcmp((pathS.substr(pathS.size()-2)).c_str(),"\\")) {pathS += "\\";} 
        else if (strcmp((OutsS.substr(OutsS.size()-2)).c_str(),"\\") && OutsSC > 0) {OutsS += "\\";}
        if (OutsSC == 0) {OutsS = pathS + "include\\";}
        if (comfile_exe) {CMR::exe_comfile(pathS,OutsS,*line,Debug_S);} 
        else {CMR::cpp_comfile(pathS,OutsS,*line);}
    }
    //if (OutsSC == 0) {OutsS = pathS + "out\\";}
    //string EXE_File = regex_replace(File,regex(".cpp"),".exe");
    //mingw32::files_comfile(fileS,)
    return 0;
}
//g++ ./source/PCS.cpp ./source/CMR.cpp ./source/compiler/compiler.cpp ./source/compiler/cpp/init/def.cpp ./source/compiler/cpp/init/for.cpp ./source/compiler/cpp/init/ifs.cpp ./source/compiler/cpp/init/class.cpp ./source/compiler/cpp/init/while.cpp ./source/compiler/cpp/init/print.cpp ./source/compiler/cpp/init/import.cpp ./source/compiler/cpp/init/variable.cpp ./source/compiler/cpp/replace/pass.cpp ./source/compiler/cpp/replace/array.cpp ./source/compiler/cpp/replace/number.cpp ./source/compiler/cpp/replace/comment.cpp ./source/compiler/cpp/replace/Fstring.cpp ./source/compiler/cpp/replace/trigraph.cpp ./source/compiler/cpp/type/CK.cpp ./source/process/file.cpp ./source/process/mingw32.cpp ./source/XML/xml.cpp -o pcs.exe -std=c++11
//pcs -p "C:\\PCS\\work" -f index.sp -o
#include <stdio.h>
#include <iostream>
#include <list>
#include "CMR.h"
using namespace std;
int main(int argc,char* argv[]) {
    cout << "----------[Debug]---------" << endl;
    cout << "argc     > " << argc << endl;
    int i;
    bool comfile_exe = false;
    int pathC = 0;
    int fileC = 0;
    int OutsC = 0;
    int OutsSC = 0;
    int PathP = 0;
    string pathS;
    string OutsS;
    list<string> fileS;
    for (i=0;i<argc;i++) {
        if (!strcmp(argv[i],"-o")) {comfile_exe = true; OutsC = i;} 
        if (!strcmp(argv[i],"-p") || !strcmp(argv[i],"--p")) {pathC = i;} 
        else if (!strcmp(argv[i],"-f") || !strcmp(argv[i],"--f")) {fileC = i;}
        if (pathC < i && fileC < pathC && OutsC < pathC && !strcmp(argv[i],"!!")) {pathS = argv[i];PathP = 1;}
        else if (pathC < i && fileC < pathC && OutsC < pathC && strcmp(argv[i],"!!")) {pathS = argv[i];}
        else if (fileC < i && pathC < fileC && OutsC < fileC) {fileS.push_back(argv[i]);}
        else if (OutsC < i && pathC < OutsC && fileC < OutsC) {OutsS = argv[i];OutsSC = 1;}
        cout << "argv[" << i << "]  > " << argv[i] << endl;
    }
    if (pathS.empty() || fileS.empty()) {
        if (pathS.empty() && PathP == 0) {cout << "none -p" << endl;} 
        else if (pathS.empty() && PathP == 1) {} 
        else {cout << "none -f" << endl;}
        return 1;
    }
    list<string>::iterator line = fileS.begin(); 
    for (line=fileS.begin();line!=fileS.end();line++) {
        if (strcmp((pathS.substr(pathS.size()-2)).c_str(),"\\")) {pathS += "\\";} 
        else if (strcmp((OutsS.substr(OutsS.size()-2)).c_str(),"\\") && OutsSC > 0) {OutsS += "\\";}
        if (OutsSC == 0) {OutsS = pathS + "out\\";}
        if (comfile_exe) {CMR::exe_comfile(pathS,OutsS,*line);} 
        else {CMR::cpp_comfile(pathS,OutsS,*line);}
    }
    return 0;
}
//g++ ./source/PCS.cpp ./source/CMR.cpp ./source/compiler/compiler.cpp ./source/compiler/init/print.cpp ./source/compiler/init/import.cpp ./source/compiler/init/variable.cpp ./source/compiler/replace/comment.cpp ./source/compiler/replace/Fstring.cpp ./source/compiler/type/CK.cpp ./source/process/file.cpp ./source/process/mingw32.cpp -o pcs.exe -std=c++11
//pcs -p "C:\\PCS\\work" -f index.sp -o
#include <stdio.h>
#include <iostream>
#include <list>
#include "CMR.h"
using namespace std;
int main(int argc,char* argv[]) {
    cout << "----------[Debug]---------" << endl;
    cout << "argc     > " << argc << endl;
    int i;
    int pathC = 0;
    int fileC = 0;
    string pathS;
    list<string> fileS;
    for (i=0;i<argc;i++) {
        if (!strcmp(argv[i],"-p") || !strcmp(argv[i],"--p")) {pathC = i;} 
        else if (!strcmp(argv[i],"-f") || !strcmp(argv[i],"--f")) {fileC = i;}
        if (pathC < i && fileC < pathC) {pathS = argv[i];} 
        else if (fileC < i && pathC < fileC) {fileS.push_back(argv[i]);}
        cout << "argv[" << i << "]  > " << argv[i] << endl;
    }
    if (pathS.empty() || fileS.empty()) {
        cout << "none -f || -p" << endl;
        return 1;
    }
    list<string>::iterator line = fileS.begin(); 
    for (line=fileS.begin();line!=fileS.end();line++) {
        CMR::comfile(pathS,*line);
    }
}
//g++ ./source/PCS.cpp ./source/CMR.cpp ./source/compiler/compiler.cpp ./source/compiler/init/let.cpp ./source/compiler/init/const.cpp ./source/compiler/init/print.cpp ./source/compiler/init/import.cpp ./source/compiler/replace/f.cpp ./source/compiler/type/CK.cpp ./source/process/file.cpp ./source/process/mingw32.cpp -o pcs.exe -std=c++11
//pcs -p "C:\\Users\\yummy\\OneDrive\\바탕 화면\\PCS\\work\\" -f "index.sp"
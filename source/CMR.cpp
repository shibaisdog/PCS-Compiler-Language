#include "CMR.h"
using namespace std;
void CMR::comfile(string Path,string File) {
    clock_t start,finish;
    start = clock();
    // COMFILER START
    cout << "-------[STC -> C++]-------" << endl;
    list<string> value;
    list<string> file_value = file::read(Path,File);
    list<string>::iterator line = file_value.begin(); 
    for (line=file_value.begin();line!=file_value.end();line++) {
        string out;
        out = compiler::itr_line(*line);
        value.push_back(out);
        //cout << "Before > " << *line << endl;
        //cout << "After  > " << out << endl;
    }
    value.push_front("#include <string>\n#include <iostream>\nusing namespace std;\n");
    Path += "out\\";
    File = regex_replace(File,regex(".sp"),".cpp");
    string EXE_File = regex_replace(File,regex(".cpp"),".exe");
    file::write(Path,File,value);
    finish = clock();
    cout << "COMFILER > " << (finish - start) << "ms" << endl;
    start = clock();
    cout << "-------[C++ -> EXE]-------" << endl;
    mingw32::comfile(Path+File,Path+EXE_File);
    finish = clock();
    cout << (finish - start) << "ms" << endl;
    cout << "--------[RUN CODE]--------" << endl;
    start = clock();
    mingw32::run("cd \""+Path+"\" && call "+EXE_File);
    finish = clock();
    cout << "-------[FINISH CODE]------" << endl;
    // COMFILER FINISH
    cout << "CODE     > " << (finish - start) << "ms" << endl;
    system("pause");
}
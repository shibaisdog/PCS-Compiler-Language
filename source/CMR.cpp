#include "CMR.h"
using namespace std;
void CMR::exe_comfile(string Path,string Outs,string File) {
    clock_t start,finish;
    start = clock();
    cout << "-------[STC -> C++]-------" << endl;
    list<string> value;
    list<string> file_value = file::read(Path,File);
    value = compiler::itr_line(file_value);
    value.push_front("#include <string>\n#include <iostream>\nusing namespace std;\n");
    File = regex_replace(File,regex(".sp"),".cpp");
    string EXE_File = regex_replace(File,regex(".cpp"),".exe");
    file::write(Outs,File,value);
    finish = clock();
    cout << "FILE > " << File << endl;
    cout << "COMFILER > " << (finish - start) << "ms" << endl;
    start = clock();
    cout << "-------[C++ -> EXE]-------" << endl;
    mingw32::comfile(Outs+File,Outs+EXE_File);
    finish = clock();
    cout << (finish - start) << "ms" << endl;
    cout << "--------[RUN CODE]--------" << endl;
    start = clock();
    mingw32::run("cd \""+Outs+"\" && call "+EXE_File);
    finish = clock();
    cout << "-------[FINISH CODE]------" << endl;
    cout << "CODE     > " << (finish - start) << "ms" << endl;
}
void CMR::cpp_comfile(string Path,string Outs,string File) {
    clock_t start,finish;
    start = clock();
    cout << "-------[STC -> C++]-------" << endl;
    list<string> value;
    list<string> file_value = file::read(Path,File);
    value = compiler::itr_line(file_value);
    value.push_front("#include <string>\n#include <iostream>\nusing namespace std;\n");
    File = regex_replace(File,regex(".sp"),".cpp");
    string EXE_File = regex_replace(File,regex(".cpp"),".exe");
    file::write(Outs,File,value);
    finish = clock();
    cout << "FILE > " << File << endl;
    cout << "COMFILER > " << (finish - start) << "ms" << endl;
    cout << "--------------------------" << endl;
}
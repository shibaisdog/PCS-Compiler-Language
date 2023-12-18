#include "CMR.h"
#include "./XML/xml.h"
using namespace std;
void CMR::exe_comfile(string Path,string Outs,string File) {
    system_clock::time_point start,finish;
    bool prints;
    std::istringstream(XML_::read("./setting/compiler.xml","log")) >> std::boolalpha >> prints;
    int mod = stoi(XML_::read("./setting/compiler.xml","chcp"));
    mingw32::chcp(mod);
    start = system_clock::now();
    if (prints) cout << "-------[STC -> C++]-------" << endl;
    list<string> value;
    list<string> file_value = file::read(Path,File);
    value = compiler::itr_line(file_value);
    value.push_front("#include <string>\n#include <iostream>\nusing namespace std;\n");
    File = regex_replace(File,regex(".sp"),".cpp");
    string EXE_File = regex_replace(File,regex(".cpp"),".exe");
    file::write(Outs,File,value);
    finish = system_clock::now();
    if (prints) cout << "FILE > " << File << endl;
    if (prints) cout << "COMFILER > " << (chrono::duration_cast<chrono::microseconds> (finish - start)).count() << "µs" << endl;
    start = system_clock::now();
    if (prints) cout << "-------[C++ -> EXE]-------" << endl;
    mingw32::comfile(Outs+File,Outs+EXE_File);
    finish = system_clock::now();
    if (prints) cout << (chrono::duration_cast<chrono::microseconds> (finish - start)).count() << "µs" << endl;
    if (prints) cout << "--------[RUN CODE]--------" << endl;
    start = system_clock::now();
    mingw32::run("cd \""+Outs+"\" && call "+EXE_File);
    finish = system_clock::now();
    if (prints) cout << "-------[FINISH CODE]------" << endl;
    if (prints) cout << "CODE     > " << (chrono::duration_cast<chrono::microseconds> (finish - start)).count() << "µs" << endl;
}
void CMR::cpp_comfile(string Path,string Outs,string File) {
    system_clock::time_point start,finish;
    bool prints;
    std::istringstream(XML_::read("./setting/compiler.xml","log")) >> std::boolalpha >> prints;
    start = system_clock::now();
    if (prints) cout << "-------[STC -> C++]-------" << endl;
    list<string> value;
    list<string> file_value = file::read(Path,File);
    value = compiler::itr_line(file_value);
    value.push_front("#include <string>\n#include <iostream>\nusing namespace std;\n");
    File = regex_replace(File,regex(".sp"),".cpp");
    string EXE_File = regex_replace(File,regex(".cpp"),".exe");
    file::write(Outs,File,value);
    finish = system_clock::now();
    if (prints) cout << "FILE > " << File << endl;
    if (prints) cout << "COMFILER > " << (chrono::duration_cast<chrono::microseconds> (finish - start)).count() << "µs" << endl;
    if (prints) cout << "--------------------------" << endl;
}
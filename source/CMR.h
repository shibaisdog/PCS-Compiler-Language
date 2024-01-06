#include <stdio.h>
#include <chrono>
#include <list>
#include <direct.h>
#include <regex>
#include "./process/file.h"
#include "./process/mingw32.h"
#include "./compiler/compiler.h"
using namespace std;
using namespace chrono;
class CMR {
    public: static void exe_comfile(string path,string out,string file,string __debug__);
    public: static void cpp_comfile(string path,string out,string file);
};
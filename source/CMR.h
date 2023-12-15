#include <stdio.h>
#include <time.h>
#include <list>
#include <direct.h>
#include <regex>
#include "./process/file.h"
#include "./process/mingw32.h"
#include "./compiler/compiler.h"
using namespace std;
class CMR {
    public: static void comfile(string path,string file);
    public: static void run(string file);
};
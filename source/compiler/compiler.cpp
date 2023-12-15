#include "compiler.h"
#include "./init/let.h"
#include "./init/const.h"
#include "./init/print.h"
#include "./init/import.h"
#include "./replace/f.h"
using namespace std;
string compiler::itr_line(string line) {
    line = _let::aft(line);
    line = _const::aft(line);
    line = _print::aft(line);
    line = _import::aft(line);
    //replace
    line = CF::aft(line);
    return line;
}
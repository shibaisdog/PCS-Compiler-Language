#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <list>
using namespace std;
class mingw32 {
    public: static void chcp(int mod);
    public: static void run(string file);
    public: static void comfile(string file,string after);
    public: static void files_comfile(list<string> files,string after);
};
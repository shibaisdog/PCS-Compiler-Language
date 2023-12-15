#pragma once
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <list>
using namespace std;
class file {
    public: static list<string> read(string path,string file);
    public: static void write(string path,string file,list<string> value);
};
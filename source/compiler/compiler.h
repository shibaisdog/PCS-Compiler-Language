#pragma once
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <list>
using namespace std;
class compiler {
    public: static int CountLeadingSpaces(string str);
    public: static string EnterSpaces(int number);
    public: static bool Count(list<string> Variable_Name,string name);
    public: static list<string> itr_line(list<string> file);
};
#include <string>
#include <iostream>
using namespace std;

#include "time.h"
int main() {
    const auto start =  clock(); // start = clock()
    auto Int =  10; // Int = 10
    float Float =  10.1; // Float = 10.1
    string String =  "Hello World"; // String = "Hello World"
    bool Bool_true =  true; // Bool_true = true
    bool Bool_false =  false; // Bool_false = false
    const string name =  "Shiba_Dog"; // name = "Shiba_Dog"
    string String_F =  "hi~ my name is "+name+""; // String_F = f"hi~ my name is "+name+""
    string String_NF =  "hi~ my name is {name}"; // String_NF = "hi~ my name is {name}"
    cout << Int << endl; //(Int)
    cout << Float << endl; //(Float)
    cout << String << endl; //(String)
    cout << Bool_true << endl; //(Bool_true)
    cout << Bool_false << endl; //(Bool_false)
    cout << String_F << endl; //(String_F)
    cout << String_NF << endl; //(String_NF)
    const auto ends =  clock(); // ends = clock()
    cout << start << " " << ends << endl; //(start,ends)
    cout << ""+std::to_string(ends - start)+"ms" << endl; //(f""+std::to_string(ends - start)+"ms")
}

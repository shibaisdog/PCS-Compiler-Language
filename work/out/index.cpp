#include <string>
#include <iostream>
using namespace std;

#include "time.h"
int main() {
    auto start =  clock();
    //START
    auto call =  new int[5];
    call[0] =  10;
    call[1] =  50;
    call[2] =  90;
    call[3] =  40;
    call[4] =  20;
    cout << call[0] << " " << call[1] << " " << call[2] << " " << call[3] << " " << call[4] << endl; //(call[0],call[1],call[2],call[3],call[4])
    //END
    auto end =  clock();
    cout << ""+std::to_string(end - start)+"ms" << endl; //(f""+std::to_string(end - start)+"ms")
}

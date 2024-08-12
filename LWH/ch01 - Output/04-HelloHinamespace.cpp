// compile option: g++ 04-HelloHinamespace.cpp 03-namespace.cpp HiPope.cpp -o 04-HelloHinamespace
#include "HelloPope.h"
#include "HiPope.h"
#include <iostream>

int main() {
    hello::SayHelloExample();
    hi::SayHelloExample();     
    return 0;
}
#include "CreationalPatterns/Factory/Test/FactoryTest.h"
#include<iostream>
#include <ostream>
#include <string>
int main(){

    std::string msg;
    std::cout<<"Hello World"<<std::endl;

    FactoryTest test;
    test.Run();
    return 0;
}
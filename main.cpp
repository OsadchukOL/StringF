#include <iostream>
#include "MyString.h"
int main() {
    MyString test_str = "Hello world";
    MyString test_str2 = "fgtre";
    MyString test_str3 = "dsfs";
    test_str3 = test_str2 = test_str;
    test_str3.Print();
    test_str2.Print();


    return 0;
}
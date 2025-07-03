#include <iostream>

using namespace std;

int main(){

    int myInt = 12345;
    long long myLong = 1234567890123456789;
    float myFloat = 123.12345678;
    double myDouble = 3.1234567890;
    char myChar = 'a';
    string myString = "hello";
    bool myBool = false;

    //輸出
    cout << "int: " << myInt << endl;
    cout << "long long: " << myLong << endl;
    cout << "float: " << myFloat << endl;
    cout << "double: "<< myDouble << endl;
    cout << "char: " << myChar << endl;
    cout << "string: " << myString << endl;
    cout << "bool: " << (myBool ? "True":"False") << endl;
    
    //Overflow Test

    int overflow = 2147483647;
    cout << "溢位前: " << overflow << endl;
    cout << "溢位後: " << overflow + 1 << endl;
}


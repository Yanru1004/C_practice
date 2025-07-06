//指標練習
#include <iostream>
using namespace std;

int main(){
int a = 10;
int *p = &a;

cout << "變數a儲存:" << a<<endl;
cout << "變數a的位址:" << &a<<endl;
cout << "指標p指向的位址:" << p<<endl;
cout << "指標p位址儲存的值" << *p<<endl;
cout << endl;
//陣列

int arr[] = {1,2,3};
int *ap = arr;

cout << "指標ap指向的位址" << ap << endl;
cout << "指標ap+1指向的位址" << (ap+1) << endl;
cout << "指標ap+1位址 儲存之值" << *(ap +1 ) << endl;

}


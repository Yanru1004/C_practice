#include<iostream>
using namespace std;
//函數傳址呼叫練習

void swap(int*,int*); //函數傳址呼叫原型宣告

int main(){

    int a = 10,b=20;
    cout << "進入函數前:   a=" << a << ",b=" << b << endl;

    swap(&a,&b);

    cout << "進入函數後:   a=" << a << ",b=" << b << endl;

    return 0;
    
}

void swap(int* x,int* y){

    cout << "函數中交換前: x=" << *x <<",y=" << *y << endl;

    int t = *y;
    *y = *x;
    *x = t;

    cout << "函數中交換後: x=" << *x << ",y=" << *y << endl;

    return ;
}
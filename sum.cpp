#include<iostream>

using namespace std;

//函數練習
int sum(int,int);

int main(){

    int x,y;

    cin>>x;
    cin>>y;

    cout << sum(x,y);

    return 0;

}

int sum(int a,int b){

    return a+b;
}
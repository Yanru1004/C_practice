#include <iostream>

using namespace std;

int main(){

    short M,D,S; //宣告short M,D,S

    cin >> M >>D; //讀入 月份M 及 日期D
    S = (M*2+D)%3;
    
    if (S == 0)
        cout << "普通"; 

    else if (S == 1)
        cout << "吉";

    else 
        cout << "大吉";
}

//2025.06.21 AC
//乘乘樂

#include <iostream>

using namespace std;

int main(){

    //宣告字串型別 num
    string num; 
    //輸入值放入num變數
    cin >> num;

    //開始迴圈
    int result = 1;
    for (char c :num){
        result *= (c-'0');
        
    }
    cout << result;
    return 0;
}
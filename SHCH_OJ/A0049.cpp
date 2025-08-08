//同位元檢查

#include <iostream>
#include <string>

using namespace std;

int main(){

    string t;
    int count;    
    cin >> t;
    //1數量計數
    for (char c:t){
        if (c == '1'){
            count++;
        }
    }

    cout << t << (count%2?'0':'1'); //輸出答案
    
    return 0;
}
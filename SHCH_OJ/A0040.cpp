//10進位換算16進位

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){

    int num;
    stack<int> mod;

    cin >> num;
    
    while (num != 0){
        mod.push(num%16);
        num /= 16;
    }

    while (!mod.empty()){
        cout << "0123456789ABCDEF"[mod.top()];
        mod.pop();
    }

    return 0;
}
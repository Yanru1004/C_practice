//付錢問題

#include <iostream>
#include <vector>
#include <stack>

using namespace std;


int main(){

    int money;
    vector<int> coin = {100,50,10,5,1};
    stack<int> coin_num;
    
    //讀入費用
    cin >> money;

    //零錢數計算
    for (int c:coin){
        coin_num.push(money / c);
        money %= c;
    }

    bool first = true;
    while (!coin_num.empty()){
        if (!first){
            cout << " ";
        }
        cout << coin_num.top();
        coin_num.pop();
        first = false;

    }

    return 0;
}
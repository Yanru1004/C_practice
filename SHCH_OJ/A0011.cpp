//提款卡密碼

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    string pw;
    char pre_text = ' ';
    cin >> pw;

    int result = 0;
    for (char s:pw){
        if (pre_text == ' '){
            pre_text = s;           
        }
        else {
            result *= 10;
            result += abs(s - pre_text);
            pre_text = s;
        }
        
    }
    cout << result;

    return 0;
}
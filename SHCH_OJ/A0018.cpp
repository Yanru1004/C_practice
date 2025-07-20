//數字的秘密差

#include <iostream>
#include <string>

using namespace std;

int main(){

    string num;
    int odd=0,even=0;
    cin >> num;

    for (int i=0;i<num.size();i+=2){
        odd += (num[i] - '0');
    }
    
    for (int i=1;i<num.size();i+=2){
        even += (num[i]-'0');
    }
    
    cout << abs(odd>even);

    return 0;
}
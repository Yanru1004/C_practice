//記帳

#include <iostream>
#include <string>

using namespace std;

int main(){

    int pay=0;
    string text,num="";

    getline(cin,text); //輸入記帳紀錄
    text += 'a';

    for (char s: text){
        if (s >= '0' && s <= '9'){
            num += s;
        }
        else if (num != ""){
            pay += stoi(num);
            num = "";
        }
    }
    
    cout << pay; //輸出結果

    return 0;
}
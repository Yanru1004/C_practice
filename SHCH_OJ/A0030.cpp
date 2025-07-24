//字母的頻率

#include <iostream>
#include <string>
#include <cctype>
#include <map>

using namespace std;

int main(){

    map <char,int> count;
    string text;

    getline(cin,text); //讀入訊息

    for (char c: text){
        if (isalpha(c)){
            count[tolower(c)]++;
        }
    }

    int letter=0 ;
    for (char a='a'; a<='z'; a++){
        
        if (count[a] !=0){
            cout << a << " = " << count[a] << endl;
            letter++;
        } 
    }
    cout << letter;
    return 0;
}
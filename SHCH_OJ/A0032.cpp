//成雙成對

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){

    stack<char> bracket;
    string text;
    bool check = true;

    getline(cin,text);

    for (char s:text){
        
        if (s == '(' || s == '[' || s == '{'){
            bracket.push(s);
        }
        else if (s == ')' && !bracket.empty() && bracket.top() == '(' ){
            bracket.pop();
        }
        else if (s == ']' && !bracket.empty() && bracket.top() == '[' ){
            bracket.pop();        
        }
        else if (s == '}' && !bracket.empty() && bracket.top() == '{' ){
            bracket.pop();
        }
        else{
            check = false;
            break;
        }
                
        }
    
    cout << ((bracket.empty() && check)?"正確":"錯誤");

    

    return 0;
}
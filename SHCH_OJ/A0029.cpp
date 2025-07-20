//態度的重要性

#include <iostream>

using namespace std;

int main(){

    string text;
    int score = 0;
    bool is_success = true;

    getline(cin,text);  //取得訊息

    for (char s:text){
        if (s >= 'a' && s <= 'z'){
            score += (s-'a'+1);
        }
        else if(s >= 'A' && s <= 'Z'){
            score += (s -'A'+1);
        }
        
        
        else {
            cout << "Fail";
            is_success = false;
            break;
        }

    }
    if (is_success)
        cout << score;

    return 0;
        }
//字串的間隔距離

#include <iostream>
#include <string>

using namespace std;

int main(){

    string text;
    char find;
    int count = -1;
    bool first = true;

    cin >> text;
    cin >> find;

    //小寫轉大寫
    if (find > 90){
        find -= 32;
    }

    for (char c:text){
        if (c > 90){
            c -=32;
        }
        if (c == find && count == -1){
            
            count = 1;
        }
        else if (c == find){
            if (first ==false){
                cout << " ";
            }
            cout << count;
            count = 1;
            first = false;
        }
        else{
            if (count != -1){
            count += 1;
            }
        }
    }
    
    return 0;
}


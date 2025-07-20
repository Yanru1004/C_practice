//二進位字串

#include <iostream>
#include <string>

using namespace std;

int main(){

    string text;
    int count = 0;
    bool is_bin = true;
    
    cin >> text;
    
    for (char s:text){

        if (s != '0' && s != '1') {
            cout << "非二進位數";
            is_bin = false;
            break;
        }

        if (s == '1'){    
            count += 1;
        }
    }
    if (is_bin){
    cout << count;}
    
    return 0;
}
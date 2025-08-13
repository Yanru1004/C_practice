//身份證統一編號

#include<iostream>
#include<string>

using namespace std;

int main(){

    string text;
    int code=0;

    cin >> text;

    for (int i = 0;i<8;i++){
        code += (text[i] - '0') * (8-i);
    }
    code += (text[8] -'0');
    
    switch (10-(code % 10)){
        case 10:
            cout << "B N Z";
            break;
        case 1:
            cout << "A M W";
            break;
        case 2:
            cout << "K L Y";
            break;
        case 3:
            cout << "J V X";
            break;
        case 4:
            cout << "H U";
            break;
        case 5:
            cout << "G T";
            break;
        case 6:
            cout << "F S";
            break;
        case 7:
            cout << "E R";
            break;
        case 8:
            cout << "D O Q";
            break;
        case 9:
            cout << "C I P";
            break;
        default:
            cout << "ERROR";
    }   
    return 0;


}
//解密 Enigma

#include <iostream>
#include <string>

using namespace std;

int main(){

    int key;
    string text;

    cin >> key;
    cin.ignore();
    getline(cin,text);

    for (int i=0; i<text.size(); i++){

        cout << char(((text[i] - key-32)%95 +95)%95 +32);
    }
    

    return 0;
}
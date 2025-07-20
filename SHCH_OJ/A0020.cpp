//通訊保密人人有責

#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    string text;

    cin >> n;
    cin.ignore();
    getline(cin,text);

    for (int i=0;i < text.size();i++){

        cout << char((text[i] + n -32)%95 +32);
    } 
    return 0;
}
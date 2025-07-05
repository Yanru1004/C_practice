//a009.解碼器
#include <iostream>

using namespace std;

int main(){
    int key = int('*') - int('1');
    char c;

    while (cin.get(c)){
        cout << char(int(c) + key);
    }
    return 0;
}
//2025.06.22 AC
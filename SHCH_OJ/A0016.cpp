//完全奇數
#include <iostream>

using namespace std;

int main(){

    int num;
    bool odd = true;

    cin >> num;


    while (num != 0){
        if (num %2 == 0){
            odd = false;
            break;}

        num /= 10;
                
    }

    cout << (odd?"是":"否");

    return 0;
}
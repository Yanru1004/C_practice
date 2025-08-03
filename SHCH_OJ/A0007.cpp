//A0007 平方和

#include <iostream>


using namespace std;

int main(){

    //讀入a,b
    int a,b,temp;
    cin >> a >> b;

    if (a > b){ //若a > b a,b交換
        temp = a;
        a = b;
        b = temp;
    }

    int result = 0;

    for (int i=a;i<=b;i++){
        result += i*i;
    }
    cout << result;

    return 0;
}
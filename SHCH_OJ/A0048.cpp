//幸福蛋糕店

#include <iostream>

using namespace std;

int main(){

    int _friend,price;

    cin >> _friend>> price;

    cout << (_friend / 11) * (price *10) + (_friend % 11) * price;

    return 0;
}
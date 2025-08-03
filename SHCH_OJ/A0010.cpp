//好大的數字

#include <iostream>

using namespace std;

int main(){

    int n,k,result = 1;
    cin >> n >> k;

    for (int i=0; i<k; i++){
        result *= n;
        result %= 100000;
    }
    
    cout << result;
    return 0;
}


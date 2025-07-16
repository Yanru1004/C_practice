//完全平方數
#include <iostream>

using namespace std;

int main(){

    int n, count=0, sum=0;

    cin >> n;

    for (int i=1; i*i <= n; i++){
        count += 1;
        sum += i*i;

    }
    cout << count << " " << sum;
    
    return 0;
}
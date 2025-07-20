//3N+1 的猜想

#include <iostream>


using namespace std;

int main(){

    int num,count = 1;

        cin >> num;
        cout << num;

    while (num != 1){
        if (num %2 == 0){
            num /= 2;
        }
        else{
            num = 3 * num +1;
        }
        cout <<" "<< num;
        count += 1;
    }

    cout << endl << count;

    return 0;
}
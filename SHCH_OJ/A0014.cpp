#include <iostream>

using namespace std;

int main(){

    int num;
    bool first = true;
    cin >> num;

    
    for (int i=2; i*i <= num; (i==2)?i++: i+=2){
        while (num % i ==0){
            if (first == false){
                cout << "*";
            }
            cout << i;
            num /= i;
            first = false;
        }

    }
      if (num != 1){
            if (first == false){
                cout << "*";
            }
            cout << num;
        }
    return 0;

}
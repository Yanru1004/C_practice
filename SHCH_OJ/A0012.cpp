#include <iostream>

using namespace std;

int main(){

    int num;
    bool ispn = true;
    cin >> num;
    
    for (int i=2; i*i <= num; (i==2)?i++: i+=2){
        if (num % i ==0){
            cout << "合數";
            ispn = false;
            break;
        }
    }
    if (ispn){
        cout << "質數";
    
            
    }

    return 0;
}
#include <iostream>

using namespace std;

//完全奇數判斷函式
bool is_odd(int num){
    
    while (num !=0){
        if (num %2 == 0){
            return false;
        }
        num /= 10;
    }
        return true;
}

int main(){

    int M,N,P;
    cin >> N;
    M = N;P = N;

    while (is_odd(M)!=true){

        M -= 1;        
    }

    while (is_odd(P)!=true){
        P += 1;
    }

    cout << M << " "<< P << " " << P-M ;   
    
    return 0;
    
}
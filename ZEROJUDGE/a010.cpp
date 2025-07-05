//a010.因數分解
#include <iostream>

using namespace std;

int main(){

    //輸入n
    int n,time; 
    bool first = true; //第一次不輸出" * "的flag

    cin >> n;

    for (int i=2;i<=n;(i==2?i++:i+=2)){  //i增量先2+1加到3，之後皆+2僅驗證奇數 i=2 i+1 i!=2 i+2
        time = 0;
        while (n%i ==0){ //多次除以i直到不能整除
            n /= i;  //n = n / i
            time ++; //記錄次方數    
        }
        
        //輸出
        if (first == false && time != 0) //非第一次輸出且有次方數(i是n的因數)
            cout << " * ";

        if (time == 1){ //如果次方數是1，不輸出次方數。
            cout << i;
            first = false; //輸出過第一次輸出flag改為false
        }
        else if (time >1){ //如果次方數超過1，輸出因數及次方數。
            cout << i << "^" << time;
            first = false; //輸出過第一次輸出flag改為false
        }

    }
    return 0;
    }
 //2025.07.05 AC 


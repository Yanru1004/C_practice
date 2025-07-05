//a005.Eva的回家作業
#include <iostream>

using namespace std;

int main(){
    int n;
    int a,b,c,d;

    cin >> n; //載入測資筆數

    for (int i=1;i<=n;i++){  //測資筆數迴圈
    
    cin >>a >>b >>c >>d;

    if (b-a == c-b && c-b == d-c)
        //判斷為等差數列
        cout << a<<" "<< b<<" "<< c<< " "<< d<<" "<< d+(b-a)<< endl;
    else   
        //判斷為等比數列
        cout << a<<" "<< b<<" "<< c<< " "<< d<<" "<< d*(b/a)<< endl;
    }
    return 0;    
    }

//205.06.22 AC
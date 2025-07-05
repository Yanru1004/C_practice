//a006.一元二次方程式
#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int a,b,c;   //宣告三項係數
    float check; //宣告檢查變數

    cin >>a >>b >>c; //輸入三項係數

    check = pow(b,2)- 4*a*c; //b**2 - 4ac

    if (check < 0)   //b**2-4ac小於0 無實根
        cout << "No real root";
    
    else if (check == 0)  //b**2-4ac等於0 重根
        cout << "Two same roots x=" << -b / (2*a);
    
    else {
        float x1,x2; //b**-4ac 大於0 有2個實樹根
        //計算 x1, x2 解
        x1 = (-b+sqrt(check))/2*a;
        x2 = (-b-sqrt(check))/2*a;
        //比較 x1 , x2 大小
        if (x1>x2)
            cout << "Two different roots x1="<< x1<< " , x2="<< x2;
        else
            cout << "Two different roots x1="<< x2<< " , x2="<< x1;
    } 
    return 0;
}
//2025.06.22 AC
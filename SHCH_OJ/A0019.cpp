//房屋貸款

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int year,loan;
    double rate,A;

    cin >> year >> rate >> loan;
    
    rate /= 12; //年利率轉月利率
    int month = year * 12; //年份轉月數

    A = rate * (pow((1+rate) , month) /
               (pow((1+rate),month)-1));
               cout << A<<endl;

    cout << round(loan*10000 * A);

    return 0;
}
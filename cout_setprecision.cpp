#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double num = 123.141592;

    cout << setprecision(4) << num << endl;

    cout << fixed << setprecision(5) << num ;


}
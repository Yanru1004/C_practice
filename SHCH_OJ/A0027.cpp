//又見 3N+1 數列

#include <iostream>

using namespace std;

int main(){

    int lower,upper,sum,max_sum,result,num;

    max_sum = 0;
    result = 0;
    
    cin >> lower >> upper;

    for (int n = lower;n <= upper;n++){
        
        sum = 0;
        num = n;
        while (num != 1){            
            sum += num;
            
            if (num %2 == 0){
                num /= 2;
            }
            else{
                num = 3 * num +1;
            }
        }
            sum ++;
            if (sum > max_sum){
                max_sum = sum;
                result = n;
            }
        }

    cout << max_sum << endl << result;



    return 0;
}
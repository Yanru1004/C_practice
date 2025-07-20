//最大組合數

#include <iostream>
#include <vector>

using namespace std;

int main(){

    string text1, text2, text3;    
    long long num = 0;

    cin >> text1 >> text2 >> text3;
    vector<string> text = {text1, text2, text3};

    for (int i=0; i<3; i++){
            for (int j=0; j<3; j++){
                if (i==j){
                    continue;
                }
                for (int k=0; k<3; k++){
                    if (i==k || j==k){
                        continue;
                    }
                    long long new_num = stoll(text[i]+text[j]+text[k]);
                    
                    if (new_num > num){
                        num = new_num;
                    }
                }
            }
    }

    cout << num;
    return 0;
}
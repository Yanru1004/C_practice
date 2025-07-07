//a013. 羅馬數字

#include <iostream>
#include <string>
#include <map>

using namespace std;

//羅馬數字轉換字典
map<char,int> roma_int={{'M',1000},{'D',500},
                        {'C',100},{'L',50},
                        {'X',10},{'V',5},{'I',1}};


int romaToInt(string roma){
    char pre_text = ' ';
    int result = 0;

    for (int s=0;s<roma.size();s++){
        if (pre_text == ' '){
            pre_text = roma[s];
            continue;
        }
        else{
            switch (pre_text){
                case 'M' :
                    result += 1000;
                    break;
                
                    case 'D' :
                    result += 500;
                    break;
                
                    case 'C':
                    if (roma[s] == 'M' || roma[s] == 'D'){ //判斷減法情形
                        result -= 100;
                    }
                    else {
                        result += 100;
                    }
                    break;
                
                case 'L':
                    result += 50;
                    break;
                
                case 'X':
                    if (roma[s] == 'C' || roma[s] == 'L'){
                        result -= 10;
                    }
                    else {
                        result += 10;
                    }
                    break;
                
                case 'V':
                    result += 5;
                    break;

                case 'I':
                    if (roma[s] == 'X' || roma[s] == 'V'){
                        result -= 1;
                    }
                    else{
                        result += 1;
                    }
                    break;

            }//switch 結尾
            pre_text = roma[s];
        }
    }
        //補算最後一字元
        result += roma_int[pre_text];
        cout << result<<endl;
    return 0;
}

int main(){

string roma;
cin >> roma;
romaToInt(roma);


    
}
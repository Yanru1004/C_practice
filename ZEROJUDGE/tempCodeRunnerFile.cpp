//a013. 羅馬數字

#include <iostream>
#include <string>
#include <map>
#include <cmath>

using namespace std;

//羅馬數字轉換字典
map<char,int> roma_int={{'M',1000},{'D',500},
                        {'C',100},{'L',50},
                        {'X',10},{'V',5},{'I',1}};

//羅馬數字轉數字函式
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
                    if (roma[s] == 'M' || roma[s] == 'D'){ //判斷減法情形 CM、CD
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
                    if (roma[s] == 'C' || roma[s] == 'L'){ //判斷減法情形 XC、XL
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
                    if (roma[s] == 'X' || roma[s] == 'V'){ //判斷減法情形 IX、IV
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
        //cout << result<<endl;
    return result;
}

//數字轉羅馬數字函式
string intToRoma(int _int){

    string result = "";

    //1000 -> M 轉換
    while (_int >= 1000){
        result += "M";
        _int -= 1000;
    }
    //900 -> CM 轉換
    while (_int >= 900){
        result += "CM";
        _int -= 900;
    }
    //500 -> D 轉換
    while (_int >= 500){
        result += "D";
        _int -= 500;
    }
    //400 -> CD 轉換
    while (_int >= 400){
        result += "CD";
        _int -= 400;
    }
    //100 -> C 轉換
    while (_int >= 100){
        result += "C";
        _int -= 100;
    }
    //90 -> XC 轉換
    while (_int >= 90){
        result += "XC";
        _int -= 90;
    }
    //50 -> L 轉換
    while (_int >= 50){
        result += "L";
        _int -= 50;
    }
    //40 -> XL 轉換
    while (_int >= 40){
        result += "XL";
        _int -= 40;
    }
    //10 -> X 轉換
    while (_int >= 10){
        result += "X";
        _int -= 10;
    }
    //9 -> IX 轉換
    while (_int >= 9){
        result += "IX";
        _int -= 9;
    }
    //5 -> V 轉換
    while (_int >= 5){
        result += "V";
        _int -= 5;
    }
    //4 -> IV 轉換
    while (_int >= 4){
        result += "IV";
        _int -= 4;
    }
    //1 -> I 轉換
    while (_int >= 1){
        result += "I";
        _int -= 1;
    }
    if (result == ""){
        result += "ZERO";
    }
    return result;
}



int main(){

string roma1,roma2;

    while (cin >> roma1){
    if (roma1 == "#"){break;}
    cin >> roma2;

    
    
    cout << intToRoma(abs(romaToInt(roma1) - romaToInt(roma2)))<<endl;
}
    
}

//2025.07.09 AC
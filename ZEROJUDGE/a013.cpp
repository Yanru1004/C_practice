//a013. 羅馬數字

#include <iostream>
#include <string>
#include <map>

using namespace std;

//羅馬數字轉換字典
map<char,int> roma_int={{'M',1000},{'D',500},{'C',100},
                        {'L',50},{'X',10},{'V',5},{'I',1}};


int romaToInt(string roma){
    char pre_text = ' ';
    int result = 0;

    for (int s=0;s<roma.size();s++){
        if (pre_text == ' '){
            pre_text = roma[s];
            continue;
        }
        else{
            
        }

    }
    return 0;
}

int main(){

string roma;
cin >> roma;
romaToInt(roma);


    
}
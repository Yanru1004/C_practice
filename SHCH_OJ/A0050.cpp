//眾志成城

#include <iostream>

using namespace std;

int main(){

    int class_num, student, score, total_score, higest=0;
    string _class, higest_class="";
    
    cin >> class_num; //讀入班級數
        
    for (int i=0; i<class_num; i++){
        cin >> _class; //讀入目前班級
        cin >> student; //讀入學生數
        total_score = 0; //總分初始化
            
        //計算總分
        for (int s=0; s<student; s++){
            cin >> score;
            total_score += score; 
        }

        //最高分判斷
        if (total_score > higest){
            higest = total_score;
            higest_class = _class;
        }            
    }

    //輸出答案

    cout << higest_class << endl << higest;


    return 0;
}
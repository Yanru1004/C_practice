//七張迷你麻將遊戲

#include <iostream>
#include <string>
#include <vector>

using namespace std;



int main(){

    string text = "ABCDE123456";
    vector<int> test;

    for (char s:text){
        test.push_back(s);
    }
    
    cout << text.size()<<endl;

    for (int i=0;i<text.size();i++){
        cout << test[i]<<endl;
    }
    

}

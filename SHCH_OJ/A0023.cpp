//時間差計算

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

vector<int> stotime(string text){

    string part; //宣告part分割後字串
    vector<int> result ={}; //宣告儲存結果的陣列
    stringstream ss(text);

    while (getline(ss,part,':')){
        result.push_back(stoi(part));        
    }

    return result;
}

int main(){

    string text_time;
    vector<int> time_1,time_2;

    cin >> text_time;
    time_1 = stotime(text_time);
    cin >> text_time;
    time_2 = stotime(text_time);

    int s,m=0,h=0;

    s = time_2[2] - time_1[2];
    if (s < 0){
        s+= 60;
        m -= 1;
    }
    m = m + time_2[1] - time_1[1];
    if (m <0){
        m += 60;
        h -= 1;
    }
    h = h + time_2[0] - time_1[0];
    if (h<0){
        h += 24;
    }

    cout <<setfill('0') << setw(2) <<h<<":"
                        << setw(2) <<m<<":"
                        << setw(2) <<s;
    return 0;

}
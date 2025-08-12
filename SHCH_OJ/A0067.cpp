//幸福觀光巴士

#include <iostream>
#include <vector>

using namespace std;

int main(){

    int station,passenger;
    vector<int> up,down;

    cin >> station >> passenger;

    //匯入上車人數
    for (int i=1;i<station;i++){
        int p;
        cin >> p;
        up.push_back(p);
    }

    //匯入下車人數
    for (int i=1;i<station;i++){
        int p;
        cin >> p;
        down.push_back(p);
    }

    //初始化-起點站
    int max_station=0,max_passenger=passenger;
    //出發~
    for (int i=1;i<station;i++){
        passenger = (passenger - down[i-1] + up[i-1]);
        if (passenger > max_passenger){
            max_station = i;
            max_passenger = passenger;
        }
    }
    cout << passenger<<endl;
    cout << max_station <<" "<< max_passenger;

    return 0;
}
//幸福國的身分證統一編號

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){

    string id;

    cin >> id;
    if (id.size() != 6 || !isalpha(id[0]) || (id[1]!='1' && id[1]!='2' )){
        cout << "錯誤";
    }
    else{
        int check_num = ((id[0]-'A') + (id[1]-'0')*2 + (id[2]-'0')*3 + (id[3]-'0')*5 + (id[4]-'0')*7 + (id[5]-'0')*11 )%10;

        cout << id << check_num;
    }
    return 0;
}
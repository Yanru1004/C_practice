//農作物採收問題

#include <iostream>
#include <vector>

using namespace std;

int main(){

    int edge;
    cin >> edge;

    vector<vector<int>> field;
    vector<int> row;

    for (int i=0; i<edge; i++){
        for (int j=0; j<edge; j++){
        
        int num;
        cin >> num;
        row.push_back(num);
        }
        field.push_back(row);
        row.clear();

    }

    for (int i=0; i<edge; i++){
        for (int j=0; j<edge; j++){
            cout << field[i][j] << " ";

        }
        cout << endl;
    }
    





    return 0;
}
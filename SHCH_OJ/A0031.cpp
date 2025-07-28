//農作物採收問題

#include <iostream>
#include <vector>

using namespace std;

//收成分數計算
//field 田地資訊
//x,y   起始座標
//dx,dy 收割範圍
int calc_score(vector<vector<int>> field,int x,int y,int dx,int dy){
  int score = 0;  
  for (int i=0; i<=dx; i++){
    for (int j=0; j<=dy; j++){
      score += field[x+i][y+j];
    }
  }
  return score;
}


int main(){

    int edge;
    cin >> edge;

    vector<vector<int>> field;
    vector<int> row;
    
    //匯入田地資訊
    for (int i=0; i<edge; i++){
        for (int j=0; j<edge; j++){
          int num;
        cin >> num;
        row.push_back(num);
        }
        field.push_back(row);
        row.clear();
    }       
    //收割範圍遍歷
    
    int max_score =0;
    for (int i=0; i<edge; i++){  //收割單位
      for (int j=0; j<edge; j++){
        //收割起始座標
        for (int x=0; x+i<edge; x++){
          for (int y=0; y+j<edge; y++){
            int score;
            score = calc_score(field,x,y,i,j);
            if (score > max_score){
              max_score = score;
            }
          }
        }

      }
    }
    cout << max_score;

    return 0;
}
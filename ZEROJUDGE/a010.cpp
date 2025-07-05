//a010.因數分解
#include <iostream>
#include <vector>

using namespace std;

int main(){

    //輸入欲計算的數字
    int n; 
    cin >> n;
    
    //宣告儲存質數陣列(pn)
    vector<int> pn;

    //-----建立質數表-----
    for (int i=2;i<=n;i++){
        bool isPrime = true;
        
        if (pn.empty()){ //如果pn陣列為空放入i(用於放入2)
            pn.push_back(i);            
            continue;}

        else{
            //pn陣列元素與i相除能整除者非質數，以brrak跳出。
            for (int j=0;j<pn.size() && pn[j]*pn[j] <= i;j++){
                if (i % pn[j] == 0){
                    isPrime = false; //註記為非質數
                    break; }
                }
            //順利脫離迴圈沒被中斷，isPrime改為false。
            //為質數放入pn陣列
            if (isPrime == true){
                pn.push_back(i);}
            
            }           
        }
    
    //進行因數分解
    
    //遍歷質數表
    bool first = true;
    for (int i=0;i<pn.size();i++){
        
        int t = 0;
        while (n % pn[i] == 0){
            n /= pn[i];
            t ++;
        }
        //如果time > 0，進行輸出
        if (t >0){
            (first ? cout <<"":cout<<" * ");
            if (t>1)
                cout << pn[i] << "^" <<t;
            else
                cout << pn[i];
            first = false;
        }


    }

    return 0;
    }
  


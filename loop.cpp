#include <iostream>

using namespace std;

int main(){

    int n = 8;
    int count = 0;

    for (int i= 0;i<n;i++){
        for (int j=i;j<n;j++){
            for (int k=j;k<n;k++){
                count++;
                cout << i <<" "<< j <<" "<< k<<" " << count<<endl;
            }
        }
    }
    cout << count;
    return 0;
}

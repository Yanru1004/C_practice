#include<stdio.h>

int main(){

    int n;
    int num[4];

    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        
        scanf("%d %d %d %d",&num[0],&num[1],&num[2],&num[3]);
        
        //判斷是否為等比數列
        if (num[1]-num[0] == num[2]-num[1]){
            printf("%d %d %d %d %d\n",num[0],num[1],num[2],num[3],num[3]+(num[2]-num[1]));
        }
        else{
            printf("%d %d %d %d %d\n",num[0],num[1],num[2],num[3],num[3]*(num[3]/num[2]));
        }

    }
    return 0;
}
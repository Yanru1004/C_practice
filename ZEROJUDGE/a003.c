#include<stdio.h>

int main(){

    int m,d;
    
    
    scanf("%d %d",&m,&d);

    switch ((m*2+d) % 3){
        case 0:
            printf("普通");
            break;
        case 1:
            printf("吉");
            break;
        case 2:
            printf("大吉");
            break;
    }

    return 0;
}
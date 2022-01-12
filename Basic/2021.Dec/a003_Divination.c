//a003
#include <stdio.h>
int main(){

    int M, D, S;
    scanf("%d %d", &M, &D);
    S = (M * 2 + D) % 3;
    if(S == 0)
        printf("普通\n");
    if(S == 1)
        printf("吉\n");
    if(S == 2)
        printf("大吉\n");

    return 0;
}
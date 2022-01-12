//a004
#include <stdio.h>
int main(){
    
    int inp;
    while (scanf("%d", &inp) != EOF)
        if (inp % 4 == 0 && inp % 100 != 0 || inp % 400 == 0)
            printf("閏年\n");
        else
            printf("平年\n");

    return 0;
}
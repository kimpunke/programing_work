#include <stdio.h>

int main(){

    int a,b,c,i;
    scanf("%d %d %d", &a, &b, &c);
    
    for(i=0; i <= c; i++){
        a=a*b;
    }
    printf("%d", a);

    return 0;
}


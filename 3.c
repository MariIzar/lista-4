#include <stdio.h>
int main (){
    int n, num = 1;
    printf ("digite quantos numeros da sequencia: ");
    scanf("%d" ,&n);
    printf("os %d primeiros numeros da sequencia: ",n);
    while (n>0){
        num += 2;
        if ((num%3 == 0) && (num%5 == 0) || (num%7 ==0)){
        printf ("%d ", num);
        n--;
    }
    }
    return 0;
}
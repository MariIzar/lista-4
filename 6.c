#include <stdio.h>
int main (){
    int n, pares=0;
    printf ("digite uma sequencia de valores e 0 para encerrar: \n");
    scanf("%d", &n);
    do{
        if ( n!=0 && n%2==0 ) {
           pares++;
        }
    } while (n!=0);
    printf("A quantidade de numeros pares informados sao: %d\n", pares);
    return 0;
}
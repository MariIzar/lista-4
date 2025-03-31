#include <stdio.h>
int main(){
    int n, numero, soma=0;
    printf ("digite a quantidade de numeros que deseja informar: ");
    scanf ("%d", &n);
    while (n>0){
        printf("digite um numero: ");
        scanf("%d", &numero);
        soma=soma+numero;
        n=n-1;
    }
    printf("a soma deles e: %d", soma);
    return 0;
}
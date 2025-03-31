#include <stdio.h>
int main (){
    int n, num = 1;
    printf ("digite quantos numeros da sequencia: ");
    scanf("%d" ,&n);
    printf("os %d primeiros numeros impares: ",n);
    while (n>0){
        printf ("%d ", num);
        num += 2;
        n--;
    }
    return 0;
}
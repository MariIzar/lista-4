#include <stdio.h>
int main (){
    int a, b, resultado=0;
    printf ("Digite um intervalo com valores de a e b inteiros: ");
    scanf ("%d %d", &a, &b);
    for (int i=a; (i>=a && i<=b); i++){
        if(i%5==0){
            printf ("%d \n", i);
            resultado=1;
        } 
    }
    if (!resultado) {
        printf("nao tem multiplo\n");}
    return 0;
}
    

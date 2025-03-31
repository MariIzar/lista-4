#include <stdio.h>
int main() {
    int n, positivos = 0, negativos = 0, total = 0;
    float porcentagem1, porcentagem2;
    printf("Digite uma sequencia de valores, digite 0 para encerrar:\n");
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            printf("encerrou\n");
            break;
        }
        if (n > 0) {
            positivos++;
        } else {
            negativos++;
        }
        total++;
    }
    if (total > 0) {
        porcentagem1 = (float)positivos / total * 100;
        porcentagem2 = (float)negativos / total * 100;
        printf("os positivos sao: %d\n", positivos);
        printf("os negativos sao: %d\n", negativos);
        printf("percentual de valores positivos sao: %2f%%\n", porcentagem1);
        printf("percentual de valores negativos sao: %2f%%\n", porcentagem2);
    } else {
        printf("nenhum valor foi digitado.\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int x, y;
    printf("Digite as coordenadas (x, y): ");
    scanf("%d %d", &x, &y);
    while (1) { 
        if (x == 0 && y == 0) {
            printf("origem \n");
            break;
        } 
        else if (x > 0 && y > 0) {
            printf("Esta no 1o quadrante\n");
        } 
        else if (x < 0 && y > 0) {
            printf("Esta no 2o quadrante\n");
        } 
        else if (x < 0 && y < 0) {
            printf("Esta no 3o quadrante\n");
        } 
        else if (x > 0 && y < 0) {
            printf("Esta no 4o quadrante\n");
        }
    }

    return 0;
}
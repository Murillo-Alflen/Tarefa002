#include <stdio.h>
#include <stdlib.h>

int main() {

    float raio, area;

    printf("Digite o raio do círculo:\n");
    scanf("%f", &raio);

    area = pi * pow(raio,2);

    printf("Área do círculo: %.2f\n", area);

    return 0;
}

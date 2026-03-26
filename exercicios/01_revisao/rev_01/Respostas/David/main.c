#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float xa, ya, ra;
    printf("Digite a coordenada x do alvo:\n");
    scanf("%f\n", &xa);
    printf("Digite a coordenada y do alvo:\n");
    scanf("%f\n", &ya);
    printf("Digite o raio do alvo:\n");
    scanf("%f\n", &ra);

    float xd, yd, rd;
    printf("Digite a coordenada x do disparo:\n");
    scanf("%f\n", &xd);
    printf("Digite a coordenada y do disparo:\n");
    scanf("%f\n", &yd);
    printf("Digite o raio do disparo:\n");
    scanf("%f\n", &rd);

    float distancia = ((xd - xa) * (xd - xa)) + ((yd - ya) * (yd - ya));
    if (distancia <= (ra + rd) * (ra + rd))
    {
        printf("Acertou o alvo!\n");
    }
    else
    {
        printf("Errou o alvo!\n");
    }

    return 0;
}

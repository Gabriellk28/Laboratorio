#include<stdio.h>
#include<math.h>
void calcula_hexagono(float l, float *area, float *perimetro)
{
    *area= (3*(pow(l,2)))*sqrt(3);
    *perimetro=l*6;
    printf("A área do hexagono é: %.2f\n", *area);
    printf("O perímtero do hexagono é: %.2f\n", *perimetro);
}
int main(void)
{
    float lado, area, perimetro;
    printf("Informe o comprimento do lado do hexagono:\n");
    scanf(" %f", &lado);
    calcula_hexagono(lado, &area, &perimetro);
    return 0;
}
#include <stdio.h>

int main()
{
    int tipotemperatura;
    float temperatura_final, temperatura, temperatura_antes;

    printf("Informe o valor da temperatura: \n");
    scanf("%f", &temperatura_antes);
    printf("Escolha a escala de temperatura: \n");
    printf("1-Celsius, 2-Fahrenheit: \n");
    scanf("%d",&tipotemperatura);
    
    switch(tipotemperatura) {
        case 1:
        temperatura_final=(temperatura_antes)*(9/5)+32;
        break;
        case 2:
        temperatura_final=(temperatura_antes-32)*5/9;
        break;
    }
    printf("O resultado da conversão é: %f\n", temperatura_final);
    
    return 0;
}

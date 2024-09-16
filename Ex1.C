    #include <stdio.h>
    int main() {
    int dimensoes, classes;
        printf("Escolha um um numero entre 1-255 \n");
        scanf("%d",&dimensoes);
    while(dimensoes >= 1 && dimensoes<= 255) {
            if (dimensoes >=1 && dimensoes<=127)
            printf("A classe que corresponde ao valor escolhido e: A\n");
            if (dimensoes >=128 && dimensoes<=191)
            printf("A classe que corresponde ao valor escolhido e: B\n");
            if (dimensoes >=192 && dimensoes<=223)
            printf("A classe que corresponde ao valor escolhido e: C\n");
            if (dimensoes >=224 && dimensoes<=239)
            printf("A classe que corresponde ao valor escolhido e: D\n");
            if (dimensoes >=240 && dimensoes<=255)
            printf("A classe que corresponde ao valor escolhido e: D\n");
            else ("Tente novamente");
            break;
}

    printf("Programa encerrado.");

        return (0);
    }

#include <stdio.h>
int main () {
    int oct, oct1, oct2, oct3, oct4;
    char class;
    
    printf("Informe seu endereço IP: \n");
    scanf( "%d.%d.%d.%d",&oct1,&oct2,&oct3,&oct4);
    do{
        if(oct1>=1 && oct<=127);
        printf("A classe do seu IP é: A ");
        break;
        if(oct1>=128 && oct<=191);
        printf("A classe do seu IP é: B ");
        break;
        if(oct1>=192 && oct<=223);
        printf("A classe do seu IP é: C ");
        break;
        if(oct1>=224 && oct<=239);
        printf("A classe do seu IP é: D ");
        break;
        if(oct1>=240 && oct<=255);
        printf("A classe do seu IP é: E ");
        break;
    }while(oct1>0 && oct1<256);
    
    
    return(0);
}

#include <stdio.h>
int main() {
	float gravidade_relativa, peso, peso_final;
	int codigo_plan;

	printf("Digite o seu peso em KG: \n");
	scanf("%f",&peso);
	printf("Escolha um dos seguintes planetas: \n");
	printf("1-Mercurio, 2-VC*nus, 3-Marte, 4-Jupiter, 5-Saturno. \n");
	scanf("%d",&codigo_plan);

	switch(codigo_plan) {
	case 1:
		peso_final=peso*0.37;
		break;
	case 2:
		peso_final=peso*0.88;
		break;
	case 3:
		peso_final=peso*0.33;
		break;
	case 4:
		peso_final=peso*2.64;
		break;
	case 5:
		peso_final=peso*1.15;
		break;
	default:
		printf("Tente novamente. \n");
		break;
	}

	printf("Seu peso no planeta escolhido seria: %f\n", peso_final)
	return(0);
}

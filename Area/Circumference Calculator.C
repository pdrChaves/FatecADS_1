#include <stdio.h>
#include <math.h>

int main() {
	int operador;
	float area_circ,perimetro_circ,raio;

	printf("Escolha entre a circunferC*ncia ou o perC-metro da figura: \n");
	printf("1-PerC-metro \n2-CircunferC*ncia\n");
	scanf("%d",&operador);
	printf("Defina o raio da figura em questC#o: \n");
	scanf("%f",&raio);

	if (operador==1) {
		perimetro_circ=2*3.14*(raio);
		printf("O perimetro da figura em questC#o serC!: %f\n", perimetro_circ);
	}
	else {
		area_circ=sqrt(raio)*3.14;
		printf("O raio da figura em questC#o serC!: %f\n",area_circ);
	}


	return(0);
}

#include <stdio.h>
#include <stdlib.h>

float presion(float f,float s){
	float p;
	p=f/s;
	return p;
}

int main() {
	float s,f,p;
	printf("Ingrese superficie: ");
	scanf("%f",&s);
	printf("Ingrese fuerza: ");
	scanf("%f",&f);
	p=presion(f,s);
	printf("La presion es de %.2f\n",p);
	system("pause");
	return 0;
}

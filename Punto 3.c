#include <stdio.h>
#include <stdlib.h>

float poh(float h,float m){
	float ph;
	ph=h*100/(h+m);
	return ph;
}
	
float pom(float h,float m){
	float pm;
	pm=m*100/(h+m);
	return pm;
}
	
int main() {
	float h,m,ph,pm;
    printf("Ingrese cantidad de hombres: ");
	scanf("%f",&h);
	printf("Ingrese cantidad de mujeres: ");
	scanf("%f",&m);
	ph=poh(h,m);
	pm=pom(h,m);
	printf("El porcentaje de mujeres es de %.2f\n",pm);
	printf("El porcentaje de hombres es de %.2f\n",ph);
	system("pause");
	return 0;
}
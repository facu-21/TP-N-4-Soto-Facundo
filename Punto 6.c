#include <stdio.h>
#include <stdlib.h>

float oct(float n){
	return n/8;
}
	
int main() {
	float n,o;
	printf("Ingrese un numero: ");
	scanf("%f",&n);
	o=oct(n);	
    printf("La octava parte de %.2f es %.2f\n",n,o);
	system("pause");
	return 0;
}

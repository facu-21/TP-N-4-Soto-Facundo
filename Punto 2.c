#include <stdio.h>
#include <stdlib.h>

int peri(int l1,int l2){
	int p;
	
	p=l1*2+l2*2;
	return p;
}
	
	float area(int l1,int l2){
		float a;
		a=l1*l2;
		return a;
	}
		
		int main() {
			int l1,l2,p;
			float a;
			
			printf("Ingrese lado 1: ");
			scanf("%d",&l1);
			printf("Ingrese lado 2: ");
			scanf("%d",&l2);
			a=area(l1,l2);
			p=peri(l1,l2);
			printf("El perimetro del rectangulo es: %d\n",p);
			printf("El area del rectangulo es: %.2f\n",a);
			system("pause");
			return 0;
		}

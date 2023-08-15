#include <stdio.h>
#include <stdlib.h>

int cmp(int n1,int n2){
	int c;
	if(n1==n2){
		c=0;
	}
	else{
		if(n1>n2){
			c=1;
		}
		else{
			c=2;
		}
	}
	return c;
}

int main() {
	int n1,n2,c;
	printf("Ingrese un numero: ");
	scanf("%d",&n1);
	printf("Ingrese otro numero: ");
	scanf("%d",&n2);
	c=cmp(n1,n2);
	if(c==0){
		printf("Los numeros son iguales\n");
	}
	if(c==1){
		printf("%d es mayor que %d\n",n1,n2);
	}
	if(c==2){
		printf("%d es mayor que %d\n",n2,n1);
	}
	system("pause");
	return 0;
}

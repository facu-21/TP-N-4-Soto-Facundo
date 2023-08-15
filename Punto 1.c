#include <stdio.h>
#include <stdlib.h>

int num(int n){
	printf("Ingrese un numero: ");
	scanf("%d",&n);
	return n;
}

int main() {
	int n1,n2;
	n1=num(n1);
	n2=num(n2);
	printf("%d\n",n1);
	printf("%d\n",n2);
	system("pause");
	return 0;
}

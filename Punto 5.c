#include <stdio.h>
#include <stdlib.h>

int res(int r,int rt,int i){
	printf("Ingrese una resistencia: ");
	scanf("%d",&r);
	printf("Resistencia numero %d: %d\n",i,r);
	rt=rt+r;
	if(i==5){
		printf("La resistencia total es equivalente a %d ohm\n",rt);
	}
	return rt;
}

int main(){
	int r,rt,i;
	rt=0; r=0;
	for(i=1;i<=5;i++){
		rt=res(r,rt,i);
	}
	system("pause");
	return 0;
}

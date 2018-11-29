//0050016037
#include<stdio.h>
int main ()
{
	int objeto[3000], cont, mini, quan=1;
	
	for(cont=0, cont<3000, cont++){
		printf("Coloque o peso do objeto %d em gramas:", cont+1);
		scanf("%d", objeto[cont]);
	}
	mini=objeto[0]
	for (cont=1, cont<3000, cont++){
		if(objeto[cont]<mini){
			mini=objeto[cont];
		}
		else if(objeto[cont]=mini){
			quan++;
		}
	}
	printf("O menor peso e %d e tem %d objetos com esse peso.",mini, quant);
	
	system("pause");
	return 0;
}

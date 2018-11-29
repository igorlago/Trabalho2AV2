//0050016037
#include<stdio.h>
int main ()
{
	int objeto[5], cont, mini, quan=0;
	
	for(cont=0; cont<5; cont++){
		printf("Coloque o peso do objeto %d em gramas:", cont+1);
		scanf("%d", &objeto[cont]);
	}
	mini=objeto[0];
	for (cont=0; cont<5; cont++){
		if(objeto[cont]<mini){
			mini=objeto[cont];
			quan=0;
		}
		else if(objeto[cont]==mini){
			quan++;
		}
	}
	printf("O menor peso e %d e tem %d objetos com esse peso.",mini, quan);
	
	system("pause");
	return 0;
}

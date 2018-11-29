//0050016037
#include<stdio.h>
#include<string.h>
int main()
{
	int cont, quan=0, tan;
	char pa[30], let;
	
	printf("\nEntre com uma palavra:");
	gets(pa);
	tan=strlen(pa);
	printf("\nEntre com uma letra:");
	scanf("%c", &let);
	
	for(cont=0; cont<tan; cont++){
		if(pa[cont]==let){
			quan++;
		}
	}
	printf("A letra %c apareceu %d vezes.",let ,quan);
	system("pause");
	return 0;
}

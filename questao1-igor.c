//0050016037
#include<stdio.h>
int main ()
{
	int mat[4][4];
	int li, co;
	int soma;
	
	for(li=0; li<4; li++){
		for(co=0; co<4; co++){
		printf("Coloque o valor da linha %d, colouna %d: ", li+1, co+1);
		scanf("%d",&mat[li][co]);	
		}
	}
	soma=0;
	for(co=0; co<4; co++){
		soma=mat[2][co]+soma;
	}
	for(li=0; li<4; li++){
		soma=mat[li][1]=soma;
	}
	printf("A soma da linha 3 com a coluna 2 = %d", soma);
	system("pause");
	return 0;
}

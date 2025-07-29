#include<stdio.h>
#include"functii.h"

int main()
{
	int M,N,K;
	PUNCT casuteR[10];
	PUNCT casuteA[10];
	LINIE poteci[10];
	printf("\nnr pitici cu scufie rosie: ");
	scanf("%d",&M);
	citireCasute(casuteR,M);
	printf("\nnr pitici cu scufie albastra: ");
	scanf("%d",&N);
	citireCasute(casuteA,N);
	printf("\nnr sfetnici: ");
	scanf("%d",&K);
	citirePoteci(poteci,K);

	printf("\n\n");
	for(int i=0;i<K;++i)
	{
		if(verifPoteca(casuteR,casuteA,poteci[i],M,N))
			printf("DA - Sfetnicul %d a dat o  solutie valida\n",i);
		else printf("NU - Sfetnicul %d a dat o solutie invalida\n",i);
	}

	return 0;
}

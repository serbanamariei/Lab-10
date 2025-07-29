#include<stdio.h>
#include"functii.h"

void citireCasute(PUNCT casa[], int nr)
{
	printf("\nCititi coordonatele fiecarei casute (x,y):\n");
	for(int i=0;i<nr;++i)
	{
		printf("casuta[%d]: ",i);
		scanf(" (%lf,%lf)",&casa[i].x,&casa[i].y);
	}
}

void citirePoteci(LINIE poteca[], int nr)
{
	printf("\nIntroduceti punctele care determina poteca (x,y):\n");
	for(int i=0;i<nr;++i)
	{
		PUNCT p1,p2;
		printf("p1: ");
		scanf(" (%lf,%lf)",&p1.x,&p1.y);
		printf("p2: ");
		scanf(" (%lf,%lf)",&p2.x,&p2.y);

		poteca[i].a=p1.y-p2.y;
		poteca[i].b=p2.x-p1.x;
		poteca[i].c=p1.x*p2.y-p2.x*p1.y;
	}
}

int verifPoteca(PUNCT casaR[], PUNCT casaA[], LINIE poteca, int M, int N)
{
	double semnR=poteca.a*casaR[0].x+poteca.b*casaR[0].y+poteca.c;
	double semnA=poteca.a*casaA[0].x+poteca.b*casaA[0].y+poteca.c;

	if(semnR==semnA) return 0;
	for(int i=1;i<M;++i) 
		if((poteca.a*casaR[i].x+poteca.b*casaR[i].y+poteca.c)*semnR<=0)
			return 0;
	for(int i=1;i<N;++i)
		if((poteca.a*casaA[i].x+poteca.b*casaA[i].y+poteca.c)*semnA<=0)
			return 0;
	
	return 1;
}

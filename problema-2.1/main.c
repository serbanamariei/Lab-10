#include<stdio.h>
#include"functii.h"

int main()
{
	int n;
	PUNCT v[10];
	printf("Numar varfuri: ");
	scanf("%d",&n);
	printf("\nIntroduceti punctele:\n");
	citire(v,n);
	printf("\npentru poligonul:\n");
	char c='A';
	for(int i=0;i<n;++i)
	{
		printf("%c(%.2lf,%.2lf)",c,v[i].x,v[i].y);
		if((i+1)%5==0) printf("\n");
		else printf("\t");
		c++;
	}
	printf("\nAria = %.3lf\n",arieTotala(v,n));
	printf("Perimetrul = %.3lf\n",perimetru(v,n));

	return 0;
}

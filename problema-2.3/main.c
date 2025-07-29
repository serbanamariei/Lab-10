#include<stdio.h>
#include"functii.h"

int main()
{
	int n;
	printf("n = ");
	scanf("%d",&n);
	PUNCT p[10];
	citire(p,n);
	printf("\nEcuatia dreptei este:\n");
	printf("\t\t(y - %.2lf)/(%.2lf - %.2lf) = (x - %.2lf)/(%.2lf - %.2lf)\n",p[0].y,p[1].y,p[0].y,p[0].x,p[1].x,p[0].x);
	double dify=p[1].y-p[0].y;
	double difx=p[1].x-p[0].x;
	LINIE ec;
	ec.m=dify/difx;
	ec.n=p[0].y-ec.m*p[0].x;
	printf("Care se rescrie ca:\n");
	printf("\t\ty = %.2lf * x + %.2lf\n",ec.m,ec.n);

	verifDr(p,ec,n);
	verifCol(p,n);

	return 0;
}

#include<stdio.h>
#include"functii.h"

void citire(PUNCT coord[], int n)
{
	printf("Cititi punctele din plan (x,y):\n");
	for(int i=0;i<n;++i)
	{
		printf("punct[%d]: ",i);
		scanf(" (%lf,%lf)",&coord[i].x,&coord[i].y);
	}
}

void verifDr(PUNCT p[], LINIE d, int n)
{
	printf("\n\nPunctele care apartin dreptei de ecuatie:\n");
	printf("\t\ty = %.2lf * x + %.2lf\n\n",d.m,d.n);
	for(int i=0;i<n;++i)
	{
		if(p[i].y==d.m*p[i].x+d.n)
			printf("(%.2lf,%.2lf) ",p[i].x,p[i].y);
	}

	printf("\n\nPunctele care NU apartin dreptei:\n");
	for(int i=0;i<n;++i)
	{
		if(!(p[i].y==(d.m*p[i].x+d.n)))
		{
			printf("(%.2lf,%.2lf) ",p[i].x,p[i].y);
		}
	}
}

void verifCol(PUNCT p[], int n)
{
	for(int i=0;i<n-2;++i)
	{
		PUNCT p1=p[i];
		PUNCT p2=p[i+1];
		PUNCT p3=p[i+2];
		if((p1.x*p2.y+p2.x*p3.y+p1.y*p3.x-p3.x*p2.y-p3.y*p1.x-p2.x*p1.y)==0)
			printf("\n\nPunctele: (%.2lf,%.2lf) (%.2lf,%.2lf) (%.2lf,%.2lf) sunt COLINIARE\n",p1.x,p1.y,p2.x,p2.y,p3.x,p3.y);
	}
}

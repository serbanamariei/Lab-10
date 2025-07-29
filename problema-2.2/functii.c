#include<stdio.h>
#include<math.h>
#include"functii.h"

void citire(PUNCT v[], int n)
{
	for(int i=0;i<n;++i)
	{
		printf("v[%d].x = ",i);
		scanf("%lf",&v[i].x);
		printf("v[%d].y = ",i);
		scanf("%lf",&v[i].y);
	}
}

double dist(PUNCT a, PUNCT b)
{
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

double semip(PUNCT a, PUNCT b, PUNCT c)
{
	double p=dist(a,b) + dist(b,c) + dist(c,a);
	return p/2;
}

double arieTriunghi(PUNCT a, PUNCT b, PUNCT c)
{
	double p=semip(a,b,c);
	return sqrt(p*(p-dist(a,b))*(p-dist(b,c))*(p-dist(c,a)));
}

double perimetru(PUNCT v[], int n)
{
	double p=0;
	for(int i=0;i<n-1;++i)
	{
		p+=dist(v[i],v[i+1]);
	}
	p+=dist(v[n-1],v[0]);

	return p;
}

double arieTotala(PUNCT v[], int n)
{
	double aTotala=0;
	PUNCT p1=v[0],p2=v[1];
	for(int i=2;i<n;++i)
	{
		aTotala+=arieTriunghi(p1,p2,v[i]);
		p2=v[i];
	}

	return aTotala;
}

int verifCerc(PUNCT p, CERC c)
{
	if(dist(p,c.centru)<=c.raza) return 1;
	return 0;
}

int verifDrept(PUNCT p, DREPTUNGHI d)
{
	if(p.x>=d.ss.x && p.x<=d.dj.x && p.y>=d.dj.y && p.y<=d.ss.y) return 1;
	return 0;
}

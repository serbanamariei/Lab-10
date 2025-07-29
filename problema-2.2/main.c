#include<stdio.h>
#include"functii.h"

int main()
{
	CERC c;
	DREPTUNGHI d;
	printf("Introduceti datele cercului:\n");
	printf("Centrul cercului (x,y): ");
	scanf("(%lf,%lf)",&c.centru.x,&c.centru.y);
	printf("raza cercului = ");
	scanf("%lf",&c.raza);
	printf("\nAcum introduceti datele dreptunghiului:\n");
	printf("coordonate colt stanga sus (x,y): ");
	scanf(" (%lf,%lf)",&d.ss.x,&d.ss.y);
	printf("coordonate colt dreapta jos (x,y): ");
	scanf(" (%lf,%lf)",&d.dj.x,&d.dj.y);

	PUNCT p;
	printf("\nAcum introduceti coordonatele punctului ales de dvs (x,y): ");
	scanf(" (%lf,%lf)",&p.x,&p.y);

	if(verifCerc(p,c)) printf("\nPunctul ales de dvs se afla in interiorul cercului\n");
	else printf("\nPunctul ales de dvs NU se afla in interiorul cercului\n");
	if(verifDrept(p,d)) printf("\nPunctul ales de dvs se afla in interiorul dreptunghiului\n");
	else printf("\nPunctul ales de dvs NU se afla in interiorul dreptunghiului\n");

	return 0;
}

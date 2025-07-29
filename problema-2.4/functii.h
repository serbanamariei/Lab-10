#ifndef FUNCTII_H_
#define FUNCTII_H_

struct _PUNCT{
	double x;
	double y;
};
typedef struct _PUNCT PUNCT;

struct _LINIE{
	double a;
	double b;
	double c;
};
typedef struct _LINIE LINIE;

void citireCasute(PUNCT casa[], int nr);
void citirePoteci(LINIE poteca[], int nr);
int verifPoteca(PUNCT casaR[], PUNCT casaA[], LINIE poteca, int M, int N);

#endif

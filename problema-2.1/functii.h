#ifndef FUNCTII_H_
#define FUNCTII_H_

struct _PUNCT{
	double x;
	double y;
};
typedef struct _PUNCT PUNCT;

void citire(PUNCT v[], int n);
double dist(PUNCT a, PUNCT b);
double arieTriunghi(PUNCT a, PUNCT b, PUNCT c);
double semip(PUNCT a, PUNCT b, PUNCT c);
double perimetru(PUNCT v[], int n);
double arieTotala(PUNCT v[], int n);

#endif

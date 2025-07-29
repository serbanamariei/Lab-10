#ifndef FUNCTII_H_
#define FUNCTII_H_

struct _PUNCT{
	double x;
	double y;
};
typedef struct _PUNCT PUNCT;

struct _LINIE{
	double m;	// panta
	double n;	// taietura
};
typedef struct _LINIE LINIE;

void citire(PUNCT coord[], int n);
void verifDr(PUNCT p[], LINIE d, int n);
void verifCol(PUNCT p[], int n);

#endif

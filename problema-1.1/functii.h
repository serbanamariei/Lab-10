#ifndef FUNCTII_H_
#define FUNCTII_H_

struct _FRACTIE{
	int numarator;
	int numitor;
};
typedef struct _FRACTIE FRACTIE;

FRACTIE inversa(FRACTIE f);
int cmmdc(int a, int b);
FRACTIE suma(FRACTIE a, FRACTIE b);
FRACTIE dif(FRACTIE a, FRACTIE b);
FRACTIE produs(FRACTIE a, FRACTIE b);


#endif

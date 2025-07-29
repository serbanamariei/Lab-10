#ifndef FUNCTII_H_
#define FUNCTII_H_

struct _TIMP{
	int ora;
	int min;
	int sec;
};
typedef struct _TIMP TIMP;

TIMP suma(TIMP t1, TIMP t2);
TIMP dif(TIMP t1, TIMP t2);

#endif

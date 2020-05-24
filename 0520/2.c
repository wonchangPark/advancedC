#include<stdio.h>

#define SQR(x) ((x)*(x))
inline int sqr(int x) { return x * x; }

int main() {
	int x = 2;
	//int n = SQR(++x);	//((++x)*(++x))	
	int n = sqr(++x);
	printf("%d\n", n);
}
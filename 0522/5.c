
#include<stdio.h>
#include<stdint.h> // unitmax_t -> 해당 시스템에서 제공할 수 있는 부호없는 가장 큰 타입

//아래의 코드는플랫폼에 따라 다른 값이 나오게 됩니다.
// Windows: 64 비트 시스템에서 long은 4바이트
// Linux: 64 비트 시스템에서 long은 8바이트
int main() {
	unsigned int a, b;
	uintmax_t c;// unsigned long c;

	a = 1000000000;	//10 억
	b = 10;

	c = (uintmax_t)a * b;
	printf("%llu\n", c);
}
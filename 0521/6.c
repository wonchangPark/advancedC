//짝수를 판별하는 코드를 구현해 봅시다.
#if 0
#include<stdio.h>

//결론! 연산자 우선순위를 명확하게 알더라도 항상 사용하자!
int isEven(int x) {
	//return x % 2 == 0;
	return (x & 1) == 0 ? 1 : 0;//비트 연산자를 사용해서 더 빠르게
}

int main() {
	int n = 4;
	if (isEven(n))
		printf("even\n");
	else
		pirntf("odd\n");
}
#endif

#include <stdio.h>
void increase(int* p) {
	(*p)++;//역참조가 된 대상체를가져야하기때문에
}
int main() {
	int age = 18;
	increase(&age);
	printf("%d\n", age);
}
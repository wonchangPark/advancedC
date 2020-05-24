
#include<stdio.h>

// char, signed char, unsigned char를 통틀어 문자 타입이라고 합니다.
// 이때, char 타입은 C 표준에서 명확하게 부호 있는 타입인지 부호 없는 타입인지를 명시하지 않고 있습니다.
// 다만 문자를 저장할때는 char를 부호 ㅇ벗는 정수를 저장할때는 unsigned char를 
// 부호 있는 정수를 저장할때는 signed char를 사용하라고 권장하고 있습니다.
// 따라서 수를 저장할 때는 부호의 유무를 정확하게 명시하여 사용해야 합니다!
// 어차피 char를 써서 메모리 아끼려고 한다고 해도 int형으로 확장되기에 그냥int형을 사용하세요.
int main() {
	unsigned char c = 200;
	int i = 1000;
	printf("%d\n", i / c);

	signed char x = -1;	// 1111 1111
	printf("%u\n", x);	// 255가 나와야하지만 자동으로 확장되서 4바이트 크기로 됩니다.

}
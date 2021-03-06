#if 0
#include <stdio.h>
#include <stdarg.h>
// int average(int a, int b, int c) {return (a + b + c) / 3;}
//...은 가변 인자라고 하고 컴파일로 하여금 매개변수의 개수를 조사하지 말라는 문법입니다.
//얘네를 꺼내오기 위해서 <stdargs.h>를 인클루드해서 va_list, va_args를 사용합니다.
//가변인자를 사용하려면 반드시 첫 번째 매개변수는 고정되어 있어야 합니다.

#define VA_END	(-1)
int average(int a, ...) {
	
	//1.가변 인자 리스트 선언
	va_list args;

	//2. 가변 인자 리스트 초기화
	va_start(args, a);

	int cnt = 0;
	int sum = 0;
	
	int i = a;
	while (i != VA_END) {
		sum += i;
		++cnt;
		i = va_arg(args, int);	//3.다음 매개변수를 읽어옴
	}
	//4.가변인자 리스트 마무리(cleanup)
	va_end(args);
	return cnt ? sum / cnt : 0;
}

int main() {
	printf("%d\n", average(10, 20, 30, VA_END));
									//	^---센티널
	//만약 센티널을 사용자가 안썼다면 이상한 값이 나옵니다.
	//즉 버그가 나옵니다.
	//연습문제: 센티널을 사용하지 않고도 평균을 올바르게 계산할 수 있도록 함수를 변경해보세요.
}


#endif
#include <stdio.h>
#include <stdarg.h>
//이전 코드는 센티널을 반드시 사용해야 한다는 단점이 있습니다. 이를 해결하기 위해 
//매개변수의 개수를 사용자로부터 전달 받도록 합니다.
int average(int cnt, ...) {
	if (cnt == 0)
		return 0;
	else if (cnt < 0)
		return -1;
	va_list args;
	va_start(args, cnt);

	int sum = 0;
	for (int i = 0; i < cnt; i++)
		sum += va_arg(args, int);
	va_end(args);
	return sum / cnt;
}

int main() {
	printf("%d\n", average(3, 10,20,30));
}
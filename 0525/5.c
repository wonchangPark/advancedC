
#include<stdio.h>

// 문자열 상수에 대한 포인터를 선언할 경우, 반드시 상수 지시 포인터를 사용해야 합니다.

int main() {
	// 둘의 차이점을 생각해 보세요 
	char s1[] = "hello, world";			// 문자열 배열
	//char *s2 = "hello, world";
	const char *s2 = "hello, world";	//문자열 포인터

	s1[0] = ' ';	// OK
	s2[0] = ' ';	// NOT OK

	//s1의 경우는 read only 영역의 hello문자열을 스택으로 카피해 온다. 즉 read write영역에 오게 되므로 고치는 것이 문제없다. 
	//s2의 경우는 read only 영역에 만들어진 hello문자열을 가리키는게 된다.즉 read write영역인 스택에 주소를 가지고 오고 그 주소값을 가진다.
	// 그래서 고치는 것이 불가능하다. 런타임에 죽는다. 
	// 일단 컴파일러는 주소가 가리키는 곳이 read only 인지 잘 모르기 때문에 그냥 일단 믿고 넘기지만 read only 영역에서 고치려는 시도를 하므로 런타임에 에러가 난다.
	// 따라서 char *s2가 아니라 const char *s2로 해줘서 컴파일타임에 에러가 나오도록 한다.

	printf("%s\n", s1); 
	printf("%s\n", s2); 
}
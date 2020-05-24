#include<stdio.h>
//함수 선언 시 , 타입 정보를 적절하게 선언해라!!
//함수 포인터 또한 사용할때 주의해야 한다.
int foo(int a, int b, int c);
int main() {
	//int ret = foo(1, 2);
	int(*fp)(int, int) = foo;	
	//잘못됬음에도 에러가 나지 않고 쓰레기 값을 넣음
	fp(1, 2);
}

int foo(int a, int b, int c) {
	printf("foo(%d, %d, %d)\n", a, b, c);
	return 0;
}

// 숙제, 기술문서 제출: checkdisk@naver.com
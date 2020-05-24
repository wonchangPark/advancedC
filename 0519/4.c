
// 함수의 반환과 인자 전달
#include<stdio.h>

typedef void(*FP)(int) ;


void foo(int a) {
	printf("foo(%d)\n", a);
}

//void goo(FP fp, int a )
void goo(void(*fp)(int), int a) {	//인자
	fp(a);	//goo는 오른쪽에 (가 있으므로 함수이다.  void(*fp)(int), int a를 인자로 받는.
}

//FP hoo()
void(*hoo())(int){//리턴
	return foo;	//hoo는 오른쪽에 ()를 보고 함수이다. void*(int)를 리턴하는.
}

//FP zoo(FP fp)
void(*zoo(void(*fp)(int)))(int){	//리턴, 인자 둘다 한것.
	return fp;
}

int main() {
	foo(10);
	goo(foo, 10);
	hoo()(10);
	zoo(foo)(10);
}
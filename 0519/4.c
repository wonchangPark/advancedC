
// �Լ��� ��ȯ�� ���� ����
#include<stdio.h>

typedef void(*FP)(int) ;


void foo(int a) {
	printf("foo(%d)\n", a);
}

//void goo(FP fp, int a )
void goo(void(*fp)(int), int a) {	//����
	fp(a);	//goo�� �����ʿ� (�� �����Ƿ� �Լ��̴�.  void(*fp)(int), int a�� ���ڷ� �޴�.
}

//FP hoo()
void(*hoo())(int){//����
	return foo;	//hoo�� �����ʿ� ()�� ���� �Լ��̴�. void*(int)�� �����ϴ�.
}

//FP zoo(FP fp)
void(*zoo(void(*fp)(int)))(int){	//����, ���� �Ѵ� �Ѱ�.
	return fp;
}

int main() {
	foo(10);
	goo(foo, 10);
	hoo()(10);
	zoo(foo)(10);
}
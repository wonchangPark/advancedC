#if 0
// 정보 은닉
// 정보를 저장하는 스택 자료구조를 생각해 봅시다.
#include <stdlib.h>
struct Stack {
	int* arr;	//int arr[3]
	int top;
	int size;
};
typedef struct Stack Stack;

Stack* createStack(int size) {
	Stack* p = calloc(1, sizeof(Stack));
	p->arr = malloc(sizeof(int) * size);
	p->size = size;
	return p;
}

int main() {
	Stack* s = createStack(5);
}

#endif
#if 1
//typedef struct Node {
//	//...
//	struct Node* next;	//OK, 포인터의 크기는 이미 정해져있기때문(4바이트)
//	struct Node node;	//ERROR, 타입 정보가 완벽하게 정의되어 있지 않기 때문
//};



//2.c(main.c)
#include"Stack.h"
//이런식의 모듈화를 해야한다. 생산성도 올라가고 간단 명료해지기때문이다.

int main() {
	Stack* s = createStack(5);
	//push(s, 10);
	s->top = 0;	//불완전한 타입을 사용했기에 안의 내용을 알수없어서 에러가 난다.
	//push를 이용해서 여러개 넣어놨는데 
	//s->top =0;을 하게 되면 top이 스택에 push할수록
	//올라가다가 0을 임의로 조정하게되면 사실상 비어있는것과 마찬가지가 된다.
}	//따라서 정보은닉이 필요하게 된다.
	//모든 것들이 public형이라서 개나소나 접근이 가능하다.
	//따라서 위의 top을 조정하는 경우가 발생하면 에러가 발생하도록 짜보자.

#endif
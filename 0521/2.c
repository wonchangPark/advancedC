#if 0
// ���� ����
// ������ �����ϴ� ���� �ڷᱸ���� ������ ���ô�.
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
//	struct Node* next;	//OK, �������� ũ��� �̹� �������ֱ⶧��(4����Ʈ)
//	struct Node node;	//ERROR, Ÿ�� ������ �Ϻ��ϰ� ���ǵǾ� ���� �ʱ� ����
//};



//2.c(main.c)
#include"Stack.h"
//�̷����� ���ȭ�� �ؾ��Ѵ�. ���꼺�� �ö󰡰� ���� ��������⶧���̴�.

int main() {
	Stack* s = createStack(5);
	//push(s, 10);
	s->top = 0;	//�ҿ����� Ÿ���� ����߱⿡ ���� ������ �˼���� ������ ����.
	//push�� �̿��ؼ� ������ �־���µ� 
	//s->top =0;�� �ϰ� �Ǹ� top�� ���ÿ� push�Ҽ���
	//�ö󰡴ٰ� 0�� ���Ƿ� �����ϰԵǸ� ��ǻ� ����ִ°Ͱ� ���������� �ȴ�.
}	//���� ���������� �ʿ��ϰ� �ȴ�.
	//��� �͵��� public���̶� �����ҳ� ������ �����ϴ�.
	//���� ���� top�� �����ϴ� ��찡 �߻��ϸ� ������ �߻��ϵ��� ¥����.

#endif
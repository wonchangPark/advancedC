#if 0
//���� �Լ��� ������ ���ô�.
#include<stdio.h>

void swap(void* a, void* b) {
	int t = *(int*)a;
	*(int*)a = *(int*)b;
	*(int*)b = t;
}

int main() {
	int a = 10, b = 1000;
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	
	
	double d = 10, e = 1000;
	swap(&d, &e);
	printf("a = %f, b = %f\n", d, e);
	
	
	return 0;
}

#endif
#if 0
#include<stdio.h>
//step 1. ���� �ڵ�� ���� Ÿ�Ը� ���Ұ����ϴٴ� ������ �ֽ��ϴ�.
//��� Ÿ�Կ� ���Ͽ� ���� �����ϵ��� Ÿ�� ������ ����ڷκ��� �޽��ϴ�.
enum Type{ INT, DOUBLE};	//Ÿ���ڵ�(type code)

void swap(void* a, void* b, enum Type t) {
	switch (t) {
	case INT: {
		int t = *(int*)a;
		*(int*)a = *(int*)b;
		*(int*)b = t;
	}
	case DOUBLE: {
		double t = *(double*)a;
		*(double*)a = *(double*)b;
		*(double*)b = t;
	}
			   break;
	}
}
int main() {
	int a = 10, b = 1000;
	swap(&a, &b , INT);
	printf("a = %d, b = %d\n", a, b);

	double d = 3.14, e = 4.14;
	swap(&d, &e, DOUBLE);
	printf("d = %f, e = %f\n", d, e);

	return 0;
}

#endif
#if 0
#include<stdio.h>
#include<stdlib.h>	//malloc, free
#include<string.h>	//memcpy ����ϱ�����

//step 2. ���� �ڵ�� Ÿ���ڵ尡 ���Ǿ����Ƿ� ���ο� Ÿ���� �߰��Ǹ�
//�ڵ带 �����ؾ� �Ѵٴ� ������ �ֽ��ϴ�. Ÿ�� �ڵ�� �б⹮�� �����ϱ� �����Դϴ�.
typedef struct { int x, y; } Point;
void swap(void* a, void* b, int size) {
	void* t = malloc(size);
	memcpy(t, a, size);	//t = a;
	memcpy(a, b, size);	//a = b;
	memcpy(b, t, size);	//a = t;
	free(t);
}

int main() {
	int a = 10, b = 1000;
	swap(&a, &b, sizeof(int));
	printf("a = %d, b = %d\n", a, b);

	double d = 3.14, e = 4.14;
	swap(&d, &e, sizeof(double));
	printf("d = %f, e = %f\n", d, e);

	Point p1 = { 0, 0 };
	Point p2 = { 10, 10 };
	swap(&p1, &p2, sizeof(Point));
	printf("p1(%d,%d),p2(%d,%d)\n", p1.x, p1.y,p2.x, p2.y);
	return 0;
}

#endif
#if 0
#include<stdio.h>
#include<stdlib.h>	//malloc, free
#include<string.h>	//memcpy ����ϱ�����

//step 3. ���� �ڵ�� ���������� ���� �Ҵ��� �ϱ� ������ ���� ���� �̽��� �߻��մϴ�.
//�����Ҵ� ���а� �Ͼ���ֱ� �����Դϴ�.
//�̸� �ذ��ϱ� ���� ��ũ�θ� �����մϴ�.

#define SWAP(x, y, t)	\
	(t) = (x);	\
	(x) = (y);	\
	(y) = (t);

int main() {
	int a = 10, b = 1000;
	
	int t1;
	SWAP(a, b, t1);	// t = (a);
	printf("a = %d, b = %d\n", a, b);

	double t2;
	double d = 3.14, e = 4.14;
	SWAP(d, e, t2);
	printf("d = %f, e = %f\n", d, e);

	return 0;
}
#endif

#if 0
#include<stdio.h>

typedef struct { int x, y; } Point;
//step 4.���� �ڵ�� �ӽ� ������ ����Ѵٴ� ������ �ֽ��ϴ�.
//�̸� �ذ��ϱ� ���� �̸����� �߰�ȣ�� �����մϴ�.

#define SWAP(x, y, T)	{\
	T t = (x);	\
	(x) = (y);	\
	(y) = (t); }

int main() {
	int a = 10, b = 1000;

	SWAP(a, b, int);	
	printf("a = %d, b = %d\n", a, b);

	double d = 3.14, e = 4.14;
	SWAP(d, e, double);
	printf("d = %f, e = %f\n", d, e);

	return 0;
}

#endif
#if 0
#include<stdio.h>

typedef struct { int x, y; } Point;
// 4. ��ũ�θ� �߰��ϰ� ����� ��� : ���� ���� ��ũ�ο� ���ؼ��� do-while(0)�� �����־�� �մϴ�.

//�� �Լ��� �̸����� �߰�ȣ�� ����ϹǷ� if-else��� ��, �����ݷ��� ����ϸ� �ȵ˴ϴ�.
#define SWAP(x, y, T)  do {\
	T t = (x);	\
	(x) = (y);	\
	(y) = (t); }while(0)

int main() {
	//if (1) {
		//..
	//};
	//else {	//dangling else
		//...
	//}
	int a = 10, b = 1000;

	if(a>b)
		SWAP(a, b, int);
	else

	printf("a = %d, b = %d\n", a, b);

	double d = 3.14, e = 4.14;
	SWAP(d, e, double);
	printf("d = %f, e = %f\n", d, e);

	return 0;
}
#endif

// ���� ����: ��ũ�θ� ������� �ʰ� �Ϲ� �Լ��� ����Ͽ� �Ϻ��ϰ� �Ϲ�ȭ�� ���� �Լ��� ������ ������.
#include<stdio.h>
//void* : �����ϰ� �ּҸ� ���� �� �ִ� ������
//		���ü�� ������ ���� ������ ������, �������� ��� ������ �Ұ��� 
typedef struct { int x, y; } Point;
//1����Ʈ ������ ���縦 �����մϴ�.
void swap(void* a, void* b, size_t size) {
	char* pA = (char*)a;
	char* pB = (char*)b;
	for (int i = 0; i < size; i++, pA++, pB++ ) {
		char t = *pA;
		*pA = *pB;
		*pB = t;
	}
}
//void swap(void* a, void* b, int size)	//�̰� �� ���־�Ʃ��������� �ȵ��ư��� �� �˾ƺ��°��� ����
//{
//	char t;
//
//	do {
//		t = *(char*)a;
//		*(char*)a++ = *(char*)b;
//		*(char*)b++ = t;
//	} while (--size > 0);
//}

int main() {
	int a = 10, b = 1000;
	swap(&a, &b, sizeof(int));
	printf("a = %d, b = %d\n", a, b);


	double d = 3.14, e = 4.14;
	swap(&d, &e, sizeof(double));
	printf("d = %f, e = %f\n", d, e);


	Point p1 = { 0, 0 };
	Point p2 = { 10, 10 };
	swap(&p1, &p2, sizeof(Point));
	printf("p1(%d,%d),p2(%d,%d)\n", p1.x, p1.y, p2.x, p2.y);
	return 0;
}
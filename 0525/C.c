
#include<stdio.h>
#include<stdlib.h>

typedef struct {
	char name[32];
	int age;
}Person;

typedef struct {
	char name[32];
	int age;
	int id;	//�й�
}Student;

// �޸� �Ҵ� �Լ��� ��ȯ ���� ��� �Ҵ�� Ÿ���� �����ͷ� ��ȯ��Ű�� ���� ����.
// �̴� ������ ������ Ÿ�԰� ��ġ���� ���� ���, ��� �߻���ų �� �ֱ� �����̴�.
#define MALLOC(T)	(T*)malloc(sizeof(T))
int main() {
	//Student* p = (Student*)malloc(sizeof(Person));	//void* ���� �ٸ�Ÿ������ ĳ���� OK ������ �׷��� ĳ������ ������.
														//���� ������ ������� ĳ������ �ϴ°��� �ƴ� �������� �Ҵ�Ȱ��� ������� ����. ���� ���̽����� ���̽��̴�.
	//Student* p = (Person*)malloc(sizeof(Person));		//���ǰͰ��� ���� �ٸ��� ������ �ּ��� �����Ϸ��� ���� ���ش�.
	Student* p = MALLOC(Person);		//���ǰͰ��� ���� �ٸ��� ������ �ּ��� �����Ϸ��� ���� ���ش�.
	p->age = 20;
	getchar();
	p->id = 20190201;
}
// �����Ϸ��� ���� ��� �������� ���� �ذ�����.

//�ӽ� ��ü �̾߱�
#if 0
#include <stdio.h>

int main() {
	int a = 10;	// ���� ��ü: �̸��� ����, �Լ��� ����Ǹ� �ı���
	int b = 20;
	int c;

					// �ӽ� ��ü: �̸��� ����, ������ ���� ������ �ı���
	int c = a + b;	// int temp = a + b; int c = temp; delete temp; 
}
#endif

#if 1
#include<stdio.h>
#include<string.h>

typedef struct {
	char buf[32];
	int len;
} String;

String makeString(const char* str) {
	String s;
	strcpy(s.buf, str);
	s.len = strlen(str);
	return s;
}

//�Լ��� ��ȯ���� ���������� �����ϰų� �������� ����!
int main() {
	//printf("%s\n", makeString("hello").buf);
	
	// �Լ��� ��ȯ ���� ��� ������� ����, ������ �����Ͽ� ����ϴ� ���� �����ϴ�.
	String s = makeString("hello");
	printf("%s\n", s.buf);
}




#endif
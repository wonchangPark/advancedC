
#include<stdio.h>

//�����ѹ��� ȸ���ϴ� ��� 1. ���(constant)
//����: 1. �޸𸮳��� �߻��ϰ�,
//		2. switch������ ����Ҽ�����.
//const int RED = 0;
//const int GREEN = 1;
//const int BLUE = 2;

//�����ѹ��� ȸ���ϴ� ��� 2. ��ũ�� ���
//����: 1. ���������ϱ� ��ƴ�.
//		2. ������� ��ƴ�.
//#define RED (0)
//#define GREEN (1)
//#define BLUE (2)

//�����ѹ��� ȸ���ϴ� ��� 3. ������
enum Color{ RED, GREEN, BLUE };
enum Log{ ERR, WARN, INFO };

void paintColor(int color) {
	switch (color) {
	case RED: printf("RED\n"); break;
	case GREEN: printf("GREEN\n"); break;
	case BLUE: printf("BLUE\n"); break;
	}
}

int main() {
	paintColor(RED);
	paintColor(ERR);	//enum�� ġ������ ���� -> ���� int�� ó���ȴٴ���
}
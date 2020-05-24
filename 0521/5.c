#if 0
#include<Windows.h>		//CreateThread
#include<stdio.h>
unsigned long __stdcall threadMain(void* p) {
	for (int i = 0; i < 10; i++) {
		Sleep(1000);
		printf("\t\t[worker thread]\n");
	}
	return 0;
}
int main() {
	CreateThread(0, 0, threadMain, 0, 0, 0);
	//�� ���� �����尡 �����Ǵµ��ÿ� �����մϴ�.
	//���� �����尡 ������ �ʾƾ� ���� �����尡 �� �״´�. 
	//���� while���� ����� ����ΰڴ�.
	while (1) {
		Sleep(1000);
		printf("[main thread]\n");

	}
	return 0;
}
#endif
#if 1
#include<Windows.h>		//CreateThread
#include<stdio.h>
//	volatile: ���� ���α׷��� �ƴ� �ܺ����� ���ο� ���Ͽ�
//  �� ���� ����� �� �ִٰ� 
//	�����Ϸ����� �˷� ĳ���� �����Ҷ� ����ϴ� Ű���� �Դϴ�.
//	���� ĳ�õǾ�� �ȵǴ� �����Ϳ� ���ؼ��� �ݵ�� 
//	volatile�� ����ؾ� �մϴ�.
volatile int flag = 1;
unsigned long __stdcall threadMain(void* p) {
	Sleep(5000);
	flag = 0;	//5���Ŀ� flag�� 0���� ������ش�.
	return 0;
}
int main() {
	CreateThread(0, 0, threadMain, 0, 0, 0);
	//�� ���� �����尡 �����Ǵµ��ÿ� �����մϴ�.
	while (flag)//flag�� 0�� �ƴҵ��� ��� ���鼭 ����ִ�.
		;
	return 0;
}
//�����Ϸ��� �׳� ������ threadMain �̶�� �Լ��� �Ⱥ��̹Ƿ�  
//���� threadMain�Լ��� main()���� ���� ���ϴ��� �˰� ĳ���� �ؼ�
//�޸𸮿�(�ȹٲ�°���) flag���� Ȯ���ϴ°��̾ƴ϶� ��
//�̰� �������ʴ� ������ cpu�� ĳ���� flag���� �ֱ� �����̴�. 
//�޸𸮿� �����ؼ�  flag���� �������� �ʴ´�.
//���� �����Ϸ����� �׷��� �Ź� �޸𸮿� ���� ���� Ȯ���ؼ� 
//��������¶����� volatile�� �̿��ؾ��Ѵ�.
#endif
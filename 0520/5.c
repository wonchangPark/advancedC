#if 0
// �̸� ���ǵ� ��ũ�� 
#include <stdio.h>

int main() {
	printf("%s\n", __FILE__);	//���� ��ó������ ���� �̸�
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);
	printf("%d\n", __LINE__);	//���� �ִ� ���� ���°���� �˷��ִ� ��ũ��
	printf("%s\n", __func__);	
	//�Լ��� �̸�, �����Ϸ��� �����ϴ� �ɺ��Դϴ�. 
	//�̰� c ǥ�ؿ��� �����ϴ� ���̹Ƿ� �̰��� ����ϼ���.
	printf("%s\n", __FUNCTION__);	
	//�Լ��� �̸�, �����Ϸ��� �����ϴ� �ɺ��Դϴ�.(��ǥ��)
}


#endif
#include<stdio.h>
#define _TO_STR(x)	#x
#define TO_STR(x)	_TO_STR(x)

int main() {
	
	//�Ʒ��� ����� ����Ͽ� �޽����� �����ϸ� 
	//������ ���� �������� ��µǵ��� ��ũ�θ� ������ ������

#pragma message(__FILE__ " : hello, world" )
	//printf("hello", "world");	
	//���ڿ��� ���ڿ� ���̿� ������(���� ,��, ����) �� ���� ��� 
	//�̸� �ϳ��� ���ڿ��� �ؼ��Ѵ�.
	//printf("hello\n");
	//printf("world\n");
	//printf("hello\n" "world\n");
//#pragma message(__FILE__ "("__LINE__"):"  "hello, world" )
#pragma message(__FILE__ "("TO_STR(__LINE__)"):"  "hello, world" )
}






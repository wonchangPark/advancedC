#include <stdio.h>

int _stdcall sqr(int x) {
	int result = x * x;
	return result;	//mov eax, result
}
//�Լ�ȣ�⵵ ����� �ϳ� ū �������̴�.
int main() {
	//int result = sqr(2);
	int n;
	
	// _asm ��ɾ ����ϸ� �ҽ� �ڵ� �ȿ� ������� �ڵ带 ������ �� �ֽ��ϴ�.
	// sqr(2); -> �Ű������� �����ʿ������� ���ÿ� ����˴ϴ�..
	
	_asm {
		push 2
		call sqr
		mov n, eax
	}
	printf("%d\n", n);
}
#include <stdio.h>

int _stdcall sqr(int x) {
	int result = x * x;
	return result;	//mov eax, result
}
//함수호출도 비용이 꽤나 큰 연산자이다.
int main() {
	//int result = sqr(2);
	int n;
	
	// _asm 명령어를 사용하면 소스 코드 안엣 어셈블리어 코드를 삽입할 수 있습니다.
	// sqr(2); -> 매개변수는 오른쪽에서부터 스택에 저장됩니다..
	
	_asm {
		push 2
		call sqr
		mov n, eax
	}
	printf("%d\n", n);
}
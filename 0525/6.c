#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


// strtok 함수 사용, 파싱되는 문자열이 보존된다는 가정을 하시면 안됩니다.
// 따라서 원본을 보존하려면 복사하여 사용해야 합니다.
int main() {
	char str[] = "hello, world";
	char copy[32];	//복사본 생성
	strcpy(copy, str);

	char* token = strtok(copy, ",");	//","를 만나면 그전까지의 애를 토큰화 시키는 것입니다.
	printf("%s\n", token);
	printf("%s\n", str);	
	//strtok를 사용하고 str을 찍어보면 잘려나간걸 알수있습니다. 즉 데이터의 손실이 생깁니다.
	//복사본에다가 strtok를 사용하면 원본은 건드리지 않는것이 되므로 안전합니다. 이런 함수를 사용할땐 항상 조심하세요.:D
	return 0;
}
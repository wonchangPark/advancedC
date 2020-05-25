#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 경계가 불분명한 소스로부터 고정된 길이의 배열에 복사하는 것은 매우 위험합니다.
// 버퍼 오버플로가 발생할 수 있기 때문입니다.

// 해결 방법
// 1. 동적 할당	-> 임시 버퍼에서 오버플로가 발생할 수 있으므로 권장하지 않습니다.
// 2. 허용 가능한 길이를 명시하는 함수 사용	-> 예를들면 fgets같은
// 3. 포맷 지정자 사용 %15s 같은
//문자열은 복사하고자하는 공간이 원본보다 같거나 커야한다.
//문자열은 마지막엔 아스키널이 무조건 들어가야한다.

int main() {
	char buf[32];
	//fgets(buf, sizeof(buf), stdin);	//gets(buf);//scanf("%s", buf);	//굉장히 위험한 코드이다. 32자를 넘으면 죽는다.
	scanf("%15s", buf);
	printf("%s\n", buf);

	return 0;
}
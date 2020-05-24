
#include<stdio.h>
#include<stdlib.h>

int main() {
	signed int si = -1;
	unsigned int ui = 1;
	//가급적이면 같은 타입끼리만 연산을 한다.(부호도 포함된다)
	if ((int)ui > si)
		printf("true\n");
	else
		printf("false\n");

	char* p = malloc(-1);//malloc은 부호없는 크기를 받기때문에 -1을 받으면 최대 큰 사이즈인 42억 정도를 할당해야하는데 그정도크기를 할당할 메모리는 없기때문에 메모리할당에 실패한다.
	printf("%p\n", p);
}
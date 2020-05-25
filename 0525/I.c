
#include <stdio.h>

// 동시에 같은 파일을 여러번 열지 않는 것이 좋습니다.
// 하나의 파일을 동시에 열 경우, 이에 대한 구현은 구현(컴파일러)마다 다르게 정의되어 있어
// 어떻게 동작할 지 예측할 수 없습니다.
#define LOG_FILE	"log.txt"

void foo(FILE* log) {
	//FILE* log = fopen(LOG_FILE, "a");
	//인자로 받아서 파일을 씁시다.
	//...
}

int main() {
	FILE* log = fopen(LOG_FILE, "a");

	foo(log);
	//...
}
#if 0
#include <stdio.h>

int main() {
	//printf("%d / %d = %d\n", 4, 3, 4 / 3);		// 몫: 양수 
	//printf("%d / %d = %d\n", -4, 3, -4 / 3);		// 몫: 음수
	//printf("%d / %d = %d\n", 4, -3, 4 / -3);		// 몫: 음수
	//printf("%d / %d = %d\n", -4, -3, -4 / -3);	// 몫: 양수

	// 나머지 연산의 결과가 항상 양수라고 가정하면 안됨
	// 결과는 피제수의 부호를 따라간다. 하지만 이결과는 각각의 컴파일러마다 다를수있다. 
	// 그렇기에 나머지연산에서 음수가 나올수도 있다는것을 알고있어야 한다.
	printf("%d %% %d = %d\n", 4, 3, 4 % 3);		// 나머지: 양수 
	printf("%d %% %d = %d\n", -4, 3, -4 % 3);	// 나머지: 음수
	printf("%d %% %d = %d\n", 4, -3, 4 % -3);	// 나머지: 양수
	printf("%d %% %d = %d\n", -4, -3, -4 % -3);	// 나머지: 음수
}	

#endif

#if 1



#include<stdio.h>
#define Q_MAX	(10)
typedef struct {
	int buf[Q_MAX];
	unsigned int front; //데이터를 꺼내오기 위한 위치 정보
	size_t rear;	//데이터를 저장하기 위한 위치 정보
	//rear와 front가 둘다 음수가 되게 하지 않기 위해 unsigned int 혹은 size_t를 이용한다.
} Q;
void Qinit(Q* q) { q->front = q->rear = 0; }
void Qput(Q* q, int data) {
	q->buf[q->rear] = data;
	q->rear = (q->rear + 1) % Q_MAX;
}

int main() {

}

#endif
#if 0
#include<stdio.h>
#include<stdlib.h>
#define  ARR_SZ (10)



int main() {
	int* p = malloc(sizeof(int) * ARR_SZ);
	if (p == NULL) {
		fprintf(stderr, "malloc error\n");
		return -1;
	}

	//...

	free(p);
	p = NULL;	//널을 해제하는 것은 안전하니 항상 free를 하면 null값을 넣어놔라.

	// 널을 해제하는 것은 안전합니다.
	//free(0);	// 정상종료가 됨.
	
	//...
	free(p);

}
#endif

#if 0 
#include<stdio.h>
#include<stdlib.h>
#define  ARR_SZ (10)

void  Free(void** p) {
	if (p == NULL)
		return;

	free(*p);
	*p = NULL;
}

int main() {
	int* p = malloc(sizeof(int) * ARR_SZ);
	if (p == NULL) {
		fprintf(stderr, "malloc error\n");
		return -1;
	}

	//...

	Free(&p);
	printf("%p\n", p);

	//...
	Free(&p);

}
#endif


#if 1
#include<stdio.h>
#include<stdlib.h>
#define  ARR_SZ (10)

#define SAFE_FREE(p)	do{	\
	if((p))	{				\
	free((p));				\
	(p) = NULL;				\
	}						\
} while(0)
// SAFE_FREE의 단점: 앨리어싱된 포인터에 대해서는 동작하지 않습니다.



int main() {
	int* p = malloc(sizeof(int) * ARR_SZ);
	if (p == NULL) {
		fprintf(stderr, "malloc error\n");
		return -1;
	}

	//...

	SAFE_FREE(p);
	printf("%p\n", p);

	//...
	SAFE_FREE(p);

}
#endif
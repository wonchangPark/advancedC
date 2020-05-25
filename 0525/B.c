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
	p = NULL;	//���� �����ϴ� ���� �����ϴ� �׻� free�� �ϸ� null���� �־����.

	// ���� �����ϴ� ���� �����մϴ�.
	//free(0);	// �������ᰡ ��.
	
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
// SAFE_FREE�� ����: �ٸ���̵� �����Ϳ� ���ؼ��� �������� �ʽ��ϴ�.



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
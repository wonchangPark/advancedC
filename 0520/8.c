#if 0
#include<stdio.h>
#include<assert.h>

//assert: ��༺�� �� �� �ִ� ����Ʈ������ ������ ã�Ƴ��µ� ȿ������ ����
// ������ ������ �ִ�.
//	1. abort �Լ��� ȣ���ϹǷ� ������ �Ӻ���� �ý��ۿ��� ����ϱⰡ ������ ��!
//	2. �Լ��̹Ƿ� �ݵ�� ���α׷��� �����Ǿ�߸� �˻� ������(��Ÿ�� ������尡 �߻�)
//	3. ��쿡 ���󼭴� �������� ���� ���� ����
typedef struct {
	char cmd;	//��Ŷ�� ����
	int len;	//��Ŷ�� ����
	//������
}Header;

void foo(int* p) {
	//if (p == NULL) return;
	assert(p != NULL);	
	//��������� �ش� ���ϰ� ���α��� �˷��ֱ� ������ �̰� ���� ����.
}

int main() {
	//if (sizeof(Header) != 5) {
	//	fprintf(stderr, "header size is not 5\n");
	//	return -1;
	//}
	if(0)
		assert(sizeof(Header) == 5);	//����� ũ��� 5�̾�� �մϴ�.(����)
}


#endif
#include<stdio.h>
#include<assert.h>
#define __CONCAT(x, y)	x##y
#define CONCAT(x, y)	__CONCAT(x,y)	
//__LINE__ �� ����������� ġȯ�Ǽ� ������ �ϱ� ����
#define STATIC_ASSERT(e)	\
typedef char CONCAT(assertion_failed_at_line_, __LINE__)[(e) ? 1: -1]
typedef struct {
	char cmd;	//��Ŷ�� ����
	int len;	//��Ŷ�� ����
	//������
}Header;

int main() {
	int arr;
	STATIC_ASSERT(sizeof(Header) == 5);
	//assert(sizeof(Header) == 5);	//����� ũ��� 5�̾�� �մϴ�.(����)
}
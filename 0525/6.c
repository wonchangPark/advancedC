#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


// strtok �Լ� ���, �Ľ̵Ǵ� ���ڿ��� �����ȴٴ� ������ �Ͻø� �ȵ˴ϴ�.
// ���� ������ �����Ϸ��� �����Ͽ� ����ؾ� �մϴ�.
int main() {
	char str[] = "hello, world";
	char copy[32];	//���纻 ����
	strcpy(copy, str);

	char* token = strtok(copy, ",");	//","�� ������ ���������� �ָ� ��ūȭ ��Ű�� ���Դϴ�.
	printf("%s\n", token);
	printf("%s\n", str);	
	//strtok�� ����ϰ� str�� ���� �߷������� �˼��ֽ��ϴ�. �� �������� �ս��� ����ϴ�.
	//���纻���ٰ� strtok�� ����ϸ� ������ �ǵ帮�� �ʴ°��� �ǹǷ� �����մϴ�. �̷� �Լ��� ����Ҷ� �׻� �����ϼ���.:D
	return 0;
}
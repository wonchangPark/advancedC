//Stack.h
#ifndef _STACK_H_
#define _STACK_H_

struct __Stack;	//���� ����ü�� ���� �Ѱ�. �ҿ����� ����
typedef struct __Stack* Stack;	//�ҿ����� Ÿ������ �����͸� ����
//�� �����͸� �̿��ؼ� ������ ���� �Ѵ�.
//�ҿ����� Ÿ���� �������μ� ����ڰ� __Stack�� Ÿ���� ����ü��°͸� �˰� 
//������ ���� ������ �� ���� ����. ���� ���� ������ �����ϰ� �ȴ�.
Stack createStack(int size);

#endif

#define _CRT_SECURE_NO_WARNINGS 1

/*
����ָ�룺��ź����ĵ�ַ��ָ������ָ��
����ָ�����飺��ź���ָ�������
*/

#include <stdio.h>

int Add(int a, int b)
{
	return a + b;
}

int Sub(int a, int b)
{
	return a - b;
}

int Mul(int a, int b)
{
	return a * b;
}

int Div(int a, int b)
{
	return a / b;
}

int main()
{
	int(*pa)(int, int) = Add;  //����ָ��
	int i;
	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ������
	printf("%d\n", pa(1, 2));
	for (i = 0; i < 4; i++)
	{
		printf("%d ", parr[i](1, 2));
	}
    return 0;
}
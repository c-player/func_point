#define _CRT_SECURE_NO_WARNINGS 1

/*
函数指针：存放函数的地址，指向函数的指针
函数指针数组：存放函数指针的数组
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
	int(*pa)(int, int) = Add;  //函数指针
	int i;
	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针数组
	printf("%d\n", pa(1, 2));
	for (i = 0; i < 4; i++)
	{
		printf("%d ", parr[i](1, 2));
	}
    return 0;
}
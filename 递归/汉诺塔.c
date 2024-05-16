//汉诺塔
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Hanio_Step(int n, char A, char B,char C)
{
	if (1 == n)
		printf("%c->%c\n", 'A', 'C');
	else
	{
		Hanio_Step(n-1, A, C ,B);
		printf("%c->%c\n", A,C);
		Hanio_Step(n-1, B, A, C);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Hanio_Step(n, 'A','B','C');
	return 0;
}

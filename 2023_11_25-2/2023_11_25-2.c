#define _CRT_SECURE_NO_WARNINGS 1

//1.编写程序，实现从键盘输入某商品的单价和数量，求出商品的总价并输出。
//#include <stdio.h>
//int main()
//{
//	int x;
//	float y, s;
//	printf("请输入商品的单价");
//	scanf("%f", &y);
//	printf("请输入购买商品的个数");
//	scanf("%d", &x);
//	s = x * y;
//	printf("商品总价为：%f\n", s);
//	return 0;
//}

//2.编写程序，实现输入两个整数，然后将两个数对调后输出（要求不使用第三个变量）。
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	printf("请输入a和b的值");
//	scanf("a=%d,b=%d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}

//3.用*输出字母C的图案。
//#include <stdio.h>
//int main()
//{
//	printf("****\n");
//	printf("*\n");
//	printf("*\n");
//	printf("****\n");
//	return 0;
//}

//4.若a=5，b=1.332，c='A'。
#include <stdio.h>
int main()
{
	int a = 5;
	float b = 1.332;
	char c = 'A';
	printf("a=%4d   b=%.3f\n", a, b);
	printf("a+b=%.1f\n", a + b);
	printf("c=\'%c\' or %d\n", c, c);
	return 0;
}
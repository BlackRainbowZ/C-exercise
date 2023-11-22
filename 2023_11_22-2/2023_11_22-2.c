#define _CRT_SECURE_NO_WARNINGS 1

//1.将a、b两个整数的值交换并输出
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 10;
//	b = 20;
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//2.从键盘输入一个三位整数，将它们逆序输出
//#include <stdio.h>
//int main()
//{
//	int num, a, b, c;
//	printf("Please input the number:");
//	scanf("%d", &num);
//	a = num / 100;
//	b = (num - a * 100)/10;
//	c = num - 100 * a - 10 * b;
//	a += b * 10 + c * 100;
//	printf("The result is %d\n", a);
//	return 0;
//}

//输入半径，输出圆周长、圆面积及圆球体积
#define PI 3.1415926
#include <stdio.h>
int main()
{
	float r, l, s, v;
	printf("请输入圆半径：");
	scanf("%f", &r);
	l = 2 * PI * r;
	s = PI * r * r;
	v = 4 * PI * r * r * r / 3;
	printf("半径为%f的圆周长为%f,面积为%f,圆球体积为%f\n", r, l, s, v);
	return 0;
}
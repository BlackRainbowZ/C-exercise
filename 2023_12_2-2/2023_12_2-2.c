#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = b = c = 1;
//	++a || ++b && ++c;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}

//1.编程实现下列函数的计算，输入x的值，输出y的值。
//#include <stdio.h>
//int main()
//{
//	int x, y;
//	printf("Please input x:");
//	scanf("%d", &x);
//	if (x < 0)
//		y = 3 * x + 2;
//	else
//		y = -x + 1;
//	printf("y=%d\n", y);
//	return 0;
//}

//2.从键盘上输入1～7之间的数字时，显示对应的星期几的英文单词。当输入数字不在1～7范围内时，输出“Error!”。
//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("Please enter an integer:");
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("Monday\n");
//		break;
//	case 2:
//		printf("Tuesday\n");
//		break;
//	case 3:
//		printf("Wednesday\n");
//		break;
//	case 4:
//		printf("Thursday\n");
//		break;
//	case 5:
//		printf("Friday\n");
//		break;
//	case 6:
//		printf("Saturday\n");
//		break;
//	case 7:
//		printf("Sunday\n");
//		break;
//	default:
//		printf("Error!");
//	}
//	return 0;
//}

//3.假设计算个人所得税的规定为：月工资在3500以下，不用交；超过3500元至5000元部分，纳税比率为3%；超过5000元至9500元部分，纳税比率为10%；超过9500元部分，纳税比率为20%；编程计算个人所得税。
//#include <stdio.h>
//int main()
//{
//	float a, b;
//	printf("input the income:");
//	scanf("%f", &a);
//	if (a < 3500)
//		b = 0;
//	else if (a <= 5000)
//		b = (a - 3500) * 0.03;
//	else if (a <= 9500)
//		b = (5000 - 3500) * 0.03 + (a - 5000) * 0.1;
//	else
//		b = (5000 - 3500) * 0.03 + (9500 - 5000) * 0.1 + (a - 9500) * 0.2;
//	printf("the tax is:%.2f", b);
//	return 0;
//}

//4.设每千米每吨货物的基本运费为p，货物重为w，距离为s，折扣为d，则总运费f计算公式为：f=p*w*s*(1-d)。
//#include <stdio.h>
//int main()
//{
//	int c, s;
//	double p, w, d, f;
//	printf("Please enter price,weight,distance:");
//	scanf("%lf,%lf,%d", &p, &w, &s);
//	if (s >= 3000)
//		c = 12;
//	else
//		c = s / 250;
//	switch (c)
//	{
//	case 0:
//		d = 0;
//		break;
//	case 1:
//		d = 2;
//		break;
//	case 2:
//	case 3:
//		d = 5;
//		break;
//	case 4:
//	case 5:
//	case 6:
//	case 7:
//		d = 8;
//		break;
//	case 8:
//	case 9:
//	case 10:
//	case 11:
//		d = 10;
//		break;
//	case 12:
//		d = 15;
//		break;
//	}
//	f = p * w * s * (1 - d / 100.0);
//	printf("freight=%10.2f\n", f);
//	return 0;
//}

//5.编程实现：输入一个整数，判断它能否被3，5，7整除，并输出以下信息之一：
#include <stdio.h>
int main()
{
	int a;
	printf("input the number:");
	scanf("%d", &a);
	if (a % 3 == 0 && a % 5 == 0 && a % 7 == 0)
		printf("can be divided by 3, 5, 7");
	else if (a % 3 == 0 && a % 5 == 0)
		printf("can be divided by 3, 5");
	else if (a % 3 == 0 && a % 7 == 0)
		printf("can be divided by 3, 7");
	else if (a % 5 == 0 && a % 7 == 0)
		printf("can be divided by 5, 7");
	else if (a % 3 == 0)
		printf("can be divided by 3");
	else if (a % 5 == 0)
		printf("can be divided by 5");
	else if (a % 7 == 0)
		printf("can be divided by 7");
	else
		printf("not can be divided by 3 or 5 or 7");
	return 0;
}
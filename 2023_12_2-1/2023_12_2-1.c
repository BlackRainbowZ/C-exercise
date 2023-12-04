#define _CRT_SECURE_NO_WARNINGS 1

//例5-2 编程实现，输入两个整数，输出这两个数中较大的数。
//#include <stdio.h>
//int main()
//{
//	int a, b, max;						//定义整型变量a，b和max
//	printf("请输入两个整数:");			//输出屏幕提示
//	scanf("%d%d", &a, &b);				//从键盘输入a，b的值
//	max = a;							//假设a是较大的数先赋给max
//	if (a < b)							//若a比b小，将b赋给max
//		max = b;
//	printf("两数中较大的数为:%d\n", max);//输出结果
//	return 0;							//函数返回值0
//}

//例5-3 编程实现，输入两个整数，输出这两个数中较大的数（用if-else语句实现）。
//#include <stdio.h>
//int main()
//{
//	int a, b;					//定义整型变量a和b
//	printf("请输入两个整数:");	//输出屏幕提示
//	scanf("%d%d", &a, &b);		//从键盘输入a和b的值
//	if (a > b)					//若a大于b，输出a
//		printf("max=%d\n", a);
//	else						//否则输出b
//		printf("max=%d\n", b);
//	return 0;					//函数返回值0
//}

//例5-4 编写程序，要求输入三角形的三条边，计算三角形的面积并输出。
//#include <stdio.h>
//#include <math.h>									//包含math.h头文件
//int main()
//{
//	float a, b, c, s, area;							//定义变量
//	printf("请输入三角形三条边:\n");				//打印提示信息
//	scanf("a=%f,b=%f,c=%f", &a, &b, &c);			//分别输入三条边长
//	if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && a + c > b)//如果满足构成三角形条件
//	{
//		s = (a + b + c) / 2;						//计算s的值
//		area = sqrt(s * (s - a) * (s - b) * (s - c));//计算三角形面积
//		printf("area=%f\n", area);					//输出结果
//	}
//	else                                            //如不满足条件
//		printf("输入的三条边不能构成三角形\n");		//输出提示信息
//	return 0;										//函数返回值
//}

//例5-5 学生成绩可分为百分制和五级制，根据输入的百分制成绩score，转换成相应的五级制成绩后输出。
//#include <stdio.h>
//int main()
//{
//	int score;
//	printf("请输入成绩:");			//屏幕提示语
//	scanf("%d", &score);			//输入百分制的分数
//	if (score > 100 || score < 0)	//分值不合理时显示出错信息
//		printf("输入数据无意义\n");
//	else if (score >= 90)			//这里的else表示0=<score&&score<=100
//		printf("优\n");
//	else if (score >= 80)			//这里的else表示0=<score&&score<=90
//		printf("良\n");
//	else if (score >= 70)			//这里的else表示0=<score&&score<=80
//		printf("中\n");
//	else if (score >= 60)			//这里的else表示0=<score&&score<=70
//		printf("及格\n");
//	else                            //这里的else表示0=<score&&score<60
//		printf("不及格\n");
//	return 0;
//}

//例5-6 编写程序，实现输入三个整数，输出最大值。
//#include <stdio.h>
//int main()
//{
//	int a, b, c, max;
//	printf("请输入三个整数，用逗号隔开\n");
//	scanf("%d,%d,%d", &a, &b, &c);
//	if (a > b)
//		if (a > c)
//			max = a;
//		else
//			max = c;
//	else
//		if (b > c)
//			max = b;
//		else
//			max = c;
//	printf("max=%d\n", max);
//	return 0;
//}

//例5-7 编程实现，从键盘上输入1～12之间的数字时，显示对应月份的英文单词，当输入数字不在1～12的范围内时，输出“Error!”。
//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("Please enter an integer:");
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("January\n");
//		break;
//	case 2:
//		printf("February\n");
//		break;
//	case 3:
//		printf("March\n");
//		break;
//	case 4:
//		printf("April\n");
//		break;
//	case 5:
//		printf("May\n");
//		break;
//	case 6:
//		printf("June\n");
//		break;
//	case 7:
//		printf("July\n");
//		break;
//	case 8:
//		printf("August\n");
//		break;
//	case 9:
//		printf("Septemper\n");
//		break;
//	case 10:
//		printf("October\n");
//		break;
//	case 11:
//		printf("November\n");
//		break;
//	case 12:
//		printf("December\n");
//		break;
//	default:
//		printf("Error!\n");
//		break;
//	}
//	return 0;
//}

//例5-10 某加油站有89号、92号和95号三种汽油，售价分别为5.88、6.28、6.68（元/升），提供了“加油员加油”或“自助加油”两个服务等级，这样用户可以得到2%或5%的优惠。试编程实现针对用户输入加油量x，汽油的品种y和服务的类型z，输出用户应付的金额。
#include <stdio.h>
int main()
{
	float x, m1, m2, m;
	char y, z;
	printf("输入要加入哪种类型的汽油，a代表89号，b代表92号，c代表95号\n");
	scanf("%c", &y);
	getchar();
	printf("输入进行哪种加油服务，m代表加油员加油，e代表自助加油\n");
	scanf("%c", &z);
	getchar();
	printf("输入要加油的数量\n");
	scanf("%f", &x);
	switch (y)
	{
	case 'a':
		m1 = 5.88;
		break;
	case 'b':
		m1 = 6.28;
		break;
	case 'c':
		m1 = 6.68;
		break;
	}
	switch (z)
	{
	case 'm':
		m2 = 0.02;
		break;
	case 'e':
		m2 = 0.05;
		break;
	}
	m = x * m1 * (1 - m2);
	printf("花费的金额:%.2f\n", m);
	return 0;
}
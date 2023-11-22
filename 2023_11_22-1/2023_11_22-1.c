#define _CRT_SECURE_NO_WARNINGS 1

//3.1
//#include <stdio.h>		//编译预处理指令
//int main()				//主函数的函数头
//{						//函数体的开始标记
//	int a, b, c;		//定义3个整型变量
//	scanf("%d%d", &a, &b);//运行程序时，分别为a，b输入整数值
//	c = a + b;			//计算a+b的值，将结果赋给c
//	printf("a=%d,b=%d,c=%d\n", a, b, c);//依次输出a，b，c的值
//	return 0;			//程序返回值0
//}						//函数的结束标志

//例3-1 已知圆的半径，求圆的周长和面积。
//#include <stdio.h>
//#define PI 3.1415926			//使用符号常量表示圆周率
//int main()
//{
//	double r, l, s;				//定义半径r，周长l和面积s
//	printf("请输入圆的半径：");	//输出提示语
//	scanf("%lf", &r);			//输入半径r的值
//	l = 2 * PI * r;				//计算周长l
//	s = PI * r * r;				//计算面积s
//	printf("圆的周长为%f,圆的面积为%f\n", l, s);//输出周长l和面积s
//	return 0;					//程序返回值0
//}

//例3-2 有符号短整型数据的溢出。
//#include <stdio.h>
//int main()
//{
//	short a, b;					//定义两个短整型变量a和b
//	a = 32767;					//将值32767赋给变量a
//	b = a + 1;					//将a的值加1后赋给变量b
//	printf("a=%d,b=%d\n", a, b);//输出a和b的值
//	return 0;					//函数返回值
//}

//例3-3 单精度型数据的有效位。
//#include <stdio.h>
//int main()
//{
//	float f;			//定义单精度型变量f
//	f = 1234567.95789;	//将值1234567.95789赋给变量f
//	printf("f=%f\n", f);//输出变量f的值
//	return 0;			//函数返回值0
//}

//例3-4 将例3-3中的变量定义为double类型。
//#include <stdio.h>
//int main()
//{
//	double f;			//定义双精度型变量f
//	f = 1234567.95789;	//将值1234567.95789赋给变量f
//	printf("f=%f\n", f);//输出变量f的值
//	return 0;			//函数返回值0
//}

//例3-5 字符型变量的定义和使用。
//#include <stdio.h>
//int main()
//{
//	char low, upp;						//定义政府变量low和upp
//	low = 'a';							//给变量low赋值'a'
//	upp = low - 32;						//low的值减去32后赋给upp
//	printf("low=%c,upp=%c\n", low, upp);//以字符格式输出low和upp
//	printf("low=%d,upp=%d\n", low, upp);//以整数格式输出low和upp
//	return 0;							//函数返回值0
//}

//例3-6 比较自增、自减运算符前置与后置的不同。
//#include <stdio.h>
//int main()
//{
//	int a, b, c, d;				//定义a，b，c，d四个整型变量
//	a = 10;						//a赋值为10
//	b = 10;						//b赋值为10
//	c = a++;					//自增运算符后置，先将a的值赋给c，a再自加1
//	d = --b;					//自减运算符前置，b先自减1，再将值赋给d
//	printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);//输出a,b,c,d的值
//	return 0;									//函数返回值0
//}

//例3-7 赋值运算的结合性。
//#include <stdio.h>
//int main()
//{
//	int a = 1;				//定义整型变量a，并将其赋值为1
//	a *= a -= 5;			//用复合赋值运算计算a的值
//	printf("a=%d\n", a);	//输出a的值
//	return 0;				//函数返回值0
//}

//例3-8 不同数据类型间的自动转换。
//#include <stdio.h>
//int main()
//{
//	int a;						//定义整型变量a
//	float b;					//定义单精度型变量b
//	double c, e;				//定义双精度型变量c和e
//	int d;						//定义整型变量d
//	a = 1;						//给变量a赋值
//	b = 2.1;					//给变量b赋值
//	c = 3.2;					//给变量c赋值
//	d = a + b + c;				//将a+b+c的结果赋给整型变量d
//	e = a + b + c;				//输出d和e的值
//	printf("d=%d,e=%f\n", d, e);//函数返回值0
//	return 0;
//}

//例3-9 强制类型转换
//#include <stdio.h>
//int main()
//{
//	int a = 2;					//定义整型变量a，其初值为2
//	float b = 2.78, c = 5.2456;	//定义单精度型变量b=2.78,c=5.2456
//	a = 2 + (int)c;				//计算a的值
//	b = (int)(1.56 + a);		//计算b的值
//	printf("a=%d,b=%f,c=%f\n", a, b, c);//输出a,b,c的值
//	return 0;					//函数返回值0；
//}
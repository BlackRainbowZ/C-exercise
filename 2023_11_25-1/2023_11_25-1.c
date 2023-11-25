#define _CRT_SECURE_NO_WARNINGS 1

//例4-1 使用格式输出函数printf输出不同类型变量。
//#include <stdio.h>
//int main()
//{
//	int a = 15;								//定义整型变量a并赋值
//	float b = 12.3456;						//定义单精度型变量b并赋值
//	double c = 12345678.1234567;			//定义双精度型变量c并赋值
//	char d = 'p';							//定义字符型变量d并赋值
//	printf("十进制a=%d,八进制a=%o,十六进制a=%x\n", a, a, a);//输出变量a的十进制、八进制和十六进制形式
//	printf("b=%f\n", b);					//输出变量b
//	printf("c=%f,c=%e\n", c, c);			//输出变量c的小数形式和指数形式
//	printf("d=%c\n", d);					//输出字符变量d
//	printf("%s\n", "I love C");				//输出字符串
//	return 0;								//函数返回值0
//}

//例4-2 在printf函数中使用附加符号。
//#include <stdio.h>
//int main()
//{
//	int a = 15;									//定义整型变量a并赋值
//	double b = 12345678.1234567;				//定义双精度型变量b并赋值
//	printf("a=%5d,a=%-5d,a=%05d\n", a, a, a);	//使用m控制输出位数，用-左对齐，空位补0
//	printf("b=%f,b=%lf,b=%8.3f\n", b, b, b);	//输出b，用m.n控制输出的长度和小数点位数
//	printf("%15s\n", "I love C");				//使用m控制输出字符串长度
//	printf("%-15.5s\n", "I love C");			//使用-m.n进行左对齐、限制字符串长度和字符位数
//	return 0;									//函数返回值0
//}

//例4-3 输出ABC三个字符。
//#include <stdio.h>
//int main()
//{
//	char a = 'A';			//定义字符型变量a并赋初值'A'
//	int b = 66;				//定义整型变量b并赋初值66
//	putchar(a);				//输出变量a的值
//	putchar(b);				//输出变量b的值
//	putchar('C');			//输出字符'C'
//	putchar('\n');			//输出换行符
//	return 0;				//函数返回值0
//}

//例4-4 从键盘输入ABC三个字符，然后把他们输出到屏幕。
//#include <stdio.h>
//int main()
//{
//	char a, b, c;			//定义字符型变量a，b，c
//	a = getchar();			//输入一个字符给变量a
//	b = getchar();			//输入一个字符给变量b
//	c = getchar();			//输入一个字符给变量c
//	putchar(a);				//输出变量a的值
//	putchar(b);				//输出变量b的值
//	putchar(c);				//输出变量c的值
//	putchar('\n');			//输出换行符
//	return 0;				//函数返回值0
//}

//例4-5 编写程序，要求输出小兔子图案。
//#include <stdio.h>
//int main()
//{
//	printf("╔═════════════╗\n");		//输出边框
//	printf("║    (\\ (\\    ║\n");				//用“\\”输出“\”
//	printf("║    (-.-)    ║\n");					//输出字符
//	printf("║   。_ (”)   ║\n");					//这里用了中文双引号
//	printf("╚═════════════╝\n");		//输出边框
//	return 0;										//函数返回值0
//}

//例4-6 编写程序，实现从键盘输入一个小写字母，在显示屏上显示对应的大写字母。
//#include <stdio.h>
//int main()
//{
//	char a, b;			//定义字符变量a和b
//	a = getchar();		//输入字符变量a的值，等同于scanf("%c",&a);
//	b = a - 32;			//求大写字母的ASCII码
//	putchar(b);			//输出b的值，等同于printf("%c",b);
//	putchar('\n');		//输出回车符
//	return 0;			//函数返回值0
//}

//例4-7 编写程序，要求输入三角形的三条边（假设给定的三条边符合三角形的条件：任意两边之和大于第三边），计算三角形的面积并输出。
#include <stdio.h>
#include <math.h>								//包含math头文件
int main()
{
	float a, b, c, s, area;						//定义变量
	printf("请输入三角形三条边:\n");			//打印提示信息
	scanf("a=%f,b=%f,c=%f", &a, &b, &c);		//分别输入三条边长
	s = 1.0 / 2 * (a + b + c);					//计算s的值
	area = sqrt(s * (s - a) * (s - b) * (s - c));//计算三角形面积
	printf("area=%.4f\n", area);				//输出结果
	return 0;									//函数返回值0
}
#define _CRT_SECURE_NO_WARNINGS 1
//放在代码的第一行

#include <stdio.h>

//'a' - 字符a

//int main()
//{
//	//字符类型
//	char ch = 'a';
//	//整型
//	int age = 20;
//	//短整型
//	short num = 10;
//	//long
//	//long long
//
//	//单精度浮点型
//	float weight = 55.5;
//	//双精度浮点型
//	double d = 0.0;
//
//	return 0;
//}

//int main()
//{
//	//printf("hehe\n");
//	//printf("比特\n");
//	//printf("%d\n", 100);//打印一个整数 - %d
//	//sizeof - 关键字 - 操作符 - 计算类型或者变量所占空间的大小
//
//	printf("%d\n",sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	
//	return 0;
//}

//ctrl+f5

//int main()
//{
//	//创建的一个变量
//	//类型 变量的名字 = 0；//推荐
//	//类型 变量的名字；//不推荐
//
//	int age = 22;
//	double weight = 55.5;
//
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//
//	return 0;
//}
//%d - 整型
//%f - float
//%lf - double

//全局变量 - {}外部定义的
//int a = 100;
//
//int main()
//{
//	//局部变量 - {}内部定义的
//	//当局部变量和全局变量名字冲突的情况下，局部优先
//	//不建议把全局变量和局部变量的名字写成一样的
//	int a = 10;
//
//	printf("%d\n", a);
//
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

//1.从大到小输出
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//2.打印3的倍数的数
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//3.最大公约数
//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int t = 0;
//
//	while (t = m % n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("最大公约数：%d\n", n);
//
//	return 0;
//}

//4.打印闰年
//#include <stdio.h>
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//5.打印素数
#include <stdio.h>
#include <math.h>
int main()
{
	int count = 0;
	int i = 0;
	for (i = 101; i <= 200; i+=2)
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);

	return 0;
}
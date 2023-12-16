#define _CRT_SECURE_NO_WARNINGS 1

//例6-1 输入整数n的值，求S=1+2+3+...+n的值。
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int S = 0;
//	printf("请输入n的值:");
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		S += i;
//		i++;
//	}
//	printf("S=%d\n", S);
//	return 0;
//}

//例6-2 用do-while语句求S=1+2+3+...+n的值。
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int S = 0;
//	printf("请输入n的值:");
//	scanf("%d", &n);
//	do
//	{
//		S += i;
//		i++;
//	} while (i <= n);
//	printf("S=%d\n", S);
//	return 0;
//}

//例6-4 用for语句求S=1+2+3+...+n的值。
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int S = 0;
//	printf("请输入n的值:");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		S += i;
//	}
//	printf("S=%d\n", S);
//	return 0;
//}

//例6-9 输出1～50之间所有的奇数。
//#include <stdio.h>
//int main()
//{
//	int n;
//	for (n = 1; n <= 50; n+=2)
//	{
//		printf("%3d", n);
//	}
//	return 0;
//}

//例6-10 用goto语句实现，输入整数n的值，求S=1+2+3+...+n的值。
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int S = 0;
//	printf("请输入n的值:");
//	scanf("%d", &n);
//loop:
//	if (i <= n)
//	{
//		S += i;
//		i++;
//		goto loop;
//	}
//	printf("S=%d\n", S);
//	return 0;
//}

//例6-11 编程实现，用递推法求Fibonacci数列的前20项，按照每行四项进行输出。
//#include <stdio.h>
//int main()
//{
//	int f1, f2, f3;
//	int i = 0;
//	f1 = f2 = 1;
//	printf("%-6d%-6d", f1, f2);
//	for (i = 3; i <= 20; i++)
//	{
//		f3 = f1 + f2;
//		printf("%-6d", f3);
//		if (i % 4 == 0)
//		{
//			printf("\n");
//		}
//		f1 = f2;
//		f2 = f3;
//	}
//	return 0;
//}

//例6-12 验证四方定理，输入任意一个自然数，都可用四个数的平方和来表示。
//#include <stdio.h>
//int main()
//{
//	int i, j, k, l, n;
//	printf("请输入一个数:\n");
//	scanf("%d", &n);
//	for (i = 0; i <= n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			for (k = 0; k <= j; k++)
//			{
//				for (l = 0; l <= k; l++)
//				{
//					if (i * i + j * j + k * k + l * l == n)
//					{
//						printf("%d*%d+%d*%d+%d*%d+%d*%d=%d\n", i, i, j, j, k, k, l, l, n);
//						return 0;
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//例6-13 中国古代数学家张丘建在他的《算经》中提出了一个著名的“百钱买鸡问题”：鸡翁一，值钱五；鸡母一，值钱三；鸡雏三，值钱一；百钱买百鸡，问翁、母、雏各几何？编程实现将所有可能出现的方案输出在屏幕上。
#include <stdio.h>
int main()
{
	int cock, hen, chick;
	for (cock = 0; cock <= 20; cock++)
	{
		for (hen = 0; hen <= 33; hen++)
		{
			for (chick = 3; chick <= 99; chick++)
			{
				if (5 * cock + 3 * hen + chick / 3 == 100)
				{
					if (cock + hen + chick == 100)
					{
						if (chick % 3 == 0)
						{
							printf("鸡翁:%d只，鸡母:%d只，鸡雏:%d只\n",cock,hen,chick);
						}
					}
				}
			}
		}
	}
	return 0;
}
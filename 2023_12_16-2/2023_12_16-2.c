#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (n++ <= 2);
//	printf("%d", n);
//
//	return 0;
//}

//1.依次输入5个数，求其中最大值并输出。
//#include <stdio.h>
//int main()
//{
//	int i, k, max;
//	printf("Please input k:");
//	scanf("%d", &max);
//	for (i = 2; i < 6; i++)
//	{
//		scanf("%d", &k);
//		if (max < k)
//		{
//			max = k;
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

//2.在3位数中找到第一个满足下列要求的正整数n，其各位数字的立方和恰好等于它本身。
//#include <stdio.h>
//int main()
//{
//	int n, i, j, k;
//	for (n = 100; n < 1000; n++)
//	{
//		i = n / 100;
//		j = (n-100*i)/10;
//		k = n % 10;
//		if (n == i * i * i + j * j * j + k * k * k)
//		{
//			printf("%d=%d*%d*%d+%d*%d*%d+%d*%d*%d\n", n, i, i, i, j, j, j, k, k, k);
//			break;
//		}
//	}
//	return 0;
//}

//3.输出两位数中所有能同时被3和5整除的数。
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	for (n = 10; n < 100; n++)
//	{
//		if (n % 3 == 0 && n % 5 == 0)
//		{
//			printf("%5d", n);
//		}
//	}
//	return 0;
//}

//4.输出以下#三角图形，共10行，#数目逐行加1。
//#include <stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("#");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//5.编写一个程序，输出以下乘法表。
//#include <stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//6.在一次竞赛中，A,B,C,D,E等5个人经过激烈的角逐，最终取得了各自的名次，他们的一个好朋友很遗憾没有观看比赛，在比赛结束后这个朋友询问他们之间的名次时得知：C不是第一名，D比E低二个名次，而E不是第二名，A既不是第一名，也不是最后一名，B比C低一个名次。
#include <stdio.h>
int main()
{
	int A, B, C, D, E;
	for (A = 2; A < 5; A++)
	{
		for (B = 1; B < 6; B++)
		{
			if (A != B)
			{
				for (C = 2; C < 6; C++)
				{
					if (C != A && C != B && B - C == 1)
					{
						for (D = 1; D < 6; D++)
						{
							if (D != A && D != B && D != C)
							{
								for (E = 1; E < 6; E++)
								{
									if (E != D && E != C && E != B && E != A && E != 2 && D - E == 2)
									{
										printf("A=%d,B=%d,C=%d,D=%d,E=%d\n", A, B, C, D, E);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

//��6-1 ��������n��ֵ����S=1+2+3+...+n��ֵ��
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int S = 0;
//	printf("������n��ֵ:");
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		S += i;
//		i++;
//	}
//	printf("S=%d\n", S);
//	return 0;
//}

//��6-2 ��do-while�����S=1+2+3+...+n��ֵ��
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int S = 0;
//	printf("������n��ֵ:");
//	scanf("%d", &n);
//	do
//	{
//		S += i;
//		i++;
//	} while (i <= n);
//	printf("S=%d\n", S);
//	return 0;
//}

//��6-4 ��for�����S=1+2+3+...+n��ֵ��
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int S = 0;
//	printf("������n��ֵ:");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		S += i;
//	}
//	printf("S=%d\n", S);
//	return 0;
//}

//��6-9 ���1��50֮�����е�������
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

//��6-10 ��goto���ʵ�֣���������n��ֵ����S=1+2+3+...+n��ֵ��
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int S = 0;
//	printf("������n��ֵ:");
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

//��6-11 ���ʵ�֣��õ��Ʒ���Fibonacci���е�ǰ20�����ÿ��������������
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

//��6-12 ��֤�ķ�������������һ����Ȼ�����������ĸ�����ƽ��������ʾ��
//#include <stdio.h>
//int main()
//{
//	int i, j, k, l, n;
//	printf("������һ����:\n");
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

//��6-13 �й��Ŵ���ѧ�����������ġ��㾭���������һ�������ġ���Ǯ�����⡱������һ��ֵǮ�壻��ĸһ��ֵǮ������������ֵǮһ����Ǯ��ټ������̡�ĸ���������Σ����ʵ�ֽ����п��ܳ��ֵķ����������Ļ�ϡ�
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
							printf("����:%dֻ����ĸ:%dֻ������:%dֻ\n",cock,hen,chick);
						}
					}
				}
			}
		}
	}
	return 0;
}
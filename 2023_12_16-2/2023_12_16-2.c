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

//1.��������5���������������ֵ�������
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

//2.��3λ�����ҵ���һ����������Ҫ���������n�����λ���ֵ�������ǡ�õ���������
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

//3.�����λ����������ͬʱ��3��5����������
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

//4.�������#����ͼ�Σ���10�У�#��Ŀ���м�1��
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

//5.��дһ������������³˷���
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

//6.��һ�ξ����У�A,B,C,D,E��5���˾������ҵĽ�������ȡ���˸��Ե����Σ����ǵ�һ�������Ѻ��ź�û�йۿ��������ڱ����������������ѯ������֮�������ʱ��֪��C���ǵ�һ����D��E�Ͷ������Σ���E���ǵڶ�����A�Ȳ��ǵ�һ����Ҳ�������һ����B��C��һ�����Ρ�
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
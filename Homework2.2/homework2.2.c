#define _CRT_SECURE_NO_WARNINGS 1

//1.��9�ĸ���
//#include <stdio.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//2.����1/1-1/2+1/3-1/4+1/5......-1/n��ֵ
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	double sum = 0.0;
//	int flag = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%f\n", sum);
//	return 0;
//}

//3.�����ֵ
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int a[10] = { 0 };
//	printf("����ʮ��������������\n");
//	for (i = 0; i <= 9; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	int max = a[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//		}
//	}
//	printf("���ֵΪ%d\n", max);
//	return 0;
//}

//4.�˷��ھ���
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//5.��������Ϸ
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("***********************\n");
//	printf("******	1.play	 ******\n");
//	printf("******	0.exit	 ******\n");
//	printf("***********************\n");
//}
//
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//6.���ֲ���
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 1;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±���:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ�����\n");
	}

	return 0;
}
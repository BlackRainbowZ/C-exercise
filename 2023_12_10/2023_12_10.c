#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	/*char a;
//	scanf("%c", &a);
//	getchar();
//	int d = sizeof(a);
//	printf("d = %d\n", d);
//
//	int b;
//	b = getchar();
//	int e = sizeof(b);
//	printf("e = %d\n", e);*/
//
//	char c1[] = "abc";
//	char c2[] = {'a','b','c'};
//
//	int f1 = sizeof(c1);
//	int f2 = sizeof(c2);
//	int f3 = strlen(c1);
//	int f4 = strlen(c2);
//	printf("f1 = %d\n", f1);
//	printf("f2 = %d\n", f2);
//	printf("f3 = %d\n", f3);
//	printf("f4 = %d\n", f4);
//	
//	
//	/*putchar(a);
//	putchar(b);
//	printf("c = %s\n", c);*/
//	return 0;
//}

//1.����n�Ľ׳ˡ�
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//
//	printf("%d\n", ret);
//	return 0;
//}

//2.����1!+2!+3!+......+10!
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//3.��һ�����������в��Ҿ����ĳ������n��
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 1;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//
//	return 0;
//}

//4.��д���룬��ʾ����ַ��������ƶ������м��ۡ�
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//
//int main()
//{
//	char arr1[] = "Welcome to China!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//����1��
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//5.��д����ʵ�֣�ģ���û������龰������ֻ�ܵ������Ρ�
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("���������������!\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("��������������˳�����\n");
//	}
//	return 0;
//}

//��������Ϸ��ʵ��
#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
void menu()
{
	printf("***********************\n");
	printf("******	1.play	 ******\n");
	printf("******	0.exit	 ******\n");
	printf("***********************\n");
}

void game()
{
	int ret = rand() % 100 + 1;
	int guess = 0;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}
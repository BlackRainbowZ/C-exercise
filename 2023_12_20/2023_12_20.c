#define _CRT_SECURE_NO_WARNINGS 1

//写一个函数可以交换两个整型变量的内容。
//#include <stdio.h>
//void Swap(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}

//1.判断是否为素数
//代码1
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	scanf("%d", &i);
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//		{
//			printf("%d不是素数\n", i);
//			break;
//		}
//	}
//	if (j > sqrt(i))
//	{
//		printf("%d是素数\n", i);
//	}
//
//	return 0;
//}

//代码2
//#include <stdio.h>
//#include <math.h>
//
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (is_prime(i))
//	{
//		printf("%d是素数", i);
//	}
//	else
//	{
//		printf("%d不是素数", i);
//	}
//	return 0;
//}


//2.判断是否为闰年
//代码1
//#include <stdio.h>
//int main()
//{
//	int year;
//	printf("请输入年号:");
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 == 0) || (year % 400 == 0))
// {
//		printf("%d是闰年\n", year);
// }
//	else
// {
//		printf("%d不是闰年\n", year);
// }
//	return 0;
//}

//代码2
//#include <stdio.h>
//int is_leap_year(int n)
//{
//	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
//}
//int main()
//{
//	int y = 0;
//	scanf("%d", &y);
//	if (is_leap_year(y))
//	{
//		printf("%d是闰年", y);
//	}
//	else
//	{
//		printf("%d不是闰年", y);
//	}
//	return 0;
//}

//3.二分查找
//代码1
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	scanf("%d", &k);
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
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}

//代码2
//#include <stdio.h>
//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 0;
//	scanf("%d", &key);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, key, sz);
//
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n", ret);
//	}
//
//	return 0;
//}

//4.写一个函数，每调用一次这个函数，就会将num的值增加1。
#include <stdio.h>

void Add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("%d\n", num);

	Add(&num);
	printf("%d\n", num);

	Add(&num);
	printf("%d\n", num);
	return 0;
}
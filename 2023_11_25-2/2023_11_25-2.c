#define _CRT_SECURE_NO_WARNINGS 1

//1.��д����ʵ�ִӼ�������ĳ��Ʒ�ĵ��ۺ������������Ʒ���ܼ۲������
//#include <stdio.h>
//int main()
//{
//	int x;
//	float y, s;
//	printf("��������Ʒ�ĵ���");
//	scanf("%f", &y);
//	printf("�����빺����Ʒ�ĸ���");
//	scanf("%d", &x);
//	s = x * y;
//	printf("��Ʒ�ܼ�Ϊ��%f\n", s);
//	return 0;
//}

//2.��д����ʵ����������������Ȼ���������Ե��������Ҫ��ʹ�õ�������������
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	printf("������a��b��ֵ");
//	scanf("a=%d,b=%d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}

//3.��*�����ĸC��ͼ����
//#include <stdio.h>
//int main()
//{
//	printf("****\n");
//	printf("*\n");
//	printf("*\n");
//	printf("****\n");
//	return 0;
//}

//4.��a=5��b=1.332��c='A'��
#include <stdio.h>
int main()
{
	int a = 5;
	float b = 1.332;
	char c = 'A';
	printf("a=%4d   b=%.3f\n", a, b);
	printf("a+b=%.1f\n", a + b);
	printf("c=\'%c\' or %d\n", c, c);
	return 0;
}
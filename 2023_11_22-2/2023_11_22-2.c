#define _CRT_SECURE_NO_WARNINGS 1

//1.��a��b����������ֵ���������
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 10;
//	b = 20;
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//2.�Ӽ�������һ����λ�������������������
//#include <stdio.h>
//int main()
//{
//	int num, a, b, c;
//	printf("Please input the number:");
//	scanf("%d", &num);
//	a = num / 100;
//	b = (num - a * 100)/10;
//	c = num - 100 * a - 10 * b;
//	a += b * 10 + c * 100;
//	printf("The result is %d\n", a);
//	return 0;
//}

//����뾶�����Բ�ܳ���Բ�����Բ�����
#define PI 3.1415926
#include <stdio.h>
int main()
{
	float r, l, s, v;
	printf("������Բ�뾶��");
	scanf("%f", &r);
	l = 2 * PI * r;
	s = PI * r * r;
	v = 4 * PI * r * r * r / 3;
	printf("�뾶Ϊ%f��Բ�ܳ�Ϊ%f,���Ϊ%f,Բ�����Ϊ%f\n", r, l, s, v);
	return 0;
}
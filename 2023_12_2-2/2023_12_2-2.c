#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = b = c = 1;
//	++a || ++b && ++c;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}

//1.���ʵ�����к����ļ��㣬����x��ֵ�����y��ֵ��
//#include <stdio.h>
//int main()
//{
//	int x, y;
//	printf("Please input x:");
//	scanf("%d", &x);
//	if (x < 0)
//		y = 3 * x + 2;
//	else
//		y = -x + 1;
//	printf("y=%d\n", y);
//	return 0;
//}

//2.�Ӽ���������1��7֮�������ʱ����ʾ��Ӧ�����ڼ���Ӣ�ĵ��ʡ����������ֲ���1��7��Χ��ʱ�������Error!����
//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("Please enter an integer:");
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("Monday\n");
//		break;
//	case 2:
//		printf("Tuesday\n");
//		break;
//	case 3:
//		printf("Wednesday\n");
//		break;
//	case 4:
//		printf("Thursday\n");
//		break;
//	case 5:
//		printf("Friday\n");
//		break;
//	case 6:
//		printf("Saturday\n");
//		break;
//	case 7:
//		printf("Sunday\n");
//		break;
//	default:
//		printf("Error!");
//	}
//	return 0;
//}

//3.��������������˰�Ĺ涨Ϊ���¹�����3500���£����ý�������3500Ԫ��5000Ԫ���֣���˰����Ϊ3%������5000Ԫ��9500Ԫ���֣���˰����Ϊ10%������9500Ԫ���֣���˰����Ϊ20%����̼����������˰��
//#include <stdio.h>
//int main()
//{
//	float a, b;
//	printf("input the income:");
//	scanf("%f", &a);
//	if (a < 3500)
//		b = 0;
//	else if (a <= 5000)
//		b = (a - 3500) * 0.03;
//	else if (a <= 9500)
//		b = (5000 - 3500) * 0.03 + (a - 5000) * 0.1;
//	else
//		b = (5000 - 3500) * 0.03 + (9500 - 5000) * 0.1 + (a - 9500) * 0.2;
//	printf("the tax is:%.2f", b);
//	return 0;
//}

//4.��ÿǧ��ÿ�ֻ���Ļ����˷�Ϊp��������Ϊw������Ϊs���ۿ�Ϊd�������˷�f���㹫ʽΪ��f=p*w*s*(1-d)��
//#include <stdio.h>
//int main()
//{
//	int c, s;
//	double p, w, d, f;
//	printf("Please enter price,weight,distance:");
//	scanf("%lf,%lf,%d", &p, &w, &s);
//	if (s >= 3000)
//		c = 12;
//	else
//		c = s / 250;
//	switch (c)
//	{
//	case 0:
//		d = 0;
//		break;
//	case 1:
//		d = 2;
//		break;
//	case 2:
//	case 3:
//		d = 5;
//		break;
//	case 4:
//	case 5:
//	case 6:
//	case 7:
//		d = 8;
//		break;
//	case 8:
//	case 9:
//	case 10:
//	case 11:
//		d = 10;
//		break;
//	case 12:
//		d = 15;
//		break;
//	}
//	f = p * w * s * (1 - d / 100.0);
//	printf("freight=%10.2f\n", f);
//	return 0;
//}

//5.���ʵ�֣�����һ���������ж����ܷ�3��5��7�����������������Ϣ֮һ��
#include <stdio.h>
int main()
{
	int a;
	printf("input the number:");
	scanf("%d", &a);
	if (a % 3 == 0 && a % 5 == 0 && a % 7 == 0)
		printf("can be divided by 3, 5, 7");
	else if (a % 3 == 0 && a % 5 == 0)
		printf("can be divided by 3, 5");
	else if (a % 3 == 0 && a % 7 == 0)
		printf("can be divided by 3, 7");
	else if (a % 5 == 0 && a % 7 == 0)
		printf("can be divided by 5, 7");
	else if (a % 3 == 0)
		printf("can be divided by 3");
	else if (a % 5 == 0)
		printf("can be divided by 5");
	else if (a % 7 == 0)
		printf("can be divided by 7");
	else
		printf("not can be divided by 3 or 5 or 7");
	return 0;
}
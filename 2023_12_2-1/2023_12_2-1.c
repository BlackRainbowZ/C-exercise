#define _CRT_SECURE_NO_WARNINGS 1

//��5-2 ���ʵ�֣���������������������������нϴ������
//#include <stdio.h>
//int main()
//{
//	int a, b, max;						//�������ͱ���a��b��max
//	printf("��������������:");			//�����Ļ��ʾ
//	scanf("%d%d", &a, &b);				//�Ӽ�������a��b��ֵ
//	max = a;							//����a�ǽϴ�����ȸ���max
//	if (a < b)							//��a��bС����b����max
//		max = b;
//	printf("�����нϴ����Ϊ:%d\n", max);//������
//	return 0;							//��������ֵ0
//}

//��5-3 ���ʵ�֣���������������������������нϴ��������if-else���ʵ�֣���
//#include <stdio.h>
//int main()
//{
//	int a, b;					//�������ͱ���a��b
//	printf("��������������:");	//�����Ļ��ʾ
//	scanf("%d%d", &a, &b);		//�Ӽ�������a��b��ֵ
//	if (a > b)					//��a����b�����a
//		printf("max=%d\n", a);
//	else						//�������b
//		printf("max=%d\n", b);
//	return 0;					//��������ֵ0
//}

//��5-4 ��д����Ҫ�����������ε������ߣ����������ε�����������
//#include <stdio.h>
//#include <math.h>									//����math.hͷ�ļ�
//int main()
//{
//	float a, b, c, s, area;							//�������
//	printf("������������������:\n");				//��ӡ��ʾ��Ϣ
//	scanf("a=%f,b=%f,c=%f", &a, &b, &c);			//�ֱ����������߳�
//	if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && a + c > b)//������㹹������������
//	{
//		s = (a + b + c) / 2;						//����s��ֵ
//		area = sqrt(s * (s - a) * (s - b) * (s - c));//�������������
//		printf("area=%f\n", area);					//������
//	}
//	else                                            //�粻��������
//		printf("����������߲��ܹ���������\n");		//�����ʾ��Ϣ
//	return 0;										//��������ֵ
//}

//��5-5 ѧ���ɼ��ɷ�Ϊ�ٷ��ƺ��弶�ƣ���������İٷ��Ƴɼ�score��ת������Ӧ���弶�Ƴɼ��������
//#include <stdio.h>
//int main()
//{
//	int score;
//	printf("������ɼ�:");			//��Ļ��ʾ��
//	scanf("%d", &score);			//����ٷ��Ƶķ���
//	if (score > 100 || score < 0)	//��ֵ������ʱ��ʾ������Ϣ
//		printf("��������������\n");
//	else if (score >= 90)			//�����else��ʾ0=<score&&score<=100
//		printf("��\n");
//	else if (score >= 80)			//�����else��ʾ0=<score&&score<=90
//		printf("��\n");
//	else if (score >= 70)			//�����else��ʾ0=<score&&score<=80
//		printf("��\n");
//	else if (score >= 60)			//�����else��ʾ0=<score&&score<=70
//		printf("����\n");
//	else                            //�����else��ʾ0=<score&&score<60
//		printf("������\n");
//	return 0;
//}

//��5-6 ��д����ʵ����������������������ֵ��
//#include <stdio.h>
//int main()
//{
//	int a, b, c, max;
//	printf("�����������������ö��Ÿ���\n");
//	scanf("%d,%d,%d", &a, &b, &c);
//	if (a > b)
//		if (a > c)
//			max = a;
//		else
//			max = c;
//	else
//		if (b > c)
//			max = b;
//		else
//			max = c;
//	printf("max=%d\n", max);
//	return 0;
//}

//��5-7 ���ʵ�֣��Ӽ���������1��12֮�������ʱ����ʾ��Ӧ�·ݵ�Ӣ�ĵ��ʣ����������ֲ���1��12�ķ�Χ��ʱ�������Error!����
//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("Please enter an integer:");
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("January\n");
//		break;
//	case 2:
//		printf("February\n");
//		break;
//	case 3:
//		printf("March\n");
//		break;
//	case 4:
//		printf("April\n");
//		break;
//	case 5:
//		printf("May\n");
//		break;
//	case 6:
//		printf("June\n");
//		break;
//	case 7:
//		printf("July\n");
//		break;
//	case 8:
//		printf("August\n");
//		break;
//	case 9:
//		printf("Septemper\n");
//		break;
//	case 10:
//		printf("October\n");
//		break;
//	case 11:
//		printf("November\n");
//		break;
//	case 12:
//		printf("December\n");
//		break;
//	default:
//		printf("Error!\n");
//		break;
//	}
//	return 0;
//}

//��5-10 ĳ����վ��89�š�92�ź�95���������ͣ��ۼ۷ֱ�Ϊ5.88��6.28��6.68��Ԫ/�������ṩ�ˡ�����Ա���͡����������͡���������ȼ��������û����Եõ�2%��5%���Żݡ��Ա��ʵ������û����������x�����͵�Ʒ��y�ͷ��������z������û�Ӧ���Ľ�
#include <stdio.h>
int main()
{
	float x, m1, m2, m;
	char y, z;
	printf("����Ҫ�����������͵����ͣ�a����89�ţ�b����92�ţ�c����95��\n");
	scanf("%c", &y);
	getchar();
	printf("����������ּ��ͷ���m�������Ա���ͣ�e������������\n");
	scanf("%c", &z);
	getchar();
	printf("����Ҫ���͵�����\n");
	scanf("%f", &x);
	switch (y)
	{
	case 'a':
		m1 = 5.88;
		break;
	case 'b':
		m1 = 6.28;
		break;
	case 'c':
		m1 = 6.68;
		break;
	}
	switch (z)
	{
	case 'm':
		m2 = 0.02;
		break;
	case 'e':
		m2 = 0.05;
		break;
	}
	m = x * m1 * (1 - m2);
	printf("���ѵĽ��:%.2f\n", m);
	return 0;
}
//#include<stdio.h>
//
//int round(double x)
//{
//	int a;
//	if (x >= 0)
//	{
//		a = (int)(x + 0.5);
//		return a;
//	}
//	else
//	{
//		a = (int)(x - 0.5);
//		return a;
//	}
//}
//
//double  power_n(double a, int  n)
//{
//	double b=1.0;
//	for (int i = 1; i <= n; i++)
//	{
//		b = b*a;
//	}
//	return b;
//}
//
//void  print_them(int m, int n)
//{
//	int count = 0;
//	for (int i = m; i <= n; i++)
//	{
//		if (i % 5 == 0)
//		{
//			printf("%d\t", i);
//			count++;
//			if (count % 8 == 0)
//			{
//				printf("\n");
//			}
//		}
//	}
//}
//
//int  is_blank(char ch)
//{
//	if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r')
//	{
//		return 1;
//	}
//	else return 0;
//}
//
//
//
//int g_numbers[128];
//int g_count = 0;
//int g_max = 0; // ���ֵ
//int g_min = 0; // ��Сֵ
//
//// ���û��������ɸ�������'x'�������룬���浽ȫ�ֱ�����
//void get_input()
//{
//	// �ں�����ֱ�ӷ���ȫ�ֱ����������������
//	while (1)
//	{
//		printf("����һ����: "); // ÿ��ֻ����һ����
//		int num = 0;
//		int ret = scanf_s("%d", &num);
//		if (ret != 1)
//		{
//			// scanf�ķ���ֵ��ʾ�ɹ������˼����ֶ�
//			// ���磬����һ���ַ�X����ʱscanf�ķ���ֵΪ0
//			// ����һ���� 123�����ʱscanf�ķ���ֵΪ1����ʾ���յ���һ���ֶ�
//			printf("������󣬽�������!\n");
//			break;
//		}
//		else
//		{
//			g_numbers[g_count] = num;
//			g_count++;
//		}
//	}
//}
//
//// �������ֵ����Сֵ, ��Ϊ����һ������ֻ��һ������ֵ��������ͬʱ����max��min��û�취�ˣ�ֻ����ȫ�ֱ���
//void max_and_min()
//{
//	g_max = g_min = g_numbers[0];
//	for (int i = 1; i<g_count; i++)
//	{
//		if (g_max < g_numbers[i])
//			g_max = g_numbers[i];
//		if (g_min > g_numbers[i])
//			g_min = g_numbers[i];
//	}
//}
//
//int sanjiaoxing(int a,int b,int c)
//{
//	int aa = a*a; int bb = b*b; int cc = c*c;
//	if (aa == cc + bb || bb == aa + cc || cc == aa + bb)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//double discount(double a)
//{
//	if (a < 30)
//	{ 
//		return a; 
//	}
//	else if (a < 90)
//	{
//		return a = a*0.5;
//	}
//	else
//		return a = a*0.8;
//}
//
////������һ��������ֵ
//double  myAbs(double  value)
//{
//	if (value >= 0)
//	{
//		return value;
//	}
//	else
//	{
//		return -value;
//	}
//}
//
////�ж�һ���Ƿ�Ϊ����
//int leap_year(int year)
//{
//	if (year % 100 == 0)
//	{
//		if (year%400==0)
//			return 1;
//	}
//	else
//	{
//		if (year % 4 == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
	//��һ��С����������Ϊ������
	//double a = -1.1;
	//printf("%.1lf -> %d\n", a, round(a));

	//дһ��������������һ������n�η���
	//double r = power_n(0.2, 3);
	//printf("%.3lf\n",r);

	//дһ����������ӡ��M��N֮��������ܱ�5����������ÿ�д�ӡ8����
	//print_them(1,110);

	//дһ�������������ж�һ��char�Ƿ�Ϊ�հ��ַ���
	//int r = is_blank(' ');
	//printf("%d\n", r);

	//��1�� ����һ��ȫ�ֵ����飬��main������ȡ�û����룬�浽�������С���������С����
//ע�⣺Ҫ��¼�û������˶��ٸ�����

//��2�� дһ���������������������ֵ����Сֵ��
// ��Ϊ���ǻ���֪����ô�����鴫�ݸ�����������ֻ�ö���һ��ȫ�ֱ���
	//get_input();

	//printf("---------- �г����� ------------\n");
	//for (int i = 0; i<g_count; i++)
	//{
	//	printf("%d ", g_numbers[i]);
	//}

	//max_and_min();
	//printf("����, ���ֵ%d, ��Сֵ%d \n", g_max, g_min);

	//дһ������������������Ϊ������a,b,c�������ߣ�����жϣ���a,b,c����ֱ��������ʱ������1�����򣬷���0
	//int r = sanjiaoxing(3,4,5);
	//printf("%d\n", r);

	///int a = 0;
	//printf("������һ���۸�");
	//scanf_s("%d", &a);
	//a = (double)a;
	//double r = discount(a);
	//printf("%.2lf\n", r);

	//printf("%.2lf\n", myAbs(-0.5));

	//printf("%d\n", leap_year(2000));

//	return 0;
//}
//#include<stdio.h>
//
//int jiecheng(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n*jiecheng(n - 1);        //1*2*3*4*5*...*n
//}
//
//double ctof(int c)
//{
//
//	return 32 + c * 9.0 / 5;
//}
//
//
//int sushu(int n)
//{
//	if (n == 1 || n == 2) return 0;
//	int flag = 1;
//	for (int i = 2; i < n; i++)                //��Ϊ����ֻ�ܱ�1�����������������Դ˴�i��2��ʼȡ��
//	{
//		if (n%i == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	return flag;
//}
//
//double sum(int a)
//{
//	double sum = 0;
//	for (int i = 2; i <= a; i++)
//	{
//		double b = (i - 1.0) / i;       //�˴�1����Ϊ1.0��ת��double����
//		sum += b;
//	}
//	return sum;
//}
//
//unsigned char RightShift(unsigned char n, int num_of_bits)
//{
//	// ��unsigned charΪ��
//	// num_of_bits : 2
//	// mask: 11000000
//	// ��ô�õ�mask?
//	// (1)  011 ( 100 - 001)
//	// (2)  11<< 6
//	// ��ô�õ�011? ��num_of_bits�Ĺ�ϵ��
//	// (1u << num_of_bits) - 1
//	unsigned char mask = (1u << num_of_bits) - 1;
//	mask <<= (8 - num_of_bits);
//	n >>= num_of_bits;               //�������Ʋ���  >>=
//	n |= mask;   //�����
//	return n;
//}
//
//int isrunnian(int year)
//{
//	if (year % 100 == 0)
//	{
//		if (year % 400 == 0)
//			return 1;
//	}
//	if (year % 4 == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//
//
//int yearday(int year, int month, int day)
//{
//	int a = 0;
//	int data[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	for (int i = 0; i < month-1; i++)
//	{
//		a += data[i];
//	}
//	if (isrunnian(year))
//	{
//		a += 1;
//	}
//	a += day;
//	return a;
//}
//
//int ManhattanDistance(int  x1, int y1, int x2, int y2)
//{
//	//�˴������������㣬���жϸ�ֵ������return����ֵ���෴�����󷨣�0-x
//	int d; int d1; int d2;
//	if ((x1 - x2) >= 0)
//	{
//		d1 = x1 - x2;
//	}
//	else
//		d1 = x2 - x1;
//	if ((y1 - y2) >= 0) 
//		d2 = y1 - y2;
//	else 
//	    d2 = y2 - y1;
//	d = d1 + d2;
//	return d;
//}
//
//int main()
//{
//	//�׳� �ݹ�
//	//int a = 0;
//	//scanf_s("%d",&a);
//	//for (int i = 1; ; i++)
//	//{
//	//	int r = jiecheng(i);
//	//	if (r > 100 && r < 10000)
//	//	{
//	//		printf("%d\n", r);
//	//	}
//	//	if (r >= 10000)                   //��ֹ����
//	//		break;
//	//}
//
//	// ( �ؼ���: �¶� ���϶� ���϶� ) 
//	//int data[] = { -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	//for (int i = 0; i < 15; i++)
//	//{
//	//	double F = ctof(data[i]);
//	//	printf("%2d, %.1lf\n", data[i], F);
//	//}
//
//	//for (int i = 1; i <= 100; i++)
//	//{
// // 	if (sushu(i))
//		//{
//			//printf("%d������\n", i);
//		//}
//	//}
//
//
//	//�ж�һ�������Ƿ�Ϊˮ�ɻ�������νˮ�ɻ�����ָһ����λ��, ��100~999֮�䣬������λ���������͵��ڸ��������ͳ�Ϊˮ�ɻ�����
//	//for (int i = 100; i < 1000; i++)
//	//{
//	//	if (is_daffodils(i))
//	//	{
//	//		printf("1");
//	//	}
//	//	else
//	//	{
//	//		printf("0");
//	//	}
//	//}
//
//
//	//forѭ���б��������ǰn��� S =  1/2 + 2/3 + 3/4 + (n-1) / n
//	//int a;
//	//printf("������һ������");
//	//scanf_s("%d", &a);
//	//double r = sum(a);
//	//printf("%.4f", r);
//
//	//дһ�����Ƶĺ�������unsigned char����nλ������nλ��1������׼�����ǲ�0���ֳɸĳɲ�1��
//	//����mask
//	//unsigned char n = 135; int num_of_bits = 2;
//	//unsigned char r = RightShift(n , num_of_bits);
//	//printf("%u", r);
//
//
//	//���磬���� year = 2015, month = 4, day = 24������һ�½�����2015��ĵڼ��졣
//	//Ҫ������������أ�������ʱ��2�·�Ϊ29�졣
//	//int day = yearday(2015, 4, 24);
//	//printf("%d��%d��%d����һ���еĵ�%d��\n", 2015, 4, 24, day);
//
//
//	//��ƽ���������������ֱ�Ϊ(x1, y1)  (x2, y2) ������ x1, y1, x2, y2Ϊ������
//	//�������پ��� Manhattan Distance �Ķ���Ϊ : | x1 - x2 | +| y1 - y2 |
//	//дһ��������������֮���Manhattan Distance
//	int  x1 = 0; int y1 = 1; int x2 = 0; int y2 = 2;
//	int r =  ManhattanDistance(x1,y1,x2,y2);
//	printf("���������%d", r);
//	return 0;
//}
//





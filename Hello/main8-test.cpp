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
//int g_max = 0; // 最大值
//int g_min = 0; // 最小值
//
//// 让用户输入若干个数，经'x'结束输入，保存到全局变量里
//void get_input()
//{
//	// 在函数内直接访问全局变量，无需参数传递
//	while (1)
//	{
//		printf("输入一个数: "); // 每次只输入一个数
//		int num = 0;
//		int ret = scanf_s("%d", &num);
//		if (ret != 1)
//		{
//			// scanf的返回值表示成功输入了几个字段
//			// 例如，输入一个字符X，此时scanf的返回值为0
//			// 输入一个数 123，则此时scanf的返回值为1，表示接收到了一个字段
//			printf("输入错误，结束输入!\n");
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
//// 计算最大值和最小值, 因为我们一个函数只有一个返回值，现在想同时返回max和min就没办法了，只好用全局变量
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
////求任意一个数绝对值
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
////判断一年是否为闰年
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
	//将一个小数四舍五入为整数。
	//double a = -1.1;
	//printf("%.1lf -> %d\n", a, round(a));

	//写一个函数，用于求一个数的n次方。
	//double r = power_n(0.2, 3);
	//printf("%.3lf\n",r);

	//写一个函数，打印从M到N之间的所有能被5整除的数。每行打印8个数
	//print_them(1,110);

	//写一个函数，用于判断一个char是否为空白字符。
	//int r = is_blank(' ');
	//printf("%d\n", r);

	//（1） 定义一个全局的数组，在main函数读取用户输入，存到此数组中。允许输入小数。
//注意：要记录用户输入了多少个数。

//（2） 写一个函数，求出该数组的最大值、最小值。
// 因为我们还不知道怎么把数组传递给函数，所以只好定义一个全局变量
	//get_input();

	//printf("---------- 列出数字 ------------\n");
	//for (int i = 0; i<g_count; i++)
	//{
	//	printf("%d ", g_numbers[i]);
	//}

	//max_and_min();
	//printf("其中, 最大值%d, 最小值%d \n", g_max, g_min);

	//写一个函数，输入三个数为三角形a,b,c的三条边，完成判断：当a,b,c构造直角三角形时，返回1，否则，返回0
	//int r = sanjiaoxing(3,4,5);
	//printf("%d\n", r);

	///int a = 0;
	//printf("请输入一个价格：");
	//scanf_s("%d", &a);
	//a = (double)a;
	//double r = discount(a);
	//printf("%.2lf\n", r);

	//printf("%.2lf\n", myAbs(-0.5));

	//printf("%d\n", leap_year(2000));

//	return 0;
//}
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
//	for (int i = 2; i < n; i++)                //因为素数只能被1和它本身整除，所以此处i从2开始取余
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
//		double b = (i - 1.0) / i;       //此处1必须为1.0，转换double类型
//		sum += b;
//	}
//	return sum;
//}
//
//unsigned char RightShift(unsigned char n, int num_of_bits)
//{
//	// 以unsigned char为例
//	// num_of_bits : 2
//	// mask: 11000000
//	// 怎么得到mask?
//	// (1)  011 ( 100 - 001)
//	// (2)  11<< 6
//	// 怎么得到011? 跟num_of_bits的关系？
//	// (1u << num_of_bits) - 1
//	unsigned char mask = (1u << num_of_bits) - 1;
//	mask <<= (8 - num_of_bits);
//	n >>= num_of_bits;               //正常右移操作  >>=
//	n |= mask;   //或操作
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
//	//此处可以先做运算，在判断给值，不用return返回值。相反数的求法：0-x
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
//	//阶乘 递归
//	//int a = 0;
//	//scanf_s("%d",&a);
//	//for (int i = 1; ; i++)
//	//{
//	//	int r = jiecheng(i);
//	//	if (r > 100 && r < 10000)
//	//	{
//	//		printf("%d\n", r);
//	//	}
//	//	if (r >= 10000)                   //终止条件
//	//		break;
//	//}
//
//	// ( 关键字: 温度 摄氏度 华氏度 ) 
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
//			//printf("%d是质数\n", i);
//		//}
//	//}
//
//
//	//判断一个数，是否为水仙花数。所谓水仙花数是指一个三位数, 在100~999之间，如果其各位数字立方和等于该数本身，就称为水仙花数。
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
//	//for循环列表：求数组的前n项和 S =  1/2 + 2/3 + 3/4 + (n-1) / n
//	//int a;
//	//printf("请输入一个数：");
//	//scanf_s("%d", &a);
//	//double r = sum(a);
//	//printf("%.4f", r);
//
//	//写一个右移的函数，将unsigned char右移n位后，左侧高n位被1。（标准右移是补0，现成改成补1）
//	//构造mask
//	//unsigned char n = 135; int num_of_bits = 2;
//	//unsigned char r = RightShift(n , num_of_bits);
//	//printf("%u", r);
//
//
//	//例如，给定 year = 2015, month = 4, day = 24，计算一下今天是2015年的第几天。
//	//要考虑闰年的因素，当闰年时，2月份为29天。
//	//int day = yearday(2015, 4, 24);
//	//printf("%d年%d月%d日是一年中的第%d天\n", 2015, 4, 24, day);
//
//
//	//设平面上两个点的坐标分别为(x1, y1)  (x2, y2) ，其中 x1, y1, x2, y2为整数。
//	//则曼哈顿距离 Manhattan Distance 的定义为 : | x1 - x2 | +| y1 - y2 |
//	//写一个函数，求两点之间的Manhattan Distance
//	int  x1 = 0; int y1 = 1; int x2 = 0; int y2 = 2;
//	int r =  ManhattanDistance(x1,y1,x2,y2);
//	printf("两点距离是%d", r);
//	return 0;
//}
//





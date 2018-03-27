//#include<stdio.h>
//int main()
//{
	/*
	int a,m,n,q;
	printf("Please input a number:");
	scanf_s("%d",&a);
	m = a / 100;
	n = a / 10 - m * 10;
	q = a - m * 100 - n * 10;
	printf("百位数是：%d\n", m);
	printf("十位数是：%d\n", n);
	printf("个位数是：%d\n", q);
	*/

	/*
	int n = 9527;
	char buf[4];
	buf[0] = n % 10;
	buf[1] =((n % 1000)%100)/10;
	buf[2] =( n % 1000)/100;
	buf[3] = n / 1000;
	printf("buf[4]：%d,%d,%d,%d\n", buf[3],buf[2],buf[1],buf[0]);
	*/

	/*
	int a;
	printf("Please input a score:");
	scanf_s("%d", &a);
	printf("%c\n", a>=90 ? 'A':( a > 60 ? 'B': 'C') );  //两层表达式给学生分数分等级
	*/

	/*
	unsigned char m = 181;  //按位操作符时，用unsigned
	unsigned char n = ~m;
	printf_s("m:%u\nn:%u\n", m, n);
	//或者强制转换
	printf("取反后:%u\n",(unsigned char)~n);
	printf("右移三位:%u\n", (unsigned char)(0xA7 >> 3));
	*/


	/*
	char buf[] = "A2";
	int a1 = (buf[0] - 'A') + 10;
	int a2 = (buf[1] - '0');
	int result = a1 * 4 + a2;

	unsigned int n1 = (buf[0] - 'A') + 10; 
	unsigned int n2 = (buf[1] - '0');
	unsigned int result = (n1 << 4) + n2;  //unsigned 位移4位相当于*16
	*/

	/*
	unsigned char a = 181; //10110101
	a &= ~(1u << 5);   
	//一u  00100000  ~完 11011111
	//                   10110101=10010101

	//设置某位为1，10110101，将从左往右第二位置1，或操作
	a |= (1u << 6);

	//某位清零，与操作，01000000取反再与
	//判断某位是否为1，与操作，01000000直接与
	*/

	/*
	unsigned short year;
	unsigned char month;
	unsigned char day;
	
	int y, m,d;
	printf("Please input year:");
	scanf_s("%d", &y); year = (unsigned short)y;
	printf("Please input month:");
	scanf_s("%d", &m); month = (unsigned char)m;
	printf("Please input day:");
	scanf_s("%d", &d); day = (unsigned char)d;
	printf("%d年%d月%d日\n", (int)year, (int)month, (int)day);
	*/
//	return 0;
//}
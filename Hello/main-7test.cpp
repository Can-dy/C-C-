//#include<stdio.h>
//#include<math.h>
//int main()
//{

/*//求100以内的奇数的平方和 
	int a[100]; int b = 0;
	for (int i = 0; i < 100; i++)
	{
		a[i] = i + 1;
		if (a[i] % 2 != 0)
		{
			b += a[i] * a[i];
		}
	}
	printf("%d", b);
*/

/*//已经有源字符串src，现输入一个字符，要求截取剩下的字符。例如，src: "testroad"，输入'r'，则剩下"test" 
	char buf[] = "testroad";
	char ch = 'r';
	int n = sizeof(buf);
	for (int i = 0; i < n-1; i++)
	{
		if (buf[i] == 'r')
		{
			break;
		}
		printf("%c",buf[i]);
	}
	printf("\n");
*/


/*//有一个数组，长度为10。
//int arr[10] = { 128, 98, 78, 9, 87, 78, 90, 89, 72, 65 };
//int dst[10];
//int count = 0;
//用for循环，遍历这个数组，把个位是8的数字存到dst数组中，并记录符合条件的元素的个数。 
	int arr[10] = { 128, 98, 78, 9, 87, 78, 90, 89, 72, 65 };
	int dest[10];
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 10 == 8)                 //个位的数字是8，则取余8即可
		{
			dest[i] = arr[i];
			count++;
		}
	}
	printf("%d\n", count);
	*/

/*
//给定一个字符串。char str[] = "http://pan.baidu.com/s/1qWDQ04O";
//试将数组里面的小写字母改成大写，大写字母改成小写。
//
//用for循环实现。
	char str[] = "http://pan.baidu.com/s/1qWDQ040";
	int n = sizeof(str); char res[200];
	for (int i = 0; i < n-1; i++)
	{
		if (str[i] >= 'a'&&str[i] <= 'z')
		{
			res[i] = str[i] - 32;
		}
		else if (str[i] >= 'A'&&str[i] <= 'Z')
		{
			res[i] = str[i] + 32;
		}
		else
		{
			res[i] = str[i];
		}
		printf("%c", res[i]);
	}
	printf("\n");
*/


/*
//字符串大小写转换。
	char str[] = "http://pan.baidu.com/s/1dD4cjeD";
	int n = sizeof(str); char res[200]; int i=0;
	while (1)                                                  //while语句，括号内为1则执行，首句给出中断条件，在最末给出i++
	{
		if (str[i] == 0)break;
		if (str[i] >= 'a'&&str[i] <= 'z')
		{
			res[i] = str[i] - 32;
		}
		else if (str[i] >= 'A'&&str[i] <= 'Z')
		{
			res[i] = str[i] + 32;
		}
		else
		{
			res[i] = str[i];
		}
		printf("%c", res[i]);
		i++;
	}
*/

	/*
	数组合并操作。
	int a[6] = { 1, 2, 3, 4, 5, 6 };
	int b[4] = { 7, 8, 9, 0 };
	int dst[10];
	for (int i = 0; i < 6; i++)
	{
		dst[i] = a[i];
		printf("%d", dst[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		dst[i+6] = b[i];
		printf("%d", dst[i]);
	}
	*/


/*
//数组的移动与拷贝：将一个数组的前半部分和后半部分交换位置。
int  buf[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
int arr[8];
for (int i = 0; i < 4; i++)
{
	arr[i] = buf[i+4];
	printf("%d", arr[i]);
}
for (int i = 4; i < 8; i++)
{
	arr[i] = buf[i - 4];
	printf("%d", arr[i]);
}
*/

/*
//if语句练习
int a;
scanf_s("%d", &a);         //中间么有等于号
if (a >= -10 && a <= 0)
{
	printf("yes\n");
}
else
{
	printf("no\n");
}
*/

/*
//给定一个int型的数，判断其是否为奇数。
int a;
scanf_s("%d", &a);         //中间么有等于号
if (a%2==0)
{
	printf("不是奇数\n"); 
}
else
{
	printf("是奇数\n");
}
*/

/*
//给定一个int型的数，判断其是否为奇数。
int a[16] = { 1, 3, 5, 7, 9 };
int count = 5;  // 现存了5个数
int b = 4; int c = 2; int s[20];
for (int i = 0; i < c; i++)
{
	s[i] = a[i];
	printf("%d", s[i]);
}
s[c] = b;
printf("%d", s[c]);
for (int i = c+1; i < 6; i++)
{
	s[i+1] = a[i-1];
	printf("%d\n", s[i+1]);
}
*/

/*
//求多项式之和， fx (n) = 1 - 1/3 + 1/5 - 1/7 + ... + (-1)^(n/2) * 1/n 。 
int n;
scanf_s("%d", &n); double s = 0; double y; double k=-1.0;
for (int i = 1; i < n; i++)
{
	k = -k;
	y = 1.0 / (2*i-1);                      //此处的1必须为1.0的形式
	s += k*y;
}
printf("%.3lf\n", s);
*/

/*
//例如，输入"Hello,World"，输出打印显示 “Hll,Wrld"
char str[] = "Hello,world";
int m; m = sizeof(str); char a; char b;
for (int i = 0; i < m; i++)
{
	b = str[i];
	if (b != 'a' && b != 'e' && b != 'i' && b != 'o' && b != 'u' && b != 'A' && b != 'E' && b != 'I' && b != 'O' && b != 'U')
	{
		a = str[i];
		printf("%c", a);
	}
}
printf("\n");
*/


/*
//例如，用户输入为 "hello" ，则输出打印 "olleh"
char buf[] = "hello"; char a[20];
//计算字符串长度
int n = sizeof(buf);                   //此时的n包含字符串末尾的那个结尾零字符
for (int i = 0; i < n; i++)
{
	a[i] = buf[n - i - 1];
	printf("%c", a[i]);
}
*/


/*
//已经两个int数组，求它们的交集：即共同的元素。
int a[] = { 1, 2, 3 };
int b[] = { 2, 3, 4 };
for (int i = 0; i < 3; i++)
{
	for (int j = 0; j < 3; j++)
	{
		if (a[i] == b[j])
		{
			printf("%d", a[i]);
		}
	}
}
*/

/*
//给定一个数组，将所有的元素在一行里打印出来，中间以逗号分开。注意，末尾不要加逗号。
int  buf[5] = { 1, 2, 3, 4, 5 };
for (int i = 0; i < 4; i++)
{
	printf("%d,", buf[i]);
}
printf("%d", buf[4]);
*/

/*
设计表决算法： 有5个人投票，当有3个或以上的人同意时，投票通过。
int n=0; int s=0; 
char a;
printf("A:");
scanf_s("%c",&a);
printf("\n");
fflush(stdin);                              //scanf_s一个个写入的时候会有残余，因此下一个写入前应添加语句fflush(stdin)清空;
char b;
printf("B:");
scanf_s("%c", &b);
printf("\n");
fflush(stdin);
char c;
printf("C:");
scanf_s("%c", &c);
printf("\n");
fflush(stdin);
char d;
printf("D:");
scanf_s("%c", &d);
printf("\n");
fflush(stdin);
char e;
printf("E:");
scanf_s("%c", &e);
printf("\n");
if (a == 'Y'){ n++; }
else{ s++; }
if (b == 'Y'){ n++; }
else{ s++; }
if (c == 'Y'){ n++; }
else{ s++; }
if (d == 'Y'){ n++; }
else{ s++; }
if (e == 'Y'){ n++; }
else{ s++; }

printf("%d,%d\n",n, s);
if (n >= 3)
{
	printf("同意");
}
else
{
	printf("不同意");
}
*/

/*
//一个数组中有N个数，要求去除其中重复的数字（重复的数字只保留一个）。然后输出最后的结果。
int  a[6] = { 1, 3, 4, 1, 8, 4 };
//int n = sizeof(a);            //此处不能用sizeof，一个int占4为，6个sizeof则是24。char占1个，short占2个，float占4个，double占8个
printf("%d,", a[0]);
for (int i = 1; i < 6; i++)
{
	int exist = 0;      //如果不存在
	for (int j = 0; j < i; j++)
	{
		if (a[j] == a[i])
		{
			exist = true;
			break;
		}
	}
	if (exist)
	{
		//重复
	}
	else
	{
		printf("%d,", a[i]);
	}
}
*/


/*
//已知密码为"1a2b3c"
//要求用户输入密码：
//当密码匹配时，打印显示"OK"。
//当密码错误时，打印显示“Error，请重新输入"。
char str[] = "1a2b3c";
int n = sizeof(str); char buf[10];
int equal = 1;
for (int j = 0; j < n - 1; j++)
{
	printf("请输入密码：");
	fflush(stdin);
	scanf_s("%c", &buf[j]);
	printf("%c\n", buf[j]);
}

for (int i = 0; i < n - 1; i++)
{
	if (str[i] != buf[i])
	{
		equal = 0;
		printf("密码有误，请重新输入！");
		break;
	}
}
if (equal)
{
	printf("密码正确\n");
}
else
{
	printf("密码错误\n");
}
*/

/*
//字符串的删除: 删除字符串头部的空白字符。
char buf[] = "   helloworld";
//int black = 1;
int n = sizeof(buf);
for (int i = 0; i < n - 1; i++)
{
	if (buf[i] != ' ')
	{
		printf("%c", buf[i]);
	}
}
printf("\n");
*/

/*
//char buf [9] = { 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0xAA, 0xBB};
//则打印显示
//11 22 33 44
//55 66 77 88
//AA BB
char buf[10] = { 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0xAA, 0xBB };
for (int i = 0; i < 10; i++)
{
	printf("%02X ",(unsigned char)buf[i]);             //0xAA输出为FFFFFFAA,通过强制转换成unsigned char 使得输出为AA

	if ((i+1) % 4 == 0 || i==9)
	{
		printf("\n");
	}
}
*/
/*
//N (N=20)个人围成一圈做游戏，规则如下：
      从某一个人开始报数，依次报1，2，3，喊到3的人出局。
int n=20;
for (int i = 0; i < 20; i++)
{
	if ((i + 1) % 3==0)
	{
		int b = i + 1;
		printf("%d", b);
	}
}
*/

/*
//输入src为"hello,world!"，filter为"do"，则打印输出为"hell,wrl!" 
char src[] = "hello,world!";
char dst[] = "do";
int m = sizeof(src); int n = sizeof(dst);
for (int i = 0; i < m-1; i++)
{
	int exist = 0;    //没出现同样
	for (int j = 0; j < n-1; j++)
	{
		if (src[i] == dst[j])
		{
			exist = true;
			break;
		}	
	}
	if (exist)
	{	
	}
	else
	{
		printf("%c", src[i]);
	}
}
*/
//	return 0;
//}
//ctrl + k + c；ctrl + k + u；
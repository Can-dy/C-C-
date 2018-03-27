//#include<stdio.h>
//int main()
//{
/*
	//(1)用户输入一个整数a，如果a>100,提示“Too large”；如果<+0,提示“Too small”；其他情况提示“OK”。
	int a = 0;
	printf("Please input a number:");
	scanf_s("%d", &a);
	if (a > 100)
	{
		printf("Too large\n");
	}
	else if (a < 0)
	{
		printf("Too small\n");
	}
	else
		printf("OK\n");
*/


/*
	//(2)用户输入两个整数a和b：当a和b都位于[0,100]之间时，提示“OK”；否则提示“Bad Input”。
	int a = 0; int b = 0;
	printf("Please input a and b:");
	scanf_s("%d,%d", &a,&b);
	if ((a >= 0 && a <= 100) && (b >= 0 && b <= 100))
	{
		printf("OK\n");
	}
	else
		printf("Bad Iput\n");
*/


/*
	//（3）某函数是分段函数：当x<0时，y=x+1；当x>=0时，y=4x的立方。用c++代码完成，令用户输入一个小数x，根据上式计算出相应的y值。
	double x=0, y=0; int a;
	printf("Please input a number:");
	scanf_s("%d", &a);
	x = (double)a;
	if (x < 0)
	{
		y = x + 1;
	}
	else
	{
		y = 4 * (x * x * x);
	}
		
	printf("result:%lf\n", y);
*/


/*
	//（4）令用户输入1~3之间的整数a，当输入1时，打印输出“Very Good”，当用户输入2时，打印输出“Good”，当输入3时，打印输出“Not Bad”；如果都不是，则输出"Bad Input"然后退出程序
	int a = 0;
	printf("Please input a number:");
	scanf_s("%d", &a);
	switch (a)
	{
	case 1:                                 //case之后加选择时要有空格
		printf("very good\n");
		break;
	case 2:
		printf("good\n");
		break;
	case 3:
		printf("not bad\n"); 
		break;
	default:
		printf("bad input\n"); 
		break;
	}
*/


/*
	//（5）有一个整数数组int a[128],请用for语句每一个元素的值为a[0]=127,a[1]=126,a[2]=125,...,a[127]=0.
	int a[128];
	for (int i = 0; i <= 127; i++)
	{
		a[i] = 127 - i;
		printf("a[%d]=%d\n", i,a[i]);
	}
*/


/*
	//(6)用while语句实现上题任务。
	int a[128]; int i = 0;
	while (i <= 127)
	{
		a[i] = 127 - i;
		printf("a[%d]=%d\n", i, a[i]);
		i++;
	}
*/



/*
	//（7）令用户从控制台输入10个整数，统计里面能被3整除的数的个数。
	int a[10]; int n = 0; int c = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &n);
		a[i] = n;
		printf("a[%d]=%d\n", i, a[i]);
		if ((a[i] % 3) == 0)                                 //此处是%，不是/
		{
			c++;
		}
	}
	printf("个数：%d\n", c);
*/

	
/*
	//（8）求上题中10个数的最大值，最小值和平均值。
	int a[10]; int n = 0;  int max; int min; int sum=0; double mean;
	scanf_s("%d", &n);
	a[0] = n; max = a[0]; min = a[0];            //max和min初始化的时候必须在外面，然后与每次输入的数字作比较
	for (int i = 1; i < 10; i++)
	{
		scanf_s("%d", &n);
		a[i] = n;
		if (a[i]>=max)                                     
		{
			max=a[i];
		}
		if (a[i]<=min)
		{
			min=a[i];
		}
		sum += a[i];
	}
	sum += a[0];
	//sum = (double)sum;                 //可转化，也可不转
	mean = sum / 10.0;                   //10必须写成10.0才能保证除出来的数字有小数位
	
	printf("max：%d\n", max);
	printf("min：%d\n", min);
	printf("sum：%d\n", sum);
	printf("mean：%lf\n", mean);         //切记：当为double类型时候，必须%lf
*/


/*
	//（9）质数是指除了1和它本身之外，不能被任何其他数整除的自然数。数学中硬性规定1,2不是质数。例如：3,5,7,11,13,...试求出所有小于100的质数，并打印出来。

	for (int n = 1; n < 100; n++)           //n从1取到100
	{
		if(n==1||n==2) continue;
		int is_prime = 1;                   //定义是质数为1
		for (int i = 2; i < n; i++)            
		{
			if (n % i == 0)
			{                             //能整除就不是质数,对每一个数进行除从2到它本身
				is_prime = 0;
				break;
			}
		}
		if (is_prime)
		{
			printf("prime:%d\n", n);
		}	
	}
*/



/*
	//（10）有一段文字：“China is a great country with an history”,请统计出其元音字母的个数和非元音字母的个数。提示：元音字母指a e i o u或者大写的A E I O U。
	char str[] = "China is a great country with an history";
	int m; m = sizeof(str); char b; int c = 0;
	for (int i = 0; i < m; i++)
	{
		if(str[i]==0)                              //首先将空格处过滤掉
		{
			break;
		}
		if (str[i] >= 'a' && (str[i] <= 'z'||str[i] >= 'A' && (str[i] <= 'Z')     //判断文字中所有的大小写字母
		{
			b = str[i];
			if (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u' || b == 'A' || b == 'E' || b == 'I' || b == 'O' || b == 'U')
				c++;
		}
	}
	printf("%d\n", c);
*/



	//打印n*n的上三角阵列。     //观察当j<i时，打印空格，当i>=j时，打印符号。不用列矩阵！！！
	/*形如：
	        1111
			 111
			  11
			   1
	*/

/*
	int n = 0; 
	scanf_s("%d", &n);

	for (int i=0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j >= i)
			{
				printf_s("*");
			}
			if (j < i)
			{
				printf_s(" ");
			}
		}
		printf_s("\n");
	}
*/
//	return 0;
//}
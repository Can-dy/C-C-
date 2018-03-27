//#include<stdio.h>
//int main()
//{
	/*
	int a;
	printf("Please input a number:");
	scanf_s("%d,", &a);
	if (a == 0 || a == 6)   //周末在家
	{
		printf("at home\n");
	}	
	else if (a >= 1 && a <= 5)  //周内在办公室上班
	{
		printf("at office\n");
	}	
	else
	{
		printf("bad input\n");
	}	
	*/


	/*
	int ch = 0;
	switch (ch)                      //ch必须是整数，可以是变量
	{
	case1:                         //case的值必须是常量
		printf("go to office\n");
		break;
	case2:
		printf("stay at home\n");
		break;
	default:                            //default可以放在任意位置，位置自由
		printf("do nothing\n");
		break;
	}
	*/

	/*
	int i; int a[100];
	for (i = 0; i < 100; i++)          //for语句中存在break语句，其作用是跳出循环
	{                                 
		//for语句中存在continue语句，如果在for语句的大括号内，其后面的语句被跳过...直接进入下一轮循环
		a[i] = i + 1;
		printf("a[%d]=%d\n", i,a[i]);
	}	
	*/

	/*
	//遍历数组：将一个数组的元素全部按16进制打印
	unsigned char buf[8] = { 1, 2, 3, 4,5,6,7,8 };
	for (int i = 0; i < 8; i++)
	{
		printf("%02X\t", buf[i]);
		if ((i + 1) % 4 == 0)
		{
			printf("\n");
		}
	}
	*/


	/*
	//从前往后依次替换掉矩阵里的值1,2,3,4,5换成5,4,3,2,1
	int buf[5] = {1,2,3,4,5};
	for (int i=0; i < 5/2; i++)
	{
		int t = buf[i];
		buf[i] = buf[5 - i - 1];
		buf[5 - i - 1] = t;
	}
	*/


	/*
	char buf[100];
	int i = 0;
	while (i < 100)
	{
		buf[i] = i + 1;
		i++;
	}
	*/

	/*
	int cunchu[100];
	int count = 0;
	int s=0;
	while (1)
	{
		int n=0;
		printf("Please input a number:");
		scanf_s("%d", &n);

		if (n <= 0)
			break;

		cunchu[count] = n;
		count += 1;
		s += n;
		printf("number cunchu:%d\n", count);
		printf("s:%d\n", s);

	}
	*/

/*
//判断输入的数有几位,先不加输入，给定值先检验，成功后再加入输入
	int n=3456; 
	printf("Please input a number:");
	scanf_s("%d",&n);

	int count = 0;
	while (n!=0)
	{
		n /= 10;
		count ++;
	}
	printf("这个数有几位:%d\n", count);
	*/


/*
	int n = 0;
	do
	{
		printf("Please input a number: ");
		scanf_s("%d", &n);
	} while (n<0 || n>100);
	printf("resault：%d\n", n*n);
	*/
//	return 0;
//}
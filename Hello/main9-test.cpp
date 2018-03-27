#include<stdio.h>
#include<string.h>
//void  get_max(double a, double  b, double* max)
//{
//	if (a>b)
//	{
//		*max = a;
//	}
//	else
//	{
//		*max = b;
//	}
//}
//
//
//unsigned int hex_char_to_int(char a)
//{
//	for (int i = 0; i < 6; i++)
//	{
//		if (a >= '0'&& a <= '9')
//		{
//			return a - '0';
//		}
//		if (a >= 'a'&& a <= 'z')
//		{
//			return a - 'a' + 10;
//		}
//		if (a >= 'A'&& a <= 'Z')
//		{
//			return a - 'A' + 10;
//		}
//	}
//}
//
//unsigned int hex_value(char* str, int n)
//{
//	int value = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int num = hex_char_to_int(str[i]);
//		value = value * 16 + num;   //每次值*16再加上现有的值；
//	}
//	return value;
//}
//
//unsigned int  bin_to_int(const char* a)
//{
//	int len = strlen(a);             //此时需要添加头文件#include<string.h>
//	unsigned int value = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (a[i] == '1')
//		{
//			unsigned int mask = 1u << (len - 1 - i);  //2的7次方，6次方，，，，0次方
//			value |= mask;
//		}
//	}
//	return value;
//}
//
//int  test(int* arr, int len)
//{
//	int flag = 1;                    //如若不是，则退出
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] != arr[len - i-1])
//		{
//			flag = 0;
//			break;
//		}
//	}
//	return flag;
//}
//
//void to_uppercase(char* str)
//{
//	int len = strlen(str);
//	for (int i = 0; i < len; i++)
//	{
//		if (str[i] >= 'a' && str[i] <= 'z')
//		{
//			str[i] += 'A' - 'a';       //小写变大写，变小了，97-65,。
//		}
//		printf("%c", str[i]);
//	}
//}
//
//int  compare_ingore_case(const char* str1, const char* str2)
//{
//	int flag;
//	int len = strlen(str1);
//	for (int i = 0; i < len; i++)
//	{
//		if (str1[i] == str2[i] || str1[i] == str2[i] + 'a' - 'A' || str1[i] == str2[i] + 'A' - 'a')
//			flag = 1;
//		else
//			flag = 0;
//	}
//	return flag;
//}

void select_rank(int* arr, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int k = i + 1; k < n; k++)
		{
			if (arr[i] < arr[k])
			{
				int temp = arr[i];
				arr[i] = arr[k];
				arr[k] = temp;
			}
			//printf("%d", arr[i]);
		}
	}
}

int main()
{
	//double max;
	//get_max(0.5, 0.1, &max);
	//printf("最大值：%.2f\n", max);


	//例如，有字符串
	//char  buf[] = "12AB3d";
	//写一段代码，将字符串buf转成一个整数。（整数的值是0x12AB3d ，即十进制的1223485）
	//char buf[] = "12AB3d";     //先转成十进制，在进行加权。每次值*16再加上现有的值；
	//unsigned int ret=hex_value(buf,6);
	//printf("%u\n", ret);

	//将二进制文本转成整数。例如，输入"11010011"，返回值为211
	//const char str[] = "11010011";             //用mask的方法
	//unsigned int  r = bin_to_int(str);
	//printf("%d\n", r);

	//写一个函数，判断一个数组是否“回文”。即正着、倒着是一样的。
	//int a[6] = { 1, 2, 3, 3, 2, 1 };
	//int b[5] = { 1, 2, 3, 2, 1 };
	//if (test(b,5))
	//{
	//	printf("是回文\n");
	//}
	//else
	//{
	//	printf("不是回文\n");
	//}

	//函数及指针练习：小写变大写(所有的小写字母变成大写)
	//char buf[] = "It is a good book";
	//to_uppercase(buf);

	//判断两个字符串是否相等。忽略大小写。
	//const char a[] = "hello"; const char b[] = "HELLO";
	//if (compare_ingore_case(a, b))
	//{
	//	printf("1\n");
	//}
	//else
	//{
	//	printf("0\n");
	//}

	//令用户输入5个数，然后对它们从大到小排序后输出。注意：是从大到小排序。
	//例如，
	//	输入 2  8  9  1  4
	//	输出 9  8  4  2  1
	int a[5];
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &a[i]);
	}
	select_rank(a, 5);
	for (int j = 0; j < 5; j++)
	{
		printf("%d ", a[j]);
	}
	printf("\n");
	return 0;
}
//#include<stdio.h>
//void sum(int* a, int* b,int* out)
//{
//	int result = *a + *b;     //读取输入
//	*out = result;            //out保存输出，不使用返回值
//}
//
//void swap(int*a, int*b)
//{
//	int t = *a;
//	*a = *b;
//	*b = t;
//}
//
////int avg(int p[],int lens)  同下
//int avg(int* p, int lens)          //传递数组作为参数：首地址以及长度
//{
//	int sum = 0;
//	for (int i = 0; i < lens; i++)
//	{
//		sum += p[i];
//	}
//	return sum / lens;
//}
//
//void max_min(int* p, int len, int* max, int* min)
//{
//	for (int i = 0; i < len; i++)
//	{
//		if (p[i]>*max)
//			*max = p[i];
//		else
//			*max;
//		if (p[i]<*min)
//			*min = p[i];
//		else
//			*min;
//	}
//}
//int main()
//{
//	//
//	//int a=0x1234566789;
//	//int* pa = &a;
//	//*pa += 2;
//	//printf("size=%d\n", sizeof(a));
//	//printf("%08x\n", &a);            //按16进制打印内存地址
//	//printf("%08x\n", &pa);
//	////打印内存地址
//	//printf("%p\n", &a);
//	//
//
//	//
//	//int arr[4] = { 1, 2, 3, 4 };
//	//int* p = arr;
//	////相当于
//	//int* p = &arr[0];
//	//
//
//	//int a = 10, b = 11;
//	//int out = 0;
//	//sum(&a, &b, &out);
//	//printf("%d + %d = %d\n", a, b, out);
//
//	//int a = 10, b = 11;
//	//swap(&a, &b);
//	//printf("a和b调换之后为：%d和%d\n", a, b);
//
//	//int arr[] = { 1, 2, 3, 4 };   //arr:int*
//	//int ret;
//
//	//计算均值
//	//ret = avg(arr, 4);        //从ar[0]到arr[3]
//	//ret = avg(arr, 3);        //从ar[0]到arr[2]
//	//ret = avg(arr+1, 3);      //从ar[1]到arr[2]
//
//
//	//找出最大，最小值
//	//int a[] = { 1, 5, 89, 1, 23, 56, 12, 2 };
//	//int max = a[0]; int min = a[0];
//	//max_min(a,7,&max,&min);   //传参时，此处a不可写成&a
//	//printf("max:%d\nmin:%d\n", max, min);
//
//
//	return 0;
//}
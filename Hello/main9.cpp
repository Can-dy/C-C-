//#include<stdio.h>
//void sum(int* a, int* b,int* out)
//{
//	int result = *a + *b;     //��ȡ����
//	*out = result;            //out�����������ʹ�÷���ֵ
//}
//
//void swap(int*a, int*b)
//{
//	int t = *a;
//	*a = *b;
//	*b = t;
//}
//
////int avg(int p[],int lens)  ͬ��
//int avg(int* p, int lens)          //����������Ϊ�������׵�ַ�Լ�����
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
//	//printf("%08x\n", &a);            //��16���ƴ�ӡ�ڴ��ַ
//	//printf("%08x\n", &pa);
//	////��ӡ�ڴ��ַ
//	//printf("%p\n", &a);
//	//
//
//	//
//	//int arr[4] = { 1, 2, 3, 4 };
//	//int* p = arr;
//	////�൱��
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
//	//printf("a��b����֮��Ϊ��%d��%d\n", a, b);
//
//	//int arr[] = { 1, 2, 3, 4 };   //arr:int*
//	//int ret;
//
//	//�����ֵ
//	//ret = avg(arr, 4);        //��ar[0]��arr[3]
//	//ret = avg(arr, 3);        //��ar[0]��arr[2]
//	//ret = avg(arr+1, 3);      //��ar[1]��arr[2]
//
//
//	//�ҳ������Сֵ
//	//int a[] = { 1, 5, 89, 1, 23, 56, 12, 2 };
//	//int max = a[0]; int min = a[0];
//	//max_min(a,7,&max,&min);   //����ʱ���˴�a����д��&a
//	//printf("max:%d\nmin:%d\n", max, min);
//
//
//	return 0;
//}
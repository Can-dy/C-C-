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
//		value = value * 16 + num;   //ÿ��ֵ*16�ټ������е�ֵ��
//	}
//	return value;
//}
//
//unsigned int  bin_to_int(const char* a)
//{
//	int len = strlen(a);             //��ʱ��Ҫ���ͷ�ļ�#include<string.h>
//	unsigned int value = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (a[i] == '1')
//		{
//			unsigned int mask = 1u << (len - 1 - i);  //2��7�η���6�η���������0�η�
//			value |= mask;
//		}
//	}
//	return value;
//}
//
//int  test(int* arr, int len)
//{
//	int flag = 1;                    //�������ǣ����˳�
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
//			str[i] += 'A' - 'a';       //Сд���д����С�ˣ�97-65,��
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
	//printf("���ֵ��%.2f\n", max);


	//���磬���ַ���
	//char  buf[] = "12AB3d";
	//дһ�δ��룬���ַ���bufת��һ����������������ֵ��0x12AB3d ����ʮ���Ƶ�1223485��
	//char buf[] = "12AB3d";     //��ת��ʮ���ƣ��ڽ��м�Ȩ��ÿ��ֵ*16�ټ������е�ֵ��
	//unsigned int ret=hex_value(buf,6);
	//printf("%u\n", ret);

	//���������ı�ת�����������磬����"11010011"������ֵΪ211
	//const char str[] = "11010011";             //��mask�ķ���
	//unsigned int  r = bin_to_int(str);
	//printf("%d\n", r);

	//дһ���������ж�һ�������Ƿ񡰻��ġ��������š�������һ���ġ�
	//int a[6] = { 1, 2, 3, 3, 2, 1 };
	//int b[5] = { 1, 2, 3, 2, 1 };
	//if (test(b,5))
	//{
	//	printf("�ǻ���\n");
	//}
	//else
	//{
	//	printf("���ǻ���\n");
	//}

	//������ָ����ϰ��Сд���д(���е�Сд��ĸ��ɴ�д)
	//char buf[] = "It is a good book";
	//to_uppercase(buf);

	//�ж������ַ����Ƿ���ȡ����Դ�Сд��
	//const char a[] = "hello"; const char b[] = "HELLO";
	//if (compare_ingore_case(a, b))
	//{
	//	printf("1\n");
	//}
	//else
	//{
	//	printf("0\n");
	//}

	//���û�����5������Ȼ������ǴӴ�С����������ע�⣺�ǴӴ�С����
	//���磬
	//	���� 2  8  9  1  4
	//	��� 9  8  4  2  1
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
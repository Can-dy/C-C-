//#include<stdio.h>
//int main()
//{
	/*
	int a;
	printf("Please input a number:");
	scanf_s("%d,", &a);
	if (a == 0 || a == 6)   //��ĩ�ڼ�
	{
		printf("at home\n");
	}	
	else if (a >= 1 && a <= 5)  //�����ڰ칫���ϰ�
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
	switch (ch)                      //ch�����������������Ǳ���
	{
	case1:                         //case��ֵ�����ǳ���
		printf("go to office\n");
		break;
	case2:
		printf("stay at home\n");
		break;
	default:                            //default���Է�������λ�ã�λ������
		printf("do nothing\n");
		break;
	}
	*/

	/*
	int i; int a[100];
	for (i = 0; i < 100; i++)          //for����д���break��䣬������������ѭ��
	{                                 
		//for����д���continue��䣬�����for���Ĵ������ڣ���������䱻����...ֱ�ӽ�����һ��ѭ��
		a[i] = i + 1;
		printf("a[%d]=%d\n", i,a[i]);
	}	
	*/

	/*
	//�������飺��һ�������Ԫ��ȫ����16���ƴ�ӡ
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
	//��ǰ���������滻���������ֵ1,2,3,4,5����5,4,3,2,1
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
//�ж���������м�λ,�Ȳ������룬����ֵ�ȼ��飬�ɹ����ټ�������
	int n=3456; 
	printf("Please input a number:");
	scanf_s("%d",&n);

	int count = 0;
	while (n!=0)
	{
		n /= 10;
		count ++;
	}
	printf("������м�λ:%d\n", count);
	*/


/*
	int n = 0;
	do
	{
		printf("Please input a number: ");
		scanf_s("%d", &n);
	} while (n<0 || n>100);
	printf("resault��%d\n", n*n);
	*/
//	return 0;
//}
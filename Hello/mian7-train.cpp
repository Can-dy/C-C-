//#include<stdio.h>
//int main()
//{
/*
	//(1)�û�����һ������a�����a>100,��ʾ��Too large�������<+0,��ʾ��Too small�������������ʾ��OK����
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
	//(2)�û�������������a��b����a��b��λ��[0,100]֮��ʱ����ʾ��OK����������ʾ��Bad Input����
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
	//��3��ĳ�����Ƿֶκ�������x<0ʱ��y=x+1����x>=0ʱ��y=4x����������c++������ɣ����û�����һ��С��x��������ʽ�������Ӧ��yֵ��
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
	//��4�����û�����1~3֮�������a��������1ʱ����ӡ�����Very Good�������û�����2ʱ����ӡ�����Good����������3ʱ����ӡ�����Not Bad������������ǣ������"Bad Input"Ȼ���˳�����
	int a = 0;
	printf("Please input a number:");
	scanf_s("%d", &a);
	switch (a)
	{
	case 1:                                 //case֮���ѡ��ʱҪ�пո�
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
	//��5����һ����������int a[128],����for���ÿһ��Ԫ�ص�ֵΪa[0]=127,a[1]=126,a[2]=125,...,a[127]=0.
	int a[128];
	for (int i = 0; i <= 127; i++)
	{
		a[i] = 127 - i;
		printf("a[%d]=%d\n", i,a[i]);
	}
*/


/*
	//(6)��while���ʵ����������
	int a[128]; int i = 0;
	while (i <= 127)
	{
		a[i] = 127 - i;
		printf("a[%d]=%d\n", i, a[i]);
		i++;
	}
*/



/*
	//��7�����û��ӿ���̨����10��������ͳ�������ܱ�3���������ĸ�����
	int a[10]; int n = 0; int c = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &n);
		a[i] = n;
		printf("a[%d]=%d\n", i, a[i]);
		if ((a[i] % 3) == 0)                                 //�˴���%������/
		{
			c++;
		}
	}
	printf("������%d\n", c);
*/

	
/*
	//��8����������10���������ֵ����Сֵ��ƽ��ֵ��
	int a[10]; int n = 0;  int max; int min; int sum=0; double mean;
	scanf_s("%d", &n);
	a[0] = n; max = a[0]; min = a[0];            //max��min��ʼ����ʱ����������棬Ȼ����ÿ��������������Ƚ�
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
	//sum = (double)sum;                 //��ת����Ҳ�ɲ�ת
	mean = sum / 10.0;                   //10����д��10.0���ܱ�֤��������������С��λ
	
	printf("max��%d\n", max);
	printf("min��%d\n", min);
	printf("sum��%d\n", sum);
	printf("mean��%lf\n", mean);         //�мǣ���Ϊdouble����ʱ�򣬱���%lf
*/


/*
	//��9��������ָ����1��������֮�⣬���ܱ��κ���������������Ȼ������ѧ��Ӳ�Թ涨1,2�������������磺3,5,7,11,13,...���������С��100������������ӡ������

	for (int n = 1; n < 100; n++)           //n��1ȡ��100
	{
		if(n==1||n==2) continue;
		int is_prime = 1;                   //����������Ϊ1
		for (int i = 2; i < n; i++)            
		{
			if (n % i == 0)
			{                             //�������Ͳ�������,��ÿһ�������г���2��������
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
	//��10����һ�����֣���China is a great country with an history��,��ͳ�Ƴ���Ԫ����ĸ�ĸ����ͷ�Ԫ����ĸ�ĸ�������ʾ��Ԫ����ĸָa e i o u���ߴ�д��A E I O U��
	char str[] = "China is a great country with an history";
	int m; m = sizeof(str); char b; int c = 0;
	for (int i = 0; i < m; i++)
	{
		if(str[i]==0)                              //���Ƚ��ո񴦹��˵�
		{
			break;
		}
		if (str[i] >= 'a' && (str[i] <= 'z'||str[i] >= 'A' && (str[i] <= 'Z')     //�ж����������еĴ�Сд��ĸ
		{
			b = str[i];
			if (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u' || b == 'A' || b == 'E' || b == 'I' || b == 'O' || b == 'U')
				c++;
		}
	}
	printf("%d\n", c);
*/



	//��ӡn*n�����������С�     //�۲쵱j<iʱ����ӡ�ո񣬵�i>=jʱ����ӡ���š������о��󣡣���
	/*���磺
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
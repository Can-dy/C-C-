
/*
#include<stdio.h>
int data[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
int buf[100];
int sq(int a)
{
	return a*a*a;
}
double ep(double a, double b)
{
	return (a + b) / 2;
}
void test()
{
	printf("hahahaha\n");
	//return;                  //���п�ʡ��
}
int t(char a)
{
	int ret = 0;
	if (a == ' '||a=='\t')
	{
		ret = 1;
	}
	return ret;
}
double average()
{
	int sum = 0;
	for (int i = 0; i < 8; i++)
	{
		sum += data[i];
	}
	return sum / 8.0;
}

int max()
{
	int m = data[0];
	for (int i = 1; i < 8; i++)
	{
		if (m>data[i])
		{
			m;
		}
		else
		{
			m = data[i];
		}
	}
	return m;
}
int min()
{
	int m = data[0];
	for (int i = 1; i < 8; i++)
	{
		if (m<data[i])
		{
			m;
		}
		else
		{
			m = data[i];
		}
	}
	return m;
}

int main()                //mainҪд��ȷ
{
	int r = sq(5);
	printf("r:%d\n", r);

	double r1 = ep(0.2, 0.2);
	printf("r1:%.3lf\n", r1);

	int r2 = t('\t');
	printf("r2:%d\n", r2);

	double ret = average();
	printf("%.2lf\n", ret);

	test();

	int ma = max();
	printf("%d\n", ma);

	int mi = min();
	printf("%d\n", mi);


	//����һ��ȫ�����飬��main������ȡ�û����룬���뵽�������С���������С����ע�⣺Ҫ��¼�û������˶��ٸ�����

	return 0;
}
*/

/*
#include<stdio.h>
//�ж�һ����ĸ������Ǵ�д�򷵻�1��Сд�򷵻�-1�����������ĸ������0.
int check(char ch)
{
	if (ch >= 'a'&& ch <= 'z')
	{
		return 1;
	}
	if (ch >= 'A'&& ch <= 'Z')
	{
		return -1;
	}
	return 0;
}

int prime(int n)
{
	if (n <= 2) return 0;
	int flag = 1;
	for (int i = 2; i < n; i++)   //�˴�û�еȺţ�����Ϊ��1��������
	{
		if (n%i == 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
void print_prime(int a, int b)
{
	for (int i = a; i <= b; i++)
	{
		if (prime(i))
		{
			printf("%d is prime!\n",i);
		}
	}
}
int main()
{
	//int res = check('A');
	//printf("%d", res);

	print_prime(1,100);
	return 0;
}
*/


/*
#include<stdio.h>

//n�Ľ׳�
int compute(int n)
{
	int s = 1;
	for (int i = 1; i <= n; i++)
	{
		s *= i;
	}
	return s;
}
//n�Ľ׳�
int fx(int n)
{
	if (n == 1)
		return 1;                //��ֹ����
	
	return n * fx(n - 1);
}
int fb(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	
	return fb(n - 1) + fb(n - 2);

}

int main()
{
	int ret = compute(3);
	printf("%d\n", ret);
	int res = fx(3);
	printf("%d\n", res);

	printf("%d\n", fb(5));

	return 0;
}
*/
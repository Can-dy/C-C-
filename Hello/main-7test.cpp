//#include<stdio.h>
//#include<math.h>
//int main()
//{

/*//��100���ڵ�������ƽ���� 
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

/*//�Ѿ���Դ�ַ���src��������һ���ַ���Ҫ���ȡʣ�µ��ַ������磬src: "testroad"������'r'����ʣ��"test" 
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


/*//��һ�����飬����Ϊ10��
//int arr[10] = { 128, 98, 78, 9, 87, 78, 90, 89, 72, 65 };
//int dst[10];
//int count = 0;
//��forѭ��������������飬�Ѹ�λ��8�����ִ浽dst�����У�����¼����������Ԫ�صĸ����� 
	int arr[10] = { 128, 98, 78, 9, 87, 78, 90, 89, 72, 65 };
	int dest[10];
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 10 == 8)                 //��λ��������8����ȡ��8����
		{
			dest[i] = arr[i];
			count++;
		}
	}
	printf("%d\n", count);
	*/

/*
//����һ���ַ�����char str[] = "http://pan.baidu.com/s/1qWDQ04O";
//�Խ����������Сд��ĸ�ĳɴ�д����д��ĸ�ĳ�Сд��
//
//��forѭ��ʵ�֡�
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
//�ַ�����Сдת����
	char str[] = "http://pan.baidu.com/s/1dD4cjeD";
	int n = sizeof(str); char res[200]; int i=0;
	while (1)                                                  //while��䣬������Ϊ1��ִ�У��׾�����ж�����������ĩ����i++
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
	����ϲ�������
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
//������ƶ��뿽������һ�������ǰ�벿�ֺͺ�벿�ֽ���λ�á�
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
//if�����ϰ
int a;
scanf_s("%d", &a);         //�м�ô�е��ں�
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
//����һ��int�͵������ж����Ƿ�Ϊ������
int a;
scanf_s("%d", &a);         //�м�ô�е��ں�
if (a%2==0)
{
	printf("��������\n"); 
}
else
{
	printf("������\n");
}
*/

/*
//����һ��int�͵������ж����Ƿ�Ϊ������
int a[16] = { 1, 3, 5, 7, 9 };
int count = 5;  // �ִ���5����
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
//�����ʽ֮�ͣ� fx (n) = 1 - 1/3 + 1/5 - 1/7 + ... + (-1)^(n/2) * 1/n �� 
int n;
scanf_s("%d", &n); double s = 0; double y; double k=-1.0;
for (int i = 1; i < n; i++)
{
	k = -k;
	y = 1.0 / (2*i-1);                      //�˴���1����Ϊ1.0����ʽ
	s += k*y;
}
printf("%.3lf\n", s);
*/

/*
//���磬����"Hello,World"�������ӡ��ʾ ��Hll,Wrld"
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
//���磬�û�����Ϊ "hello" ���������ӡ "olleh"
char buf[] = "hello"; char a[20];
//�����ַ�������
int n = sizeof(buf);                   //��ʱ��n�����ַ���ĩβ���Ǹ���β���ַ�
for (int i = 0; i < n; i++)
{
	a[i] = buf[n - i - 1];
	printf("%c", a[i]);
}
*/


/*
//�Ѿ�����int���飬�����ǵĽ���������ͬ��Ԫ�ء�
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
//����һ�����飬�����е�Ԫ����һ�����ӡ�������м��Զ��ŷֿ���ע�⣬ĩβ��Ҫ�Ӷ��š�
int  buf[5] = { 1, 2, 3, 4, 5 };
for (int i = 0; i < 4; i++)
{
	printf("%d,", buf[i]);
}
printf("%d", buf[4]);
*/

/*
��Ʊ���㷨�� ��5����ͶƱ������3�������ϵ���ͬ��ʱ��ͶƱͨ����
int n=0; int s=0; 
char a;
printf("A:");
scanf_s("%c",&a);
printf("\n");
fflush(stdin);                              //scanf_sһ����д���ʱ����в��࣬�����һ��д��ǰӦ������fflush(stdin)���;
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
	printf("ͬ��");
}
else
{
	printf("��ͬ��");
}
*/

/*
//һ����������N������Ҫ��ȥ�������ظ������֣��ظ�������ֻ����һ������Ȼ��������Ľ����
int  a[6] = { 1, 3, 4, 1, 8, 4 };
//int n = sizeof(a);            //�˴�������sizeof��һ��intռ4Ϊ��6��sizeof����24��charռ1����shortռ2����floatռ4����doubleռ8��
printf("%d,", a[0]);
for (int i = 1; i < 6; i++)
{
	int exist = 0;      //���������
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
		//�ظ�
	}
	else
	{
		printf("%d,", a[i]);
	}
}
*/


/*
//��֪����Ϊ"1a2b3c"
//Ҫ���û��������룺
//������ƥ��ʱ����ӡ��ʾ"OK"��
//���������ʱ����ӡ��ʾ��Error������������"��
char str[] = "1a2b3c";
int n = sizeof(str); char buf[10];
int equal = 1;
for (int j = 0; j < n - 1; j++)
{
	printf("���������룺");
	fflush(stdin);
	scanf_s("%c", &buf[j]);
	printf("%c\n", buf[j]);
}

for (int i = 0; i < n - 1; i++)
{
	if (str[i] != buf[i])
	{
		equal = 0;
		printf("�����������������룡");
		break;
	}
}
if (equal)
{
	printf("������ȷ\n");
}
else
{
	printf("�������\n");
}
*/

/*
//�ַ�����ɾ��: ɾ���ַ���ͷ���Ŀհ��ַ���
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
//���ӡ��ʾ
//11 22 33 44
//55 66 77 88
//AA BB
char buf[10] = { 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0xAA, 0xBB };
for (int i = 0; i < 10; i++)
{
	printf("%02X ",(unsigned char)buf[i]);             //0xAA���ΪFFFFFFAA,ͨ��ǿ��ת����unsigned char ʹ�����ΪAA

	if ((i+1) % 4 == 0 || i==9)
	{
		printf("\n");
	}
}
*/
/*
//N (N=20)����Χ��һȦ����Ϸ���������£�
      ��ĳһ���˿�ʼ���������α�1��2��3������3���˳��֡�
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
//����srcΪ"hello,world!"��filterΪ"do"�����ӡ���Ϊ"hell,wrl!" 
char src[] = "hello,world!";
char dst[] = "do";
int m = sizeof(src); int n = sizeof(dst);
for (int i = 0; i < m-1; i++)
{
	int exist = 0;    //û����ͬ��
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
//ctrl + k + c��ctrl + k + u��
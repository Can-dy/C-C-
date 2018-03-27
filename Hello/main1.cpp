//F7生成项目（编译）；
/*1.运行程序ctrl+F5；
  2.在命令行中运行cd /d 文件（文件名字中不能有特殊符号）位置  C:\Users\qiu>cd /d E:\C++学习\C语言C++学习指南（零基础入门）邵发\Hello\Debug  输入Hello.exe
  3.双击运行
*/
//代码main.cpp； 程序文件Hello.exe
//int整型，double小数.
//#include<stdio.h>
//int main()
//{
	/*1
	//让用户输入一个整数或小数scanf_s("%d",&a); 注意：不要加空格，不要加\n，变量前加&
	int a;
	printf("Please input: ");
	scanf_s("%d",&a);
	//scanf("%d",&a);           //vs2012之前版本适用，整形输入时候只能是int类型，char和short都不可以
	printf("result: %d\n", a);

	double b;
	printf("Please input: ");
	scanf_s("%lf",&b);         //long-float
	printf("result: %lf\n", b);

	int c; int d; int s;
	printf("Please input b and d: ");
	scanf_s("%d", &c); scanf_s("%d", &d);
	s = c * d;
	printf("result: %d\n",s);
	*/




	/*让用户输入多个数
	int a; int b; double c;
	scanf_s("%d,%d,%lf", &a,&b,&c);
	printf("a: %d, b: %d, c: %lf\n", a,b,c);
	*/


	/*将2018/3/5写成2018-3-5的形式
	int a; int b; int c;
	printf("Please input a data: ");
	scanf_s("%d/%d/%d",&a,&b,&c);    //严格按照格式敲2018-3-5
	printf("result data: %d-%d-%d\n",a,b,c);
	*/


	
	//printf("Hello,World!\n");
	//printf("a: %d, b: %d\n",33,32);    //d代表十进制数
	//printf("number: %03d OK\n", 3);
	//printf("number: %3d OK\n", 3);          //3d代表位数为三位显示,控制宽度
	//printf("number: %3d OK\n", 33);
	//printf("number: %3d OK\n", 333);
	//printf("x = aaaa%fbbbb \n",12.56);
	//printf("x = aaaa%.2fbbbb \n", 12.567890);   //%.2f控制小数点后的位数
	//



//	getchar();  //防止双击直接闪退，看不到结果
//	return 0;
//}

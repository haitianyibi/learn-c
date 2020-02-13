/*
time:2020/2/13 PM
author:haitianyibi
version:1.0
function:探究标准输入和输出 
*/
#include<stdio.h>
int main(){
	int a=0;
//	scanf("%d",&a);
	printf("%d\n",a);//%d标准输出有符号十进制整数， 
	//输入：数字+回车，将输出：数字， 	
	//输入：数字+字母（非数字）+回车，将输出：数字 
	//输入：数字1+字母+数字2+回车，将输出：数字1，数字1表示一连串的数字（123），并非单个数字（0-9）
	//输入：字母+数字+回车，将输出 0 ，整型的默认值0。 


	float float1=20.3f;
//	printf("%a\t%A\n",float1,float1); //输出十六进制浮点数，p计数法，2为底 %a x p ;%A X P 
	
	char char1='a';
	printf("%c\t%d\n",char1,char1);//输出单个字符  a

	printf("%e\t%E\n",float1,float1); //输出浮点数，e计数法，10为底，%e e； %E E

	printf("%f\n",float1); //浮点数，十进制计数法，没有 %F 

	printf("%g\t%G\n",float1,float1);//根据大小自动选择 %f / %e  或自动选择 %f / %E		

	int int1=10;
	printf("%i\n",int1);//有符号十进制整数 10

	int OCT=010;
	printf("%o\t%d\n",OCT,OCT);//无符号八进制整数  10 8

	int *p;
	p=&a;
	printf("%p\n",p);//输出指针 
	
	printf("%s\n","hello world!"); //输出字符串
	
	unsigned int uint=50; 
	printf("%u\n",uint);//输出无符号十进制整数 
	
	unsigned int uintHEX=0x1221; 
	printf("%x\t%X\n",uintHEX,uintHEX);//输出无符号十六进制整数 
	
	
	printf("%%");//输出百分号 %
	
	 
	return 0;
} 

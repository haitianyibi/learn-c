/*
time:2020/2/13 PM
author:haitianyibi
version:1.0
function:c语言的基本的数据类型 
*/ 
#include<stdio.h>
int main(){
	
	//char字符，存储一个字节大小，8位2进制 
	printf("char is %d Byte in this system\n",sizeof(char));
	char chara='a';//97
	char charz='z';//122
	char charA='A';//65
	char charZ='Z';//90
	char num0='\0';//数字0,0 
	char char0='0';//字符0，48
	char char9='9';//字符9，57
	char blank=' ';//空格  32
	char charDEC=97;//十进制 97 
	char charOCT='\017';//八进制 单引号必须 配合转义字符\使用来转换八进制和十六进制，8+7=15
	char charOCT1='\17';//八进制,省略前缀0 ,此时不能省略单引号，8+1=15
	char charOCT2=0101;//八进制，省略单引号，此时不能省略前缀0 64+1=65
	char charHEX='\x1a';//十六进制 16+10=26
	char charHEX1='\xf';//十六进制，小写x,不能大写X，不能使用0x 15
	char charHEX2=0xf;//十六进制 15
	char charHEX3=0xF;//十六进制 15 
	char charHEX4=0x11;//十六进制  16+1=17 
	char charHEX5=0Xf; //十六进制，可以使用大写 X ,不能省略前缀0 15
	char charHEX6=0x00f;//十六进制，x后面可以存在多个0 15 

	// int整型 
	printf("int is %d Byte in this system\n",sizeof(int));
	int int1=-128;//声明并直接赋值 -128，字面值 
	int inttoint=int1;//变量赋值 128
	int ctoint=chara;//类型转换，97
	int chartoint='a'; //类型转换，97
	int intOCT=010; //八进制 8 
	int intHEX=0xa0; //十六进制 a*16=160 
	int a,b,c;//声明变量（定义）,开辟相应大小空间但未初始化，其值可能是任一数值。 
	extern int d;//声明变量，但未开辟空间，表示该变量在其它文件中已定义，已有空间。 
	//二进制截断,小空间存储大空间内容
	char inttochar=int1;//char范围-128-127，补码存储，int 128（设为两个字节）的二进制为0000 0000 1000 0000 char -128的二进制为 1000 0000 高位为符号位 
	unsigned char uc;//范围0-256
	unsigned int ui;
	unsigned u=60U;//相当于unsigned int 
	unsigned uDEC=65u;//十进制 65
	unsigned uDEC1=65;//十进制 65
	unsigned u2=0101u;//八进制65  可以省略后缀 u / U
	unsigned u3=0xa;//十六进制  10 可以省略后缀 u / U
	
	
	//short短整型
	printf("short is %d Byte in this system\n",sizeof(short));
	short short1=-20;//相当于short int 
	short int shrot2=25;
	unsigned short2=20;//相当于unsigned int 
	unsigned short int int7;
	
	
	//long长整型
	printf("long is %d Byte in this system\n",sizeof(long));
	long long1=65536L; //后缀使用 L 或 l，若不使用编译器可能会开辟不对应的空间大小。 
	long int long2=6508l;
	

	printf("long long is %d Byte in this system\n",sizeof(long long));
	long long long3;
	unsigned long long long4;
	
	  
	//float单精度浮点类型
	printf("float is %d Byte in this system\n",sizeof(float));
	float float1=3.2; 
	float float2=1.2f;
	float float3=.2;
	float float4=1.;
	float float5=2.3e3;
	float float6=2.3e+3;
	float float7=2.3e-3;
	float float8=.3E3;
	//p计数法 
	float float9=0xafp10;
	
	
	//double双精度浮点类型
	printf("double is %d Byte in this system\n",sizeof(double));
	double double1=2.3f;
	double double2=5.6;
	printf("long double is %d Byte in this system\n",sizeof(long double));

	
	//void 空类型 
	

	//枚举类型 


	//数组类型 
	int arr[]={1,2};
	char name[40];
	
	
	//指针类型 
	int *p;
	
	
	//复数和虚数类型-C99
	
	 
	//布尔类型
	
	 
	return 0;
} 

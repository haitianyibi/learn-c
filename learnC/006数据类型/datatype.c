/*
time:2020/2/13 PM
author:haitianyibi
version:1.0
function:c���ԵĻ������������� 
*/ 
#include<stdio.h>
int main(){
	
	//char�ַ����洢һ���ֽڴ�С��8λ2���� 
	printf("char is %d Byte in this system\n",sizeof(char));
	char chara='a';//97
	char charz='z';//122
	char charA='A';//65
	char charZ='Z';//90
	char num0='\0';//����0,0 
	char char0='0';//�ַ�0��48
	char char9='9';//�ַ�9��57
	char blank=' ';//�ո�  32
	char charDEC=97;//ʮ���� 97 
	char charOCT='\017';//�˽��� �����ű��� ���ת���ַ�\ʹ����ת���˽��ƺ�ʮ�����ƣ�8+7=15
	char charOCT1='\17';//�˽���,ʡ��ǰ׺0 ,��ʱ����ʡ�Ե����ţ�8+1=15
	char charOCT2=0101;//�˽��ƣ�ʡ�Ե����ţ���ʱ����ʡ��ǰ׺0 64+1=65
	char charHEX='\x1a';//ʮ������ 16+10=26
	char charHEX1='\xf';//ʮ�����ƣ�Сдx,���ܴ�дX������ʹ��0x 15
	char charHEX2=0xf;//ʮ������ 15
	char charHEX3=0xF;//ʮ������ 15 
	char charHEX4=0x11;//ʮ������  16+1=17 
	char charHEX5=0Xf; //ʮ�����ƣ�����ʹ�ô�д X ,����ʡ��ǰ׺0 15
	char charHEX6=0x00f;//ʮ�����ƣ�x������Դ��ڶ��0 15 

	// int���� 
	printf("int is %d Byte in this system\n",sizeof(int));
	int int1=-128;//������ֱ�Ӹ�ֵ -128������ֵ 
	int inttoint=int1;//������ֵ 128
	int ctoint=chara;//����ת����97
	int chartoint='a'; //����ת����97
	int intOCT=010; //�˽��� 8 
	int intHEX=0xa0; //ʮ������ a*16=160 
	int a,b,c;//�������������壩,������Ӧ��С�ռ䵫δ��ʼ������ֵ��������һ��ֵ�� 
	extern int d;//������������δ���ٿռ䣬��ʾ�ñ����������ļ����Ѷ��壬���пռ䡣 
	//�����ƽض�,С�ռ�洢��ռ�����
	char inttochar=int1;//char��Χ-128-127������洢��int 128����Ϊ�����ֽڣ��Ķ�����Ϊ0000 0000 1000 0000 char -128�Ķ�����Ϊ 1000 0000 ��λΪ����λ 
	unsigned char uc;//��Χ0-256
	unsigned int ui;
	unsigned u=60U;//�൱��unsigned int 
	unsigned uDEC=65u;//ʮ���� 65
	unsigned uDEC1=65;//ʮ���� 65
	unsigned u2=0101u;//�˽���65  ����ʡ�Ժ�׺ u / U
	unsigned u3=0xa;//ʮ������  10 ����ʡ�Ժ�׺ u / U
	
	
	//short������
	printf("short is %d Byte in this system\n",sizeof(short));
	short short1=-20;//�൱��short int 
	short int shrot2=25;
	unsigned short2=20;//�൱��unsigned int 
	unsigned short int int7;
	
	
	//long������
	printf("long is %d Byte in this system\n",sizeof(long));
	long long1=65536L; //��׺ʹ�� L �� l������ʹ�ñ��������ܻῪ�ٲ���Ӧ�Ŀռ��С�� 
	long int long2=6508l;
	

	printf("long long is %d Byte in this system\n",sizeof(long long));
	long long long3;
	unsigned long long long4;
	
	  
	//float�����ȸ�������
	printf("float is %d Byte in this system\n",sizeof(float));
	float float1=3.2; 
	float float2=1.2f;
	float float3=.2;
	float float4=1.;
	float float5=2.3e3;
	float float6=2.3e+3;
	float float7=2.3e-3;
	float float8=.3E3;
	//p������ 
	float float9=0xafp10;
	
	
	//double˫���ȸ�������
	printf("double is %d Byte in this system\n",sizeof(double));
	double double1=2.3f;
	double double2=5.6;
	printf("long double is %d Byte in this system\n",sizeof(long double));

	
	//void ������ 
	

	//ö������ 


	//�������� 
	int arr[]={1,2};
	char name[40];
	
	
	//ָ������ 
	int *p;
	
	
	//��������������-C99
	
	 
	//��������
	
	 
	return 0;
} 

/*
time:2020/2/13 PM
author:haitianyibi
version:1.0
function:̽����׼�������� 
*/
#include<stdio.h>
int main(){
	int a=0;
//	scanf("%d",&a);
	printf("%d\n",a);//%d��׼����з���ʮ���������� 
	//���룺����+�س�������������֣� 	
	//���룺����+��ĸ�������֣�+�س�������������� 
	//���룺����1+��ĸ+����2+�س��������������1������1��ʾһ���������֣�123�������ǵ������֣�0-9��
	//���룺��ĸ+����+�س�������� 0 �����͵�Ĭ��ֵ0�� 


	float float1=20.3f;
//	printf("%a\t%A\n",float1,float1); //���ʮ�����Ƹ�������p��������2Ϊ�� %a x p ;%A X P 
	
	char char1='a';
	printf("%c\t%d\n",char1,char1);//��������ַ�  a

	printf("%e\t%E\n",float1,float1); //�����������e��������10Ϊ�ף�%e e�� %E E

	printf("%f\n",float1); //��������ʮ���Ƽ�������û�� %F 

	printf("%g\t%G\n",float1,float1);//���ݴ�С�Զ�ѡ�� %f / %e  ���Զ�ѡ�� %f / %E		

	int int1=10;
	printf("%i\n",int1);//�з���ʮ�������� 10

	int OCT=010;
	printf("%o\t%d\n",OCT,OCT);//�޷��Ű˽�������  10 8

	int *p;
	p=&a;
	printf("%p\n",p);//���ָ�� 
	
	printf("%s\n","hello world!"); //����ַ���
	
	unsigned int uint=50; 
	printf("%u\n",uint);//����޷���ʮ�������� 
	
	unsigned int uintHEX=0x1221; 
	printf("%x\t%X\n",uintHEX,uintHEX);//����޷���ʮ���������� 
	
	
	printf("%%");//����ٷֺ� %
	
	 
	return 0;
} 

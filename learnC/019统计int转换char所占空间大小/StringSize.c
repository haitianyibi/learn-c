/*
time:2020/2/24 AM
author:haitianyibi
version:1.0 
function:��javaԴ���п�����Integer���е�stringSize���� 
*/ 
#include<stdio.h>
int main(){
	int i=0;
	printf("input a (int)number\n");
	scanf("%d",&i);
	printf("%d",stringsize(i));
	
	return 0;
} 
int stringsize(int x){//�����������ݴ������ֵ���ڲ��洢�п���Ϊ���� �������������� 1-11���κ�ֵ 
    int d = 1;//����λռһλ 
    if (x >= 0) {//������Ǹ��� 
        d = 0;//��ͳ�Ʒ���λ 
        x = -x;//��xת��Ϊ���� 
    }
    int p = -10;
    for (int i = 1; i < 10; i++) {//ѭ��ʮ�� ,int��ռ4���ֽڣ���32λ ��Լ20�ڣ������ʮ��λ�� 
        if (x > p)//���x>p��x��λ��С��p,��һ��ִ��ʱ������p�� x�ľ���ֵ��һλ���� 
            return i + d;//���� λ��+����λ�� 
        p = 10 * p;//��p��λ������һλ����λ����λ��ǧλ
    }
    return 10 + d;//����򷵻�ʮλ �� ����λ 
}


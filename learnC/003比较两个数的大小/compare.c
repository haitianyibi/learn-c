/*
time:2020/2/13	PM
author:haitianyibi
version:1.0
function:�Ƚ��������Ĵ�С 
*/ 
#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b){
		printf("%d>%d",a,b);
	}else if(a==b){
		printf("%d=%d",a,b);
	}else{
		printf("%d<%d",a,b);
	}
	return 0;
} 

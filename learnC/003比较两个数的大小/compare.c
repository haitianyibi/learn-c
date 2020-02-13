/*
time:2020/2/13	PM
author:haitianyibi
version:1.0
function:比较两个数的大小 
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

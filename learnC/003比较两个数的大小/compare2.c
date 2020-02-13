/*
time:2020/2/13 PM
author:haitianyibi
version:1.0
function:比较两个数的大小 
*/
#include<stdio.h>
int main(){
	int a,b,max;
	scanf("%d%d",&a,&b);
	max=a>b?a:b;
	printf("the max number between %d and %d is %d",a,b,max);
	return 0;
} 

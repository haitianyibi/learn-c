/*
time:2020/2/24 PM
author:haitianyibi
version:1.0
function:返回二进制形式最低位1的位置 
*/ 
#include<stdio.h>
int main(){
	int a=0b01001010000; 
	printf("%x",a&-a);
	return 0;
}    

/*
time:2020/2/13 PM
author:haitianyibi
version:1.0
function:����˷��� 
*/
#include<stdio.h>
int main(){
	for(int i=0;i<=9;i++){
		for(int j=0;j<=9;j++){
			printf("%d*%d=%d\t",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
} 

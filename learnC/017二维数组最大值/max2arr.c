/*
time:2020/2/18 PM
author:haitianyibi
version:1.0
function:二维数组最大值 
*/ 
#include<stdio.h>
int main(){
	int a[4][3]={{167,12,23},{32,45,92},{28,48,58},{178,43,84}};
	int max=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			if(max<a[i][j]){
				max=a[i][j];
			}	
		}
	}
	printf("max value is %d",max);
	
	return 0;
}

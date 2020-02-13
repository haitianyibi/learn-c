/*
time:2020/2/13 PM
author:haitianyibi
version:1.0
function:Êä³öASCII¿É´òÓ¡×Ö·û 
*/
#include<stdio.h>
int main(){
	int k=0,i;
	for(i=32;i<=128;i++){
			if(k==10){
				printf("\n");
				k=0;
			}
			printf("%d:%c\t",i,i);
			k++;
	}
	return 0;
} 

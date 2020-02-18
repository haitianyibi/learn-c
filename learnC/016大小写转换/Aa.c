/*
time:2020/2/18 PM
author:haitianyibi
version:1.0
function:´óÐ¡Ð´×ª»» 
*/ 
#include<stdio.h>
int main(){
	char a[]="hello"; 
	char A[]="HELLO";
	for(int i=0;a[i]!=0;i++){
		a[i]=a[i]-32;
	}
	printf("%s\n",a);
	for(int i=0;A[i]!=0;i++){
		A[i]=A[i]+32;
	}
	printf("%s",A);
	return 0;
}



/*
time:2020/2/18 PM
author:haityianyibi
version:1.0
function:ÕÒ×î´óÖµ 
*/
#include<stdio.h>
int main(){
	int a[]={1,2,5,67,24,76,98,34,6,23,7,98,34,6,26,94,124,99,-1};
	int MAX=0;
	for(int i=0;a[i]!=-1;i++){
		if(MAX<a[i]){
			MAX=a[i];
		}
	} 
	printf("MAXvalue is %d",MAX);
	
	return 0;
} 

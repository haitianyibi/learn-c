/*
time:2020/2/13 PM
author:haitianyibi
version:1.0
function:Ñ­»·Ç¶Ì× 
*/
#include<stdio.h>
int main(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				printf("*");
			}
			printf("\n");
		}
		printf("-----\n");
	}
	
	
	
	
	
	for(int i=0,j=0;i<3;i++){
		while(j<3){
			printf("#");
			j++;
		}
		printf("\n");
		j=0;
	} 
	
	return 0;
} 

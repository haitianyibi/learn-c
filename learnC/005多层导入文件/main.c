/*
time:2020/2/13 PM
author:haitianyibi
version:1.0
function:����ļ�֮��ĵ���,���νṹ 
stdio.h    ->  support.c ->  main.c 
myscanf.c  ->  myfun.c   ->  main.c 
myprintf.c ->  myfun.c   ->  main.c 
*/ 

#include "support.c"
#include "myfun.c"
int main(){
	int num;
	num= myscanfun();
	myprintfun(num);
} 

/*
time:2020/2/13 PM
author:haitianyibi
version:1.0
function:多个文件之间的导入,树形结构 
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

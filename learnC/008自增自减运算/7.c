/*
time:2020/2/13 PM 
author:haitianyibi
version:1.0
function:++ºÍ-- 
 */
#include <stdio.h>
main()
{
	int i=0,s=3;
	printf("i=%d\n\n",s);//s
//one
	i=s;
	printf("++i=%d\t",++i);//s+1
	printf("i=%d\n",i);//s+1
	i=s;
	printf("0+++i=%d\t",0+ ++i);//0+(s+1)
	printf("i=%d\n",i);//s+1
	i=s;
	printf("i++=%d\t",i++);//s
	printf("i=%d\n",i);//s+1
	i=s;
	printf("0+i++=%d\t",0+i++);//0+s
	printf("i=%d\n\n",i);//s+1

//two
	i=s;
	printf("++i+++i=%d\t",++i+ ++i);//((s+1)+1)+((s+1)+1)
	printf("i=%d\n",i);//s+2
	i=s;
	printf("i+++++i=%d\t",i+++ ++i);//((s)+1)+((s)+1))
	printf("i=%d\n",i);//s+2
	i=s;
	printf("i+++i++=%d\t",i+++i++);//(s)+((s)+1))
	printf("i=%d\n",i);//s+2
	i=s;
	printf("++i+i++=%d\t",++i+i++);//(s+1)+((s+1)+1)
	printf("i=%d\n\n",i);//s+2

//three
	i=s;
	printf("++i+++i+++i=%d\t",++i+ ++i+ ++i);//
	printf("i=%d\n",i);//s+3
	i=s;
	printf("++i+++i+i++=%d\t",++i+ ++i+i++);//
	printf("i=%d\n",i);	//s+3
	i=s;
	printf("++i+i+++++i=%d\t",++i+i+++ ++i);//
	printf("i=%d\n",i);//s+3
	i=s;
	printf("++i+i+++i++=%d\t",++i+i+++i++);//
	printf("i=%d\n",i);//s+3
	i=s;
	printf("i+++++i+++i=%d\t",i+++ ++i+ ++i);//
	printf("i=%d\n",i);//s+3
	i=s;
	printf("i+++++i+i++=%d\t",i+++ ++i+i++);//
	printf("i=%d\n",i);//s+3
	i=s;
	printf("i+++i+++++i=%d\t",i+++i+++ ++i);//
	printf("i=%d\n",i);//s+3
	i=s;
	printf("i+++i+++i++=%d\t",i+++i+++i++);//
	printf("i=%d\n\n",i);//s+3

//printf  arc 
	i=s;
	printf("i,++i,++i = %d,%d,%d\n",i,++i,++i);//((s+1)+1) ((s+1)+1) ((s+1)+1)
	i=s;
	printf("i,i++,i++ = %d,%d,%d\n",i,i++,i++);//((s+1)+1) (s+1) s
	i=s;
	printf("i,i++,++i = %d,%d,%d\n",i,i++,++i);//((s+1)+1) (s+1) ((s+1)+1)
	i=s;
	printf("i,++i,i++ = %d,%d,%d\n\n",i,++i,i++);//(((s)+1)+1) (((s)+1)+1) s

}

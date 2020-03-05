/*
time:2020/2/24 AM
author:haitianyibi
version:1.0 
function:在java源码中看到的Integer类中的stringSize方法 
*/ 
#include<stdio.h>
int main(){
	int i=0;
	printf("input a (int)number\n");
	scanf("%d",&i);
	printf("%d",stringsize(i));
	
	return 0;
} 
int stringsize(int x){//如果传入的数据大于最大值在内部存储中可能为负数 ，输出结果可能是 1-11的任何值 
    int d = 1;//符号位占一位 
    if (x >= 0) {//如果不是负数 
        d = 0;//不统计符号位 
        x = -x;//将x转化为负数 
    }
    int p = -10;
    for (int i = 1; i < 10; i++) {//循环十次 ,int型占4个字节，即32位 ，约20亿，即最多十个位数 
        if (x > p)//如果x>p即x的位数小于p,第一次执行时若大于p则 x的绝对值是一位数， 
            return i + d;//返回 位数+符号位， 
        p = 10 * p;//将p的位数增加一位，个位，百位，千位
    }
    return 10 + d;//最大则返回十位 加 符号位 
}


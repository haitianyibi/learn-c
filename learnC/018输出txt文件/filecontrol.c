#include<stdio.h>
int main(){

	fopen("a","w"); //以写模式打开文件，把现有文件长度截为零，如果文件不存在，则创建一个新文件 
	
	FILE *fp=fopen("new.txt","w");	//文件指针 
	putc('a',fp);//写一个字符 
	fclose(fp);//关闭 指定的文件 
	
	fp=fopen("new.txt","r");//以读模式打开文件 
	char c =getc(fp);//获取一个字符 
	printf("%c\n",c); 
	fclose(fp);//关闭指定的文件 
	
	fp=fopen("new.txt","a");//以写模式打开文件。在现有文件末尾添加内容，如果文件不存在，则创建一个新文件 
	putc('b',fp); 
	fclose(fp);

	fp=fopen("new.txt","a");//以写模式打开文件。在现有文件末尾添加内容，如果文件不存在，则创建一个新文件 
	putc('c',fp); 
	putc('d',fp);//连续添加两个字符 
	fclose(fp);

	fp=fopen("new.txt","r");//以读模式打开文件 
	char ch;
	while((ch=getc(fp))!=EOF){//获取下一个字符不是-1 ,文件末尾定义都是EOF 
		putchar(ch);//输出一个字符 
	} 
	if(fclose(fp)!=0){//关闭指定的文件 成功关闭返回0.出错返回EOF 
		printf("err"); 
	}




	return 0;
} 

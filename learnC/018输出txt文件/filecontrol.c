#include<stdio.h>
int main(){

	fopen("a","w"); //��дģʽ���ļ����������ļ����Ƚ�Ϊ�㣬����ļ������ڣ��򴴽�һ�����ļ� 
	
	FILE *fp=fopen("new.txt","w");	//�ļ�ָ�� 
	putc('a',fp);//дһ���ַ� 
	fclose(fp);//�ر� ָ�����ļ� 
	
	fp=fopen("new.txt","r");//�Զ�ģʽ���ļ� 
	char c =getc(fp);//��ȡһ���ַ� 
	printf("%c\n",c); 
	fclose(fp);//�ر�ָ�����ļ� 
	
	fp=fopen("new.txt","a");//��дģʽ���ļ����������ļ�ĩβ������ݣ�����ļ������ڣ��򴴽�һ�����ļ� 
	putc('b',fp); 
	fclose(fp);

	fp=fopen("new.txt","a");//��дģʽ���ļ����������ļ�ĩβ������ݣ�����ļ������ڣ��򴴽�һ�����ļ� 
	putc('c',fp); 
	putc('d',fp);//������������ַ� 
	fclose(fp);

	fp=fopen("new.txt","r");//�Զ�ģʽ���ļ� 
	char ch;
	while((ch=getc(fp))!=EOF){//��ȡ��һ���ַ�����-1 ,�ļ�ĩβ���嶼��EOF 
		putchar(ch);//���һ���ַ� 
	} 
	if(fclose(fp)!=0){//�ر�ָ�����ļ� �ɹ��رշ���0.������EOF 
		printf("err"); 
	}




	return 0;
} 

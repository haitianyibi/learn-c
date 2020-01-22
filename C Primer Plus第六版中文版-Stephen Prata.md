[TOC]



# C Primer Plus第六版中文版

# 一、初识C

c语言是一门功能强大的专业化编程语言。

## 1.C起源

1972年，贝尔实验室的Dennis Ritch和Ken Thompson在开发UNIX操作系统时设计了C语言，C语言是在Ken Thompson发明的B语言基础上进行设计。

## 2.C优点

* 设计特性：
* 高效性：
* 可移植性：
* 强大而灵活：
* 面向程序员：
* 缺点：指针混乱

## 3.C应用范围

小型机、大型机、嵌入式、表格软件、系统、编译器等

c++几乎是c语言的超集

## 4.计算机能做什么

中央处理器cpu

随机存储内存RAM

寄存器

指令集

## 5.高级计算机语言和编译器

编译器

机器语言

抽象

数据管理和逻辑抽象

## 6.语言标准

* ANSI/ISO C
* C99

C99标准引入的主要新特性：

1、对编译器限制增加了，比如源程序每行要求至少支持到 4095 字节，变量名与函数名的要求支持到 63 字节 (extern 要求支持到 31)。

2、增加了新关键字 restrict，inline，_Complex，_Imaginary，_Bool。

3、支持 long long，long double _Complex，float _Complex 这样的类型。

4、持了不定长的数组。数组的长度就可以用变量了。声明类型的时候呢,就用 int a[*] 这样的写法。不过考虑到效率和实现，这玩意并不是一个新类型。所以就不能用在全局里，或者 struct union 里面，如果你用了这样的东西，goto 语句就受限制了。

5、相较于C89标准，C99标准新增了一种结构体/数组的初始化方式，名叫designated initializers。

6、支持 16 进制的浮点数的描述。

7、增加了一个内置的局部静态字符数组变量 __func__ ，可以用于得到当前函数的函数名。

8、取消了不写函数返回类型默认就是 int 的规定。

* C11

## 7.写程序流程

* 定义程序目标
* 设计程序
* 编写代码
* 编译代码
* 运行程序
* 测试和调试程序
* 维护和修改程序

## 8.编程机制

* 文件名：.前面称为基本名，后面为扩展名，共同构成文件名。（文件名.类型）

* 目标代码：
* 可执行文件：
* 库：

# 二、概述

## 1.C示例

## 2.示例解释

c语言元素：

* 关键字
* 标识符
* 运算符
* 数据

c语言的六种语句：

* 标号语句
* 复合语句
* 表达式语句
* 选择语句
* 迭代语句
* 跳转语句

## 3.简单程序的结构

## 4.提高程序可读性

## 5.进一步使用C

## 6.多个函数

## 7.调试程序

语法错误

语义错误

## 8.关键字和保留标识符

原有关键字和保留字：auto	extern	short	while	break	float	case	for	sizeof	char	goto	static	if	struct	continue	switch	default	int	typedef	do	long	union	double	register	unsigned	else	restrict	return

c90新增：signed	enum	const	volatile	void

c99新增：inline

c11新增：_Alignas	_Alignof	_Atomic	_Bool	_Complex	_Generic	_Imaginary	_Noreturn	_Static_assert	_Thread_local

# 三、数据和C

整数类型

浮点类型

## 1.示例程序

## 2.变量与常量数据

## 3.数据：数据类型关键字

位、字节、字

## 4.C基本数据类型

基本类型：int	long 	short	unsigned	char	float	double

基本类型变式关键字：long	short	unsigned	signed

基本类型变式：

int 

unsigned int =unsigned

short int=short=signed short=signed short int

unsigned short int=unsigned short

long int

unsigned long int=unsigned long 

long long int=long long 

unsigned long long int=unsigned long long=ULL



_Bool布尔

_Complex复数

_Imaginary虚数

## 5.使用数据类型

## 6.参数和陷阱

## 7.转义序列示例

# 四、字符串和格式化输入、输出

## 1.示例程序

## 2.字符串

## 3.常量和C预处理器

## 4.printf()和scanf()

# 五、运算符、表达式和语句

## 1.循环简介

## 2.基本运算符

## 3.其他运算符

## 4.表达式和语句

## 5.类型转换

## 6.带参函数

## 7.示例程序

# 六、控制语句：循环

## 1.while循环

## 2.while语句

## 3.关系运算符和表达式比较大小

## 4.不确定循环和计数循环

## 5.for循环

## 6.其他赋值运算符

## 7.逗号运算符

## 8.出口条件循环：do while

## 9.如何选择循环

## 10.嵌套循环

## 11.数组

## 12.使用函数返回值的循环示例

# 七、控制语句：分支和跳转

## 1.if语句

## 2.if else语句

## 3.逻辑运算符

## 4.一个统计单词的程序

## 5.条件运算符：？：

## 6.循环辅助：continue和break

## 7.多重选择：switch和break

## 8.goto语句

# 八、字符输入、输出和输入验证

## 1.单字符I/O:getchar()和putchar()

## 2.缓冲区

## 3.结束键盘输入

## 4.重定向和文件

## 5.创建更友好的用户界面

## 6.输入验证

## 7.菜单浏览

# 九、函数

## 1.函数

## 2.ANSI C函数原型

## 3.递归

## 4.编译多源代码文件的程序

## 5.查找地址：&运算符

## 6.更改主调函数中的变量

## 7.指针简介

# 十、数组和指针

## 1.数组

## 2.多维数组

## 3.指针和数组

## 4.函数、数组和指针

## 5.指针操作

## 6.保护数组中的数据

## 7.指针和多维数组

## 8.变长数组VLA

## 9.复合字面量

# 十一、字符串和字符串函数

## 1.表示字符串和字符串I/O

## 2.字符串输入

## 3.字符串输出

## 4.自定义输入、输出函数

## 5.字符串函数

## 6.字符串示例：字符串排序

## 7.ctype.h字符函数和字符串

## 8.命令行参数

## 9.把字符串转换为数字

# 十二、存储类别、链接和内存管理

## 1.存储类别

## 2.随即数函数和静态变量

## 3.掷股子

## 4.分配内存：malloc()和free()

## 5.ANSI C类型限定符

# 十三、文件输入、输出

## 1.与文件通信

## 2.标准I/O

## 3.一个简单的文件压缩程序

## 4.文件I/O：fprintf()、fscanf()、fgets()、fputs()

## 5.随即访问：fseek()和fteel()

## 6.标准I/O的机理

## 7.其他标准I/O函数

# 十四、结构和其他数据类型

## 1.示例：创建图书目录

## 2.建立结构声明

## 3.定义结构变量

## 4.结构数组

## 5.嵌套结构

## 6.指向结构的指针

## 7.向函数传递结构的信息

## 8.把结构内容保存到文件中

## 9.链式结构

## 10.联合声明

## 11.枚举类型

## 12.typedef

## 13.其他复杂的声明

## 14.函数和指针

# 十五、位操作

## 1.二进制、位和字节

## 2.其他进制数

## 3.按位运算符

## 4.位字段

## 5.对齐特性

# 十六、C预处理器和C库

## 1.翻译程序

## 2.明示常量：#define

## 3.在#define中使用参数

## 4.宏和函数的选择

## 5.文件包含：#include

## 6.其他指令

## 7.内联函数

## 8._Noreturn函数

## 9.C库

## 10.数学库

## 11.通用工具库

## 12.断言库

## 13.string.h库中的memcpy()和memmove

## 14.可变参数：stdarg.h

# 十七、高级数据表示

## 1.研究数据表示

## 2.从数组到链表

## 3.抽象数据类型ADT

## 4.队列ADT

## 5.用队列进行模拟

## 6.链表和数组

## 7.二叉查找树

# 十八、索引

#include

<stdio.h>

main()

void

int

printf()

\n

%d

scanf()

getchat()

return

//

/*    */

auto	

extern	

short	

while	

break	

float	

case	

for	

sizeof	

char	

goto	

static	

if	

struct	

continue	

switch	

default	

nt	

typedef	

do	

long	

union	

double	

register	

unsigned	

else	

restrict	

void	

return

signed	

enum	

const	

volatile	

inline

_Alignas	

_Alignof	

_Atomic	

_Bool	

_Complex	

_Generic	

_Imaginary	

_Noreturn	

_Static_assert	

_Thread_local

%o

%x

%X

%d

%#o

%#x

%#X

%ld

%u

%lx

%lo

%ho

%llu

%lld

%hd


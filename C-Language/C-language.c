#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//第一节《初识C语言》

//#include<stdio.h>              //include(包含)包含一个叫stdio.h的文件   std(standard)是一个标准库
                                 //std-标准 standard i-input o-output     .h表示head头文件
                                 //F10 是逐步调试,从main函数第一行开始的。 <>表示导入系统文件
                                 // ""表示导入自定义文件
                                 //int 是整型的意思，main函数前面的int表示main函数调用返回的一个整型值
//int main()                     //main主函数-程序的入口-main函数有且仅有一个
//{                              //()里面表示函数的参数 函数的参数可以有多个 中间用逗号分隔
                                 //{}函数体 代码体 程序体
//	printf("hello world\n");     //printf是库函数-C语言本身提供给我们使用的函数   使用前给别人打招呼 
                                 //printf是stdio.h中系统提供的函数，表示在标准输出设备（屏幕）上打印字符串
                                 //""称为字符串  ;一条语句的结束
                                 //打招呼就是#include<stdio.h>
//	return 0;                     //return 返回 整数零，和前面的int（整型）对应
                                  //return 如果出现在其他函数中表示函数结束，如果出现在main函数中表示程序的结束
//}

/*生活中无非就是整型和浮点型（20）  浮点型（55.5）
char        字符数据类型          %c - 打印字符   %s - 打印字符串
short (short int)       短整型    %d - 打印整型
int         整型                  %f - 打印浮点数字-打印小数
long        长整型                %p - 以地址的形式打印
long long   更长的整型            %x - 打印16进制数字
float       单精度浮点数
double      双精度浮点数          %lf - 打印双精度浮点数
*/

//#include<stdio.h>         //编译预处理命令
//int main()                //定义主函数
//{
                  //'A';//一个字符 如果要存储字符A 需要向内存申请一块空间来存放字符A 
    //char ch = 'A';//char-字符类型  创建了一个变量ch-就是向内存申请一块空间 这个空间的名字叫ch
    //printf("%c\n",ch);//%c--打印字符格式的数据    以字符的形式打印ch
    //int age = 20;
    //printf("%d\n", age);//%d--打印整型十进制数据 decimal（十进制）
    //float f = 5.0;
    //printf("%f\n", f);
    //double d = 3.14;
    //printf("%lf\n", d);//可以使用%d来打印 只不过用lf表示打印双精度浮点数。
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
                   //sizeof是什么什么的大小
//    printf("%d\n", sizeof(char));//1个字节（byte）=8个比特位（bit）
//    printf("%d\n", sizeof(short));//2个字节（byte)=16个比特位（bit）
//    printf("%d\n", sizeof(int));//4个字节
//    printf("%d\n", sizeof(long));//4or8个字节    C语言标准规定sizeof(long)>=sezeof(int)
//    printf("%d\n", sizeof(long long));//8个字节
//    printf("%d\n", sizeof(float));//4个字节
//    printf("%d\n", sizeof(double));//8个字节
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    short age = 20;//向内存申请2个字节=16bit位，用来存放20这个的数
//    float weight = 95.6f;//向内存申请4个字节，存放小数
//    return 0;
//}

//#include<stdio.h>
//
//int num2 = 20;//全局变量-定义在代码块{}之外的变量
//int main()
//{
//    int num1 = 10;//局部变量-定义在代码块{}内部
//    return 0;
//}

//#include<stdio.h>
//int a = 100;
//int main()
//{
    //int a = 10;
    //局部变量和全局变量的名字建议不要相同-容易误会，产生bug
    //当局部变量和全局变量的名字相同的时候，局部变量优先
    //printf("%d\n", a);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    {
//        int a = 10;//这个a只能在这个花括号里面被定义，也就是局部变量。
//                   //a的作用域也就是{到}之间，哪里能用 哪里就是它的作用域
//    }
//    printf("a = %d\n", a);//而printf是在a的花括号之外 所以无法定义到a。
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int sum = 0;//C语言语法规定，变量要定义在当前代码块的最前面
//    scanf("%d%d", &a, &b);//输入数据-使用输入函数scanf
//                //取地址符号&，取址符。
//    sum = a+ b;
//    printf("sum = %d\n",sum);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int num = 0;//num的定义域是在大花括号里的 而小花括号被大花括号包含了 所以可以打印num。
//    {
//        printf("num = %d\n", num);
//    }
//    return 0;
//}

//#include<stdio.h>
//int global = 2023;//全局变量的作用域是整个工程
//void test()
//{
//    printf("test()-- %d\n", global);
//}
//int main()
//{
//    test();//调用函数
//    printf("%d\n", global);
//    return 0;
//}

//extern 声明外部符号的

//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n",sum);
//	return 0;
//}

//2、const修饰的常变量 具有常属性 不能被改变
//#include<stdio.h>
//int main()
//{
//	const int num = 4;//const - 定义常量属性 用来修饰常变量
//	printf("%d\n", num);
//	//const int num = 8;
//	printf("%d\n", num);
//	return 0;
//}

//const - 常属性
// #include<stdio.h>
//int main()
//{
//	const int n = 10;//n是变量，但是又有常属性，所以我们说n是常   变量 属性还是变量
//	int arr[n] = {0};//这个arr[n] 这个n不能使用
//	//n = 20; n已经使用const修饰为常量了 也就是10. 但是它属性是变量。
//	return 0;
//}

////3、#define定义的标识符常量
//#include<stdio.h>
////#define 定义的标识符常量
//#define MAX  10
//int main()
//{
//	int arr[MAX] = { 0 };//arr数组里面必须是常量
//	//printf("%d\n", sizeof(arr));
//	printf("MAX = %d\n", MAX);
//	return 0;//MAX = 10;
//}

//4、枚举常量  枚举-一一列举的意思
//性别：男，女，保密
//三原色：红、黄、蓝
//星期：1，2，3，4，5，6，7。

//枚举关键字 - enum
//#include<stdio.h>
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////MALE,FEMALE,SECRET - 枚举常量
//int main()
//{
//	enum Sex s = FEMALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}

//#include<stdio.h>
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//	enum Color color = BLUE;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";//打印的是abc
//	//"abc" -- 'a' 'b' 'c' '\0' --'\0'字符串的结束标志,不算作字符串内容。
//	//'\0' - 0
//	//'a' - 97
//	char arr2[] = { 'a','b','c','\0'};//在字符串中以\0为结束。没\0就打印abc烫烫烫
//	//'a' 'b' 'c'
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//数据在计算机上存储的时候，存储的是二进制 在存储#av$这些符号时，给每一个符号都编写了一个值。ASCII编码。
//a - 97	97就是ASCII码值
//A - 65 

//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' ,'\0'};
//	printf("%d\n", strlen(arr1));//strlen - string lenght - 计算字符串长度的
//	printf("%d\n", strlen(arr2));//打印随机数		这里由于arr里面没有\0 所以打印的是随机数
//	return 0;
//}

// 转义字符是转变原来的意思 如\n就是换行的意思
//#include<stdio.h>
//int main()
//{
//	printf("abc\n");
//	return 0;
//}

//		\t的意思是水平制表符作用认为为tab键
//#include<stdio.h>
//int main()
//{
//	printf("c:\test\32\tese.c");
//	return 0;
//}

//		\是转义字符
//#include<stdio.h>
//int main() 
//{
//	printf("%c\n",'\'');
//	return 0;
//}

// \ddd表示1~3个八进制的数字。eg：\32or\132
//	\dd表示2个十六进制数字。eg：\x61
//#include<stdio.h>
//#include<string.h>//strlen所需要的头文件是string
//int main()
//{
//	printf("%c\n",'\x61');//61（十六进制） = 97（十进制）也就是a
//	//printf("%c\n", '\32');
//	//printf("%d\n", strlen("c:\test\32\test.c"));//打印出是13。 c,:,\t,e,s,t,\32,\t,e,s,t,.,c.
// 	\32是两个八进制数字
//	//32作为八进制代表的那个十进制数字，作为ASCII码值，对应的字符。32（八进制） = 26（十进制）
//	return 0;
//}

//分支和循环语句
//分支语句（选择结构）
//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d", &input);//1/0
//	if (input == 1) 
//		printf("好offer\n"); 
//	else
//		printf("卖红薯\n");
//	return 0;
//}

//循环语句
//#include<stdio.h>
//int main()
//{
//	int line = 0;//line 行数
//	printf("加入比特\n");
//	while (line < 20)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;//先赋值 后自增
//	}
//	if(line>=20)
//		printf("好offer\n");
//	return 0;
//}

//函数
//#include<stdio.h>
//int Add(int x, int y)//Add是函数名，（）里面是函数的参数	int是函数的返回类型和z是一样的类型
//{
//	int z = x + y;
//	return z;
//}//花括号里面是函数体
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	//sum = a + b;
//	c = Add(a,b);//Add是函数  自定义函数
//	printf("%d\n", c);
//	return 0;
//}

//数组
//数组的下标默认从0开始
//要打印n 则输入n-1
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个存放10个整数数字的数组；
//	             // 0,1,2,3,4,5,6,7,8,9   
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//
//	}
//	//printf("%d\n", arr[5]);//要打印6，则输入5，下标的方式访问元素
//	//arr[下标]
//	return 0;
//}

//操作符详解
//移位操作符：位是二进制位
//<<左移，>>右移
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	//整型1占4个字节也就是32个比特位也就是00000000000000000000000000000001
//	int b = a << 2;//b就是00000000000000000000000000000100也就是4
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//位操作符：位依然是二进制位，&，^，|。
//&按位与
//与就是并 有假就为假 在计算机里面0为假 1为真。有0就为0。
//#include<stdio.h>
//int main()
//{
//	int a = 3;//二进制是011
//	int b = 5;//二进制是101
//	int c = a & b;//	001也就是1
//	printf("%d\n", c);
//	return 0;
//}

//|按位或  
//有真就为真 也就是有1为1
//#include<stdio.h>
//int main()
//{
//	int a = 3;//二进制是011
//	int b = 5;//二进制是101
//	int c = a | b;//	111也就是7
//	printf("%d\n", c);
//	return 0;
//}

//^按位异或
//异或的计算规律是对应的二进制位相同，则为0，对应的二进制相异，则为1，相同为0。
//#include<stdio.h>
//int main()
//{
//	int a = 3;//二进制是011
//	int b = 5;//二进制是101
//	int c = a ^ b;//	110也就是6
//	printf("%d\n", c);
//	return 0;
//}

//符合赋值符
//=，+=，-=，*=，/=，%=，&=，|=，^=，<<=，>>=，
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	a = 20;//=	赋值		==	判断是否相等
//	a = a + 10;//等价于a += 10;
//	a = a - 20;// a -= 20;
//	a = a & 2;// a &= 2;
//	printf("%d\n", a);
//	return 0;
//}

//单目操作符
//C语言中我们表示真假 0表示假 非0表示真
//单目操作符
//双目操作符
//三目操作符
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a + b;// +号左右两边都有操作数 所以+为双目操作符
//	return 0;
//}

//!逻辑反操作 就是把假的变真 真的变假//today
//#include<stdio.h>
//int main()
//{
//	int a = 10;//10是非0 即为真
//	printf("%d\n", a);
//	printf("%d\n", !a);//因为a是真所以这里打印出来是假即为0
//	return 0;
//}

//-负值，+正值，&取地址
//#include<stdio.h>
//int main()
//{
//	int a = -2;
//	int b = -a;
//	int c = +3;//+正号都会省略
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };//10个整型元素的数组
//	int sz = 0;
//	//10*sizeof(int) = 40
//	printf("%d\n", sizeof(arr));
//	//计算数组的元素个数
//	//数组总大小/每个元素的大小
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz = %d\n", sz);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//		printf("%d\n", a);
//	else
//		printf("%d\n", b);
//	return 0;
//}

//#include<stdio.h>
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d%d", &a, &b);
//	max = Max(a, b);//需要引用函数
//	printf("%d\n", max);//函数体是无法直接打印的
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(arr));//计算数组大小 单位是字节	4*6=24
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//元素大小除以每个元素的大小就是元素个数   24/4=6
//	return 0;
//}

//~按位（二进制位）取反
//1010按位取反就是0101
//原码，反码，补码
//正数的原码，反码，补码相同，为原码本身
//负数的反码：原码符号不变 其他位按位取反得到反码
//负数的补码：反码+1得到补码
//负数在内存中存储的时候，存储的是二进制的补码，也就是操作符之后得到补码 然后补码转原码就是打印的数字
//#include<stdio.h>
//int main()
//{
//	int a = 0;//四个字节 32个bit位
//	int b = ~a;//b是有符号的整型，最高位表示符号位，0表示正数，1表示负数。
//	//a=00000000000000000000000000000000    a的原码
//	//b=11111111111111111111111111111111	a的反码    b的原码
//	//b=10000000000000000000000000000000	b的反码
//	//b=10000000000000000000000000000001	b的补码
//	//前面那个1是符号 所以打印的是-1
//	printf("%d\n", b);//使用的，打印的是这个数的原码
//	return 0;
//}

//前置后置	++	--
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用a的值 然后a在自增		11	10
//	//int b = ++a;//前置++，先自增，在赋值	11	11
//	//int b = a--;//后置--，先赋值，后自减	9	10
//	int b = --a;//前置--，先自减，后赋值	9	9
//	printf("a = %d b = %d\n", a,b);
//	return 0;
//}

//(类型)是强制类型转换
//#include<stdio.h>
//int main()
//{
//	int a = (int)3.14;//原来3.14是double类型，现在是int类型
//	return 0;
//}

//关系操作符
//>,>=,<,<=,!=,==
//逻辑操作符
//&&逻辑与		||逻辑或		0表示假		一切的非0表示真
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a || b;//这里a或者b有一个为真（1），c就为真（1）	a和b都为假（0），c才为假（0）
//	//int c = a && b;//这里a和b都为真（1），c才为真（1）  a或者b为假（0） c才为假（0）
//	printf("c = %d\n", c); 
//	return 0;
//}

//条件操作符 这个代码包含了三目操作符
//exp1？exp2：exp3
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//问号前是条件 条件为真即执行第二个条件，如果为假，执行第三个条件
//	printf("max = %d\n", max);
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	return 0;
//}

//#include<stdio.h>
//int Add(int x, int y)
//{
//	//5int z = 0;
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4];//[] - 下标引用标识符
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);//() - 函数调用操作符
//    printf("%d\n", c);
//	return 0;
//}

//原码	直接按照正负写出的二进制序列
//反码	原码的符号位不变，其他位按位取反
//补码	反码+1
//只要是整数，内存中存储的都是二进制的补码
//正数--原码，反码，补码都相同
//负数--存储补码
//eg：-2
//10000000000000000000000000000010		原码
//11111111111111111111111111111101		反码
//11111111111111111111111111111110		补码

//常见关键字	auto	break	const	continue    register    signed  void（无或者空）
//寄存器(register)
//高速缓存  访问速度比内存还要高几十MB
//内存    8G/4G/16G   内存访问速度是高于硬盘的，所以造价比较高
//硬盘    512G
//#include<stdio.h>
//int main()
//{
//	auto int a = 10;//局部变量都是自动变量（auto），局部变量前面都会有auto只不过都省略了
//	printf("%d\n", a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    register int a = 10;//建议把a定义成寄存器变量 因为a需要频繁使用，所以使用register，访问速度更快
//    return 0;
//}

//int 定义的变量是有符号的等价于 signed int  (signed)可以省略
//signed定义有符号数字，unsigned定义无符号数字

//typedef - 类型定义 - 类型重新定义
//#include<stdio.h>
//int main()
//{
//    typedef unsigned int u_int;//把unsigned int 重新起了个名字叫u_int    即别名
//    unsigned int a = 20;
//    u_int b = 20;//a和b的类型一模一样
//    return 0;
//}

//static的用法

//static    用法一：修饰局部变量
//在局部变量前加上关键字"static"，就被定义成为一个静态局部变量。
//静态局部变量保存在全局数据区，而不是保存在栈中。
//每次的值保持到下一次调用，直到下次赋新值。
//静态局部变量的用途有许多：可以使用它确定某函数是否被调用过。 使用它保留多次调用的值。

//static    修饰局部变量的时候局部变量的生命周期变长
//#include<stdio.h>
//void test()//void   无返回值
//{
//    static int a = 1;//a是一个静态的局部变量  打印出来是2，3，4，5，6。
//    //int a = 1;//这个a是局部变量  打印出来5个a=2
//    a++;
//    printf("a = %d\n", a);
//}
//int main()
//{
//    int i = 0;              //i = 0，1，2，3，4，5
//    while (i < 5)           //a = 2，3，4，5，6
//    {
//        test();
//        i++;
//    }
//    return 0;
//}

//static    用法二：修饰全局变量
//static    修饰全局变量的时候，改变了变量的作用域
// 让静态的全局变量只能在自己所在的源文件内部使用
// 出了源文件内部就没法再使用了
//如果在外部文件(extern)的全局变量前加上static就会报错
//#include<stdio.h>
//int main()
//{
//    extern int g_val;//extern   声明外部符号的
//    printf("g_val = %d\n",g_val);//2023
//    return 0;
//}

//static    用法三：修饰函数
//static    修饰函数改变了函数的连接属性
//一个正常函数没有被static修饰的时候 是具有外部连接属性 被修饰了就改变为内部连接属性
//extern int Add(int, int);//声明外部函数
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int sum = Add(a, b);//具有外部链接属性，这里才能去调用。
//    printf("%d\n", sum);//30
//    return 0;
//}

//#define   定义常量和宏

//#define   定义标识符常量
//#define MAX 100
//#include<stdio.h>
//int main()
//{
//    int a = MAX;
//    printf("%d\n", a);//100
//    return 0;
//}

//#define   宏
//函数的方式
//#include<stdio.h>
//int  Max(int x, int y)//函数的实现
//{
//    if (x > y)
//        return x;
//    else
//        return y;
//}

//宏的方式
//#include<stdio.h>
//#define MAX(X,Y) (X>Y?X:Y)//问号前是条件 条件为真即执行第二个条件，如果为假，执行第三个条件

//int main()
//{
//    int a = 10;
//    int b = 20;
//    int max = MAX(a, b);
//    //max = (a>b?a:b)
//    printf("max = %d\n", max);
//    return 0;
//}

//指针        *p是变量   p是指针

//整型指针变量
//#include<stdio.h>
//int main()
//{
//    int a = 10;//4个字节
//    int* p = &a;//a的类型的int 而p的类型是int*
//    //p = &a    p是用来存放a的地址的
//    //有一种变量是用来存放地址的就是指针变量p就是指针变量
//    *p = 20;//解引用操作符 - 间接访问操作符
//    printf("%d\n", a);//20    通过*p找到a 并把20赋给a
//      //*p  对p进行解引用操作找到它所指向的对象a
//    //printf("%p\n", &a);//%p是打印地址    &取地址  0000002DB718FA64（十六进制）
//    //printf("%p\n", p);//0000002DB718FA64
//    return 0;
//}

//字符型指针变量
//#include<stdio.h>
//int main()
//{
//    char ch = 'a';
//    char* pc = &ch;
//    *pc = 'b';
//    printf("%c\n", ch);//b
//    return 0;
//}

//指针大小
//指针大小在32位平台是4个字节，64位平台是8个字节（位是比特位）
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int* p = &a;
//    printf("%d\n", sizeof(p));//8
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    printf("%d\n", sizeof(int*));//8
//    printf("%d\n", sizeof(short*));//8
//    printf("%d\n", sizeof(long*));//8
//    printf("%d\n", sizeof(char*));//8
//    printf("%d\n", sizeof(double*));//8
//    return 0;
//}

//结构体
//现在我们都学了这几种类型char int double ...
//学了这么多类型 如何表达人
//人 - 复杂对象 -姓名  身高  年龄  身份证号码...
//书 - 书名    作者  出版社 定价  书号 ...
//复杂对象  -   结构体 -   我们自己创造出来的一种类型
//书
//创建一个结构体类型
//#include<stdio.h>
//struct Book //struct  结构体关键字 
//{
//    char name[20];//书名
//    short price;//价格
//};

//int main()
//{
//    //利用结构体类型-创建一个该类型的结构体变量
//    struct Book b1 = { "C语言程序设计", 55 };//花括号里是赋值的操作
//    printf("书名:%s\n", b1.name);//书名:C语言程序设计
//    printf("价格:%dCNY\n", b1.price);//价格:55CNY
//    b1.price = 30;
//    printf("修改后的价格:%d元\n", b1.price);//修改后的价格:30元
//    return 0;
//}

//#include<stdio.h>
//struct  Book
//{
//    char name[20];
//    int price;
//};
//
//int main()
//{
//    struct Book b1 = { "C语言程序设计",35};
//    struct Book* pb = &b1;
//
//    .     结构体变量.成员
//    printf("%s\n", (*pb).name);//C语言程序设计
//    printf("%d\n", (*pb).price);//35
//
//    ->    结构体指针->成员
//    printf("%s\n", pb->name);
//    printf("%d\n", pb->price);
//    return 0;
//}

//字符串的赋值形式      strcpy(修改的目的地，"修改的数据")
//#include<stdio.h>
//#include<string.h>
//struct Book
//{
//    char name[20];
//    int price;
//};
//int main()
//{
//    struct Book b1 = {"C语言程序设计", 55 };
//    b1.price = 20;
//    printf("%d\n", b1.price);//20   因为price定义的是变量 所以可以直接修改
//    //而name是数组名其实本质上是地址
//    strcpy(b1.name,"Python程序设计");
//    //strcpy - string copy - 字符串拷贝 - 库函数 - string.h
//    printf("书名:%s\n", b1.name);//书名:Python程序设计
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    char st1[15], st2[] = "C Language";
//    strcpy(st1, st2);
//    printf("%s\n",st1);//C Language
//    return 0;
//}


//第二节《分支和循环语句》

//分支语句（选择结构）(if switch)

//if语句
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    printf("加入比特\n");
//    printf("你要好好学习吗？是按1，不是按2\n");
//    scanf("%d", &a);
//    if (a == 1)
//        printf("好offer\n");
//    else
//        printf("卖红薯\n");
//    return 0;
//}

//多分支语句
//#include<stdio.h>
//int main()
//{
//    int age = 100;
//    if (age < 18)
//        printf("未成年\n");
//    else if (age >= 18 && age < 28)
//        printf("青年\n");
//    else if (age >= 28 && age < 50)
//        printf("壮年\n");
//    else if (age >= 50 && age < 100)
//        printf("老年\n");
//    else
//        printf("活得久\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int age = 100;
//    if (age < 18)
//        printf("未成年\n");
//    else                      //如果条件成立，且需要执行多条语句，应该使用代码块{}
//    {
//        if (age >= 18 && age < 28)
//            printf("青年\n");
//        else if (age >= 28 && age < 50)
//            printf("壮年\n");
//        else if (age >= 50 && age < 100)
//            printf("老年\n");
//        else
//            printf("活得久\n");
//    }
//    return 0;
//}

//悬空else
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)//这个if就悬空了   而代码进来为假 没有与之匹配的else就直接打印空语句
//          if (b == 2)
//              printf("hehe\n");
//          else
//              printf("haha\n");//else是跟最近的未匹配if进行匹配
//    //如果要输出haha就把第二个if用代码块括起来{}
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int a = 4;
//    if (a == 5) //= 是赋值     ==是判断相等   建议写成5 == a
//    {
//        printf("好的\n");
//    }
//    return 0;
//}

//输入一个数判断是否为奇数
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d", &a);
//    b = a % 2;
//    if (b == 0)
//        printf("偶数");
//    else
//        printf("奇数");
//    return 0;
//}

//输出1到100之间的奇数
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 100; i++)
//    if (i % 2 == 1)
//        printf("%d ", i);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i = 1;
//    while (i <= 100)
//    {
//        if (i % 2 == 1)     //if (i % 2 != 0)
//            printf("%d ", i);
//        i++;
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i = 1;
//    while (i <= 100)
//    {
//        printf("%d ", i);
//        i += 2;
//    }
//    return 0;
//}

//switch语句      常使用在多分支语句   switch(整型表达式)   case 整型常量表达式
//#include<stdio.h>
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch (day)//入口
//    {
//    case 1:
//        printf("星期一\n");
//        break;//出口
//    case 2:
//        printf("星期二\n");
//        break;
//    case 3:
//        printf("星期三\n");
//        break;
//    case 4:
//        printf("星期四\n");
//        break;
//    case 5:
//        printf("星期五\n");
//        break;
//    case 6:
//        printf("星期六\n");
//        break;
//    case 7:
//        printf("星期天\n");
//        break;
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    switch (a)
//    {
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//        printf("工作日\n");
//        break;
//    case 6:
//    case7:
//        printf("休息日\n");
//        break;
//    default:
//        printf("输入错误\n");
//        break;
//    }
//    return 0;
//}

//switch语句习题
//#include<stdio.h>
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)//因为n是1 所以从第一个语句进
//    {
//    case 1:m++;//m == 3
//    case 2:n++;//n == 2
//    case 3:
//        switch (n)//这个n是2,所以从第二个语句进
//        {
//        case 1:n++;//这个不执行
//        case 2:m++; n++;//m == 4，n == 3
//            break;
//        }
//    case 4:m++;//m == 5
//        break;
//    default:
//        break;
//    }
//    printf("%d %d\n", m, n);//5 3
//    return 0;
//}

//循环语句（while,for,do while）
//while循环
// while（表达式）若表达式为真，就执行循环语句，执行完成后，再次判断表达式是否为真。
//#include<stdio.h>
//int main()
//{
//    while (1)//1是真且恒定为真 这个就是个死循环
//        printf("hehe\n");
//    return 0;
//}

//在屏幕上打印1到10
//其实在循环中只要遇到break，就停止后期的所有的循环，直接终止循环
//所以while中的break是用于永久终止循环的。
//#include<stdio.h>
//int main()
//{
//    int i = 1;
//    while (i <= 10)
//    {
//        if (i == 5)
//            break; //跳出循环
//        printf("%d ", i);
//        i++;
//    }
//    return 0;
//}

//continue结束本次循环（continue后面的代码就不执行了）
//continue是用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行
//而是直接跳转到while语句的判断部分。进行下一次循环的入口判断。
//#include<stdio.h>
//int main()
//{
//    int i = 1;
//    while (i <= 10)
//    {
//        if (i == 5)
//            continue;//在这里死循环了
//        printf("%d ", i);
//        i++;
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    //EOF - end of file文件结束标志，值是 -1
//    while ((a = getchar()) != EOF)//ctrl+z
//    {
//        putchar(a);
//    }
//    return 0;
//}

//输入缓冲区
//#include<stdio.h>
//int main()
//{
//    char password[20] = { 0 };
//    printf("请输入密码:>");
//    scanf("%s", password);//输入密码，并存放再password数组中
//    //缓冲区有123456\n，而password拿走了123456
//    //缓冲区剩余一个'\n'，使用getchar()接受到缓冲区里的'\n'
//    //password和getchar是输入函数     -   输入缓冲区
//    //如果缓冲区里面有多个数据，一个getchar不够用怎么操作
//    char b = 0;
//    while ((b = getchar()) != '\n')//getchar();
//    {
//        ;
//    }
//    printf("请确认密码(Y/N):>");
//    int a = 0;
//    a = getchar();
//    if (a == 'Y')
//        printf("确认成功");
//    else
//        printf("确认失败");
//    return 0;
//}

//输入0到9，并打印
//#include<stdio.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch < '0' || ch>'9')
//            continue;
//        else
//            putchar(ch);
//    }
//    return 0;
//}

//while循环的标准化
//#include<stdio.h>
//int main()
//{
//    int i = 1;//初始化
//    while (i < 11)//判断
//    {
//        printf("%d ", i);//语句
//        i++;//调整
//    }
//    return 0;
//}

//for循环

//for循环的标准化
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    //   初始化;判断;    调整
//    for (i = 1; i < 11; i++)
//    {
//        if (i == 5)
//            continue;//1234678910   //break;1234
//        printf("%d ", i);
//    }
//    return 0;
//}

//1、不可在for循环体内修改循环变量，防止for循环失去控制。
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        if (i = 5)//这里就修改了循环变量了，进入死循环
//            printf("哈哈\n");
//        printf("呵呵\n");
//    }
//    return 0;
//}

//2、建议for语句的循环控制变量的取值采用"前闭后开区间"写法。
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int i = 0;
//    //  i=0是闭区间;i<10是开区间;
//    //这样写方便看和了解 10次循环 10次打印 10个元素
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//一些for循环的变种

//变种1：省略初始化，判断，调整
//#include<stdio.h>
//int main()
//{
//    for (;;)//for循环的初始化、判断、调整都可以省略。
//            //但是for循环的判断部分如果被省略，那判断条件就是：恒为真
//    {
//        printf("呵呵\n");//死循环
//    }
//    return 0;
//}

//双循环（先把内循环在外循环）
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 10; i++)
//    {
//        for (j = 0; j < 10; j++)//这里的初始化不能省略，否则这个循环完j==10，就只能打印10个
//        {
//            printf("呵呵 ");//100个呵呵 10*10
//        }
//    }
//    return 0;
//}

//变种2：两个循环变量
//#include<stdio.h>
//int main()
//{
//    int x, y;
//    for (x = 0, y = 0; x < 2 && y < 5; x++, ++y)
//    {
//        printf("呵呵\n");
//    }
//    return 0;
//}

//小测试：循环要循环多少次？//0次
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0, j = 0; j = 0; i++, j++)//表达式2是赋值语句不是判断语句
//    //表达式2的结果是0，0为假所以直接跳出循环，如果表达式2是1，就是非0，就进入死循环
//    {
//        j++;
//    }
//    return 0;
//}

//do    while()循环的标准化
//循环至少执行一次
//#include<stdio.h>
//int main()
//{
//    int i = 1;
//    do 
//    {
//        if (i == 5)
//            continue;//1234死循环      //break;//1234
//        printf("%d ", i);
//        i++;
//    }
//    while (i < 11);
//    return 0;
//}

//循环的的练习
//1、计算n的阶乘。
//#include<stdio.h>
//int main()
//{
//    int n = 0;//不能溢出int
//    int i = 0;
//    int ret = 1;//阶乘的初始值不能为0，比如0*1*2都为0；
//    printf("请输入要计算谁的阶乘:>");
//    scanf("%d",&n);
//    for (i = 1; i <= n; i++)
//    {
//        ret = ret* i;//这个当时没想出来  ret接收i的数 然后循环后i==i+1
//    }
//    printf("该阶乘为%d\n", ret);
//    return 0;
//}

//2、计算1!+2!+3!+...+10!
//#include<stdio.h>       //方法二
//int main()
//{
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    for (n = 1; n <= 10; n++)
//    {
//        ret = ret * n;//n的阶乘
//        sum = sum + ret;
//    }
//    printf("sum = %d\n", sum);
//    return 0;
//}

//#include<stdio.h>     //方法一
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    for (n = 1; n <= 10; n++)
//    {
//        for (i = 1,ret = 1; i <= n; i++)
//        {
//            ret = ret * i;
//        }
//        //n的阶乘 n为1 就是1的阶乘
//        sum = sum + ret;
//    }
//    printf("sum = %d", sum);
//    return 0;
//}

//程序分析
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    for (n=1;n<=3;n++) 
//    {
//        for (i = 1; i <= n; i++)
//        {
//            ret = ret * i;
//        }
//        sum = sum + ret;
//    }
//    //ret = 1*1 = 1
//    //ret = 1*1*2 = 2
//    //ret = 2*1*2*3 =12
//    printf("sum = %d\n", sum);//15
//    return 0;
//}

//从无序中找数字
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 7,3,9,6,5,1,2,4,8 };//找6
//    int n = 6;
//    int sz = (sizeof(arr)) / (sizeof(arr[0]));//计算元素个数
//    for (i = 0; i < sz; i++)
//    {
//        if (arr[i] == n)
//        {
//            printf("找到了，他的下标是 %d\n", i);//3
//            break;
//        }
//    }
//    if (i == sz)
//        printf("该数组没有这个数\n");
//    return 0;
//}

//二分查找算法（有序数列）
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int sz = (sizeof(arr)) / sizeof(arr[1]);//元素个数
//    int left = 0;//左下标
//    int right = sz - 1;//右下标
//    int i = 6;//查找的数
//    while (left<=right)
//    {
//        int mid = (left + right) / 2;//mid是中间数的下标
//        if (arr[mid] > i)
//        {
//            right = mid - 1;
//        }
//        else if (arr[mid] < i)
//        {
//            left = mid + 1;
//        }
//        else
//        {
//            printf("找到了,下标是 %d\n", mid);
//            break;
//        }
//    }
//    if (left > right)
//        printf("该数组没有您要找的数");
//    return 0;
//}

//演示多个字符从两端移动，向中间汇聚。
//#include<stdio.h>
//#include<string.h>//strlen
//#include<windows.h>//Sleep(1000)
//#include<stdlib.h>//system执行系统命令
//int main()
//{
//    char arr1[] = "welcome to hubei!!!";
//    char arr2[] = "###################";
//    int left = 0;
//    //int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//因为是字符串 字符串后面有一个\0
//    int right = strlen(arr1) - 1;
//    while (left<=right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//        left++;
//        right--;
//        Sleep(1000);//1000毫秒 = 1秒 打印就是1秒1秒的打印
//        //system("cls");//执行系统命令的一个函数-cls-清空屏幕
//    }
//    printf("%s\n", arr2);
//    return 0;
//}

//模拟用户登录情景，并且只能登录三次。
//(只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序
//== 不能用来比较两个字符串是否相等，应该使用一个库函数 - strcmp
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char password[20] = { 0 };
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        printf("请输入您的密码:>");
//        scanf("%s", &password);
//        if (strcmp(password,"123456") == 0)//如果相等返回值是0 0==0为真 执行语句
//        //如果第一个字符串大于第二个字符串就会返回一个大于0的数字。
//         //if(password == 123456)      //== 不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp
//        {
//            printf("登录成功\n");
//            break;
//        }
//        else
//        {
//            printf("登录失败\n");
//        }
//    }
//    if (i == 3)
//    {
//        printf("三次密码均错误，退出程序\n");
//    }
//    return 0;
//}

//习题1//结果是0
//#include<stdio.h>
//int main()
//{
//    int a = 1;
//    int b = 0;
//    int func(int a);
//    {
//        
//        switch (a)
//        {
//        case 1:b = 30;
//        case 2:b = 20;
//        case 3:b = 16;
//        default:b = 0;
//        }
//    }
//    printf("%d\n", b);
//    return 0;
//}

//习题2//结果是hellothird
//#include<stdio.h>
//int main()
//{
//    int x = 3;
//    int y = 3;
//    switch (x % 2)
//    {
//    case 1:
//        switch (y)
//        {
//        case 0:
//            printf("first");
//        case 1:printf("second");
//        default:printf("hello");
//        }
//    case 2:
//        printf("third");
//    }
//    return 0;
//}

//将三个数按从大到小输出
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    scanf("%d%d%d", &a, &b, &c);
//    if (a < b)
//    {
//        d = a;
//        a = b;
//        b = d;
//    }
//    if (a < c)
//    {
//        d = a;
//        a = c;
//        c = d;
//    }
//    if (b < c)
//    {
//        d = b;
//        b = c;
//        c = d;
//    }
//    printf("%d %d %d\n", a, b, c);//算法实现，a放最大值，b次之，c放最小值。
//    return 0;
//}

//打印1-100之间所有3的倍数的数字
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 100; i++)
//    {
//        if(i%3==0)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}

//给定两个数，求这两个数的最大公约数（辗转相除法）
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d%d", &a, &b);
//    while (a%b)
//    {
//        c = a % b;//c是余数
//        a = b;
//        b = c;
//    }
//    printf("%d\n", b);
//    return 0;
//}

//打印1000-2000之间的闰年
//1、能被4整除并且不能被100整除是闰年
//2、能被400整除是闰年
//#include<stdio.h>//方法一
//int main()
//{
//    int year = 0;
//    int count = 0;
//    for (year = 1000; year <= 2000; year++)
//    {
//        if (year % 4 == 0 && year % 100 != 0)
//        {
//            printf("%d ", year);
//            count++;
//        }
//        else if (year % 400 == 0)
//        {
//            printf("%d ", year);
//            count++;
//        }
//    }
//    printf("\ncount = %d\n", count);
//    return 0;
//}
//#include<stdio.h>//方法二
//int main()
//{
//    int year = 0;
//    int count = 0;
//    for (year = 1000; year <= 2000; year++)
//    {
//        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//        {
//            printf("%d ", year);
//            count++;
//        }
//    }
//    printf("\ncount = %d\n", count);
//    return 0;
//}

//打印100-200之间的素数
//#include<stdio.h>//方法一：试除法
//int main()
//{
//    int a = 0;
//    int count = 0;
//    for (a = 100; a <= 200; a++)
//    {
//        int b = 0;
//        for (b = 2; b < a; b++)
//        {
//            if (a % b == 0)//2到a-1的数字全部除一遍
//            {
//                break;
//            }
//        }
//        if (a == b)
//        {
//            count++;
//            printf("%d ", a);
//        }
//    }
//    printf("\n%d\n", count);
//    return 0;
//}
//#include<stdio.h>//方法二：开平方法 x和y至少有一个数字<=开平方a
//#include<math.h>//sqrt是开平方的数学库函数
//int main()
//{
//    int a = 0;
//    int count = 0;
//    for (a = 100; a <= 200; a++)
//    {
//        int b = 0;
//        for (b = 2; b <= sqrt(a); b++)
//        {
//            if (a % b == 0)
//            {
//                break;
//            }
//        }
//        if (b > sqrt(a))
//        {
//            count++;
//            printf("%d ", a);
//        }
//    }
//    printf("\n%d\n", count);
//    return 0;
//}

//习题1：结果是8
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    for (a = 1, b = 1; a <= 100; a++)
//    {
//        if (b >= 20)
//        {
//            break;
//        }
//        if (b % 3 == 1)
//        {
//            b = b + 3;
//            continue;
//        }
//        b = b - 5;
//    }
//    printf("%d\n", a);
//    return 0;
//}

//数一下1 - 100的所有整数中出现9的个数    99应该出现两次 一个是个位，一个是十位
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int count = 0;
//    for (a = 1; a <= 100; a++)
//    {
//        if (a % 10 == 9)
//        {
//            count++;
//            printf("%d ", a);
//        }
//        if (a / 10 == 9)
//        {
//            count++;
//            printf("%d ", a);
//        }
//    }
//    printf("\ncount = %d\n", count);//20
//    return 0;
//}

//分数求和 计算1/1-1/2+1/3-1/4+1/5-...+1/99-1/100的值
//#include<stdio.h>//方法一：改变符号
//int main()
//{
//    int i = 0;
//    double sum = 0;
//    int b = 1;
//    for (i = 1; i <= 100; i++)
//    {
//        sum += b * 1.0 / i;
//        b = -b;
//    }
//    printf("%lf\n", sum);
//    return 0;
//}
//#include<stdio.h>//方法二：奇数减偶数（分母）
//int main()
//{
//    int i = 0;
//    double sum1 = 0;
//    double sum2 = 0;
//    double sum = 0;
//    for (i = 1; i <= 100; i += 2)
//    {
//        sum1 += 1.0 / i;
//    }
//    for (i = 2; i <= 100; i += 2)
//    {
//        sum2 += 1.0 / i;
//    }
//    sum = sum1 - sum2;
//    printf("%lf\n", sum);
//    return 0;
//}

//求10个整数的最大值
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int max = arr[0];
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 1; i <= sz; i++)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//    }
//    printf("%d\n", max);
//    return 0;
//}

//9*9乘法口诀表
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 9; i++)//打印9行
//    {
//        int j = 0;
//        for (j = 1; j <= i; j++)//用i控制列
//        {
//            printf("%d*%d=%-3d ",j,i,i * j);//先输出列 在输出行
//        }
//        printf("\n");
//    }
//    return 0;
//}

//猜数字游戏
//1、电脑会生成一个随机数
//2、猜数字
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//    printf("**************************\n");
//    printf("***  1.PLAY  0.EXIT   ****\n");
//    printf("**************************\n");
//}
//void game()
//{
//    //1.生成一个随机数
//    //srand((unsigned int)time(NULL));//()里输入时间戳
//    int ret = rand()%100+1;//生成随机数（1-100）
//    //printf("%d\n", ret);
//    //2.猜数字
//    int guess = 0;
//    while (1)
//    {
//        printf("请猜数字");
//        scanf("%d", &guess);
//        if (guess > ret)
//        {
//            printf("猜大了\n");
//        }
//        else if(guess < ret)
//        {
//            printf("猜小了\n");
//        }
//        else
//        {
//            printf("恭喜你猜对了\n");
//            break;
//        }
//    }
//}
//int main()
//{
//    
//    int input = 0;
//    srand((unsigned int)time(NULL));
//    do
//    {
//        menu();//菜单函数
//        printf("请选择：");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            game();//猜数字游戏
//            break;
//        case 0:
//            printf("退出游戏\n");
//            break;
//        default:
//            printf("请输入 1 or 0 \n");
//            break;
//        }
//    } while (input);
//    return 0;
//}

//goto语句
//#include<stdio.h>
//int main()
//{
//    again:
//    printf("hello\n");//死循环
//    goto again;
//    return 0;
//}

//关机程序
//#include<stdio.h>
//int main()
//{
//    char input[20] = { 0 };
//    //shutdown -s -t 60
//    //system()- 执行系统命令
//    system("shutdown -s -t 60");
//again:
//    printf("请注意，电脑将于一分钟后关机，如果输入NO，就取消关机\n请输入");
//    scanf("%s", input);
//    if (strcmp(input, "NO") == 0)
//    {
//        system("shutdown -a");
//    }
//    else
//    {
//        goto again;
//    }
//    return 0;
//}


//第三节《函数》

//strcpy - 字符串拷贝    strcpy(修改的目的地，"修改的数据")
//#include<stdio.h>
//int main()
//{
//    char arr1[] = { "hello" };
//    char arr2[20] = { "#########" };
//    //                 hello\0
//    strcpy(arr2, arr1);
//    printf("%s\n", arr2);
//    return 0;
//}

//memset（要修改的地址，'要修改的符号'，要修改的个数）
//memort - 内存 set - 设置
//#include<stdio.h>
//int main()
//{
//    char arr[] = "hello world";
//    memset(arr, '#', 5);
//    printf("%s\n", arr);//##### world
//    return 0;
//}

//定义函数
//先写函数怎么使用，然后在实现函数

//类型 函数名(形式参数){函数体}
//int MAX(int x, int y)
//{
//    if (x > y)
//        return x;
//    else
//        return y;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int max = MAX(a, b);
//    printf("%d\n", max);
//    return 0;
//}

//交换两个int变量的值。
//swap函数
//#include<stdio.h>
////void Swap1(int x, int y)
////{
////    int tmp = 0;
////    tmp = x;
////    x = y;//x是20
////    y = tmp;//y是10 但是与a和b没关系
////}
//void Swap2(int* pa, int* pb)
//{
//    int tap = 0;
//    tap = *pa;
//    *pa = *pb;
//    *pb = tap;
//}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    printf("a = %d b = %d\n", a, b);
//    //Swap1(a, b);
//    Swap2(&a, &b);
//    printf("a = %d b = %d\n", a, b);
//    return 0;
//}

//函数的参数
//实参:真实传给函数的参数.实参可以是:常量,变量,表达式,函数等
//无论实参是何种类型的量,在进行函数调用时,它们都必须有确定的值,以便把这些值传送给形参
//形参:是值函数名后括号中的变量,因为形式参数只有在函数被调用的过程中才实例化(分配内存单元)
//形式参数当函数调用完成之后就自动销毁了.因此形式参数只在函数中有效.
//int MAX(int x, int y)//形参
//{
//    if (x > y)
//        return x;
//    else
//        return y;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int max = MAX(a, b);//实参
//    printf("%d\n", max);
//    max = MAX(100, 200 + 5);//实参
//    max = MAX(100, MAX(3,7));
//    printf("%d\n", max);
//    return 0;
//}

//函数的调用
//传值调用:函数的形参和实参分别占有不同内存块,对形参的修改不会影响实参.
//传址调用:传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式.
//这种传参方式可以让函数和函数外边的变量建立起正真的联系,也就是函数内部可以直接操作函数外部的变量

//函数的练习
//1、用函数的方式打印100到200之间的素数。
//#include<math.h>
//int is_prime(int x)
//{
//    int y = 0;
//    for (y = 2; y <= sqrt(x); y++)
//    {
//        if (x % y == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        if (is_prime(i) == 1)//判断i是否为素数
//            printf("%d ", i);
//    }
//    return 0;
//}

//2、用函数的方式打印1000到2000之间的闰年
//int is_leap_year(int x)
//{
//    if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//    {
//        return 1;
//    }
//    else
//        return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int year = 0;
//    for (year = 1000; year <= 2000; year++)
//    {
//        if (is_leap_year(year) == 1)
//        {
//            printf("%d ", year);
//        }
//    }
//    return 0;
//}

//写一个函数，实现一个整形有序数组的二分查找。
//                  int arr[]本质上是一个指针
//int binary_search(int arr[], int i,int sz)
//{
//    //int sz = sizeof(arr) / sizeof(arr[0]);//在内部不能使用这种方式求个数,传过来是首元素的地址
//    int left = 0;
//    int right = sz - 1;
//    
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;
//        if (arr[mid] < i)
//        {
//            left = mid;
//            left++;
//        }
//        else if (arr[mid] > i)
//        {
//            right = mid;
//            right--;
//        }
//        else
//        {
//            return mid;
//        }
//    }
//    return -1;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9 };
//    int i = 7;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int ret = binary_search(arr, i, sz);//(在哪里面找,找谁)
//    if (ret == -1)//如果找到了返回下标，找不到返回-1
//    {
//        printf("找不到\n");
//    }
//    else
//    {
//        printf("它的小标是%d\n", ret);
//    }
//    return 0;
//}

//写一个函数每调用一次这个函数，就会将num的值增加1
//void Add(int* p)
//{
//    (*p)++;
//}
//#include<stdio.h>
//int main()
//{
//    int num = 0;
//    Add(&num);
//    printf("%d\n", num);
//    Add(&num);
//    printf("%d\n", num);
//    Add(&num);
//    printf("%d\n", num);
//}

//函数的嵌套调用
//void new_line()
//{
//    printf("呵呵\n");
//}
//void three_line()
//{
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        new_line();
//    }
//}
//#include<stdio.h>
//int main()
//{
//    three_line();
//    return 0;
//}

//链式访问
//把一个函数的返回值作为另一个函数的参数。
//#include<stdio.h>
//int main()
//{
//    int len = 0;
//    len = strlen("abc");
//    printf("%d\n", len);
//    printf("%d\n", strlen("abc"));//链式访问
//    return 0;
//}

//printf每一个这样的函数返回的是打印的字符的个数
//#include<stdio.h>
//int main()
//{
//    printf("%d", printf("%d", printf("%d", 43)));//4321
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int sum = 0;
//    sum = Add(a, b);
//    printf("%d\n", sum);
//    return 0;
//}
//int Add(int x, int y)
//{
//    int z = x + y;
//    return z;
//}

//函数递归(大事化小)    自己调用自己
//程序调用自身的编程技巧称为递归
// 递归的两个必要条件
//存在限制条件，当满足这个限制条件的时候，递归便不再继续。每次递归调用之后越来越接近这个限制条件。
//每次递归调用之后越来越接近这个限制条件。

//函数递归的练习
//接受一个整型值（无符号），按照顺序打印它的每一位。例如︰输入∶1234，输出1234.
// print(1234)
// print(123)   4
// print(12)    34
// print(1)     234
//void print(int n)
//{
//    if (n>9)
//    {
//        print(n / 10);
//    }
//    printf("%d ", n % 10);//递归之后往上返回
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    print(n);
//    return 0;
//}

//编写函数，求字符串长度
//int my_strlen(char* str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//#include<stdio.h>
//int main()
//{
//    char arr[] = "abc";
//    int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//    printf("%d\n", len);
//    return 0;
//}

//编写函数不允许创建临时变量，求字符串长度（递归）
// my_strlen("abc")
// 1+my_strlen("bc")
// 1+1+my_strlen("c")
// 1+1+1+my_strlen("")
// 1+1+1+0
// 3
//int my_strlen(char* str)
//{
//    if (*str != '\0')
//    {
//        return 1 + my_strlen(str + 1);
//    }
//    else
//        return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char arr[] = "abc";
//    int len = my_strlen(arr);
//    printf("%d\n", len);
//    return 0;
//}

//递归与迭代
//递归就是自己调用自己。迭代就是重复做一个事情与循环很相似
//求n的阶乘
//#include<stdio.h>
//int Fac1(int n)//循环的方式
//{
//    int i = 0;
//    int ret = 1;
//    for (i = 1; i <= n; i++)
//    {
//        ret *= i;
//    }
//    return ret;
//}
//int Fac2(int n)//递归的方式
//{
//    if (n <= 1)
//    {
//        return 1;
//    }
//    else
//    {
//        return n * Fac2(n - 1);
//    }
//}
//int main()
//{
//    int n = 0;
//    int ret = 0;
//    scanf("%d", &n);
//    //ret = Fac1(n);//循环的方式
//    ret = Fac2(n);//递归的方式
//    printf("%d\n", ret);
//    return 0;
//}

//求第n个翡波那契数（不考虑溢出）
//斐波那契数列(前两个数之和是第三个数)
//1 1 2 3 5 8 13 21 34 55 ...
//#include<stdio.h>
////int Fib(int n)//递归方法很慢 不适合这种
////{
////    if (n <= 2)
////        return 1;
////    else
////    {
////        return Fib(n - 1) + Fib(n - 2);
////    }
////}
//int Fib(int n)//迭代
//{
//    int a = 1;
//    int b = 1;
//    int c = 1;
//    while (n > 2)
//    {
//        c = a + b;
//        a = b;
//        b = c;
//        n--;
//    }
//    return c;
//}
//int main()
//{
//    int n = 0;
//    int ret = 0;
//    scanf("%d", &n);
//    ret = Fib(n);
//    printf("ret = %d\n", ret);
//    return 0;
//}


//第四节《数组》

//一维数组
//数组的创建 数组是一组相同类型元素的集合。
//元素类型  数组名 [数组的大小：常量表达式]

//sizeof是计算所占空间的大小  strlen是求字符串的长度 '\0'之前的字符个数，遇到\0才停止
//#include<stdio.h>
//int main()
//{
//    char arr1[] = "abc";
//    char arr2[] = { 'a','b','c' };
//    printf("%d\n", sizeof(arr1));//4
//    printf("%d\n", sizeof(arr2));//3
//    printf("%d\n", strlen(arr1));//3
//    printf("%d\n", strlen(arr2));//随机值
//    return 0;
//}

//数组在内存中是连续存放的
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0; i <= sz; i++)
//    {
//        printf("arr[%d] = %p\n", i, &arr[i]);
//    }
//    return 0;
//}

//二维数组
//元素类型  数组名 [行] [列]     列不能省略
//#include<stdio.h>
//int main()
//{
//    int arr[3][4] = { {1,2,3},{4,5} };
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        int j = 0;
//        for (j = 0; j < 4; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//内存
//数组在内存中是连续存放的
//#include<stdio.h>
//int main()
//{
//    int arr[3][4] = { {1,2,3},{4,5} };
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        int j = 0;
//        for (j = 0; j < 4; j++)
//        {
//            printf("arr[%d][%d] = %p\n",i,j, &arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//数组作为函数参数
//冒泡排序      核心是两两相邻的数字比较
//#include<stdio.h>
//void bubble_sort(int arr[],int sz)
//{
//    //确定冒泡排序的趟数
//    int i = 0;
//    for (i = 0; i < sz - 1; i++)
//    {
//        //每一趟冒泡排序
//        int flag = 1;//假设这趟要排序的数据已近有序
//        int j = 0;
//        for (j = 0; j < sz - 1-i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//                flag = 0;//本趟排序的数据其实不完全有序
//            }
//        }
//        if (flag == 1)
//        {
//            break;
//        }
//    }
//}
//int main()
//{
//    int arr [] = {10,9,8,7,6,5,4,3,2,1};
//    //对arr进行排序，排成升序
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    bubble_sort(arr,sz);//冒泡排序函数
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//数组名就是首元素地址
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    //1、sizeof(数组名)
//    //数组名表示的是整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
//    //2、&数组名
//    //数组名代表整个数组，&数组名，取出的是整个数组的地址
//    printf("%p\n", arr);
//    printf("%p\n", &arr[0]);//两个地址是一样的
//    printf("%d\n", *arr);//1
//    return 0;
//}

//交换两个int变量的值，不能使用第三个变量。即a=3,b=5，交换之后a=5，b=3；（品茗）
//#include<stdio.h>
//int main()
//{
//    int a = 3;
//    int b = 5;
//    printf("交换前：a=%d b=%d\n", a, b);
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//    //a = a + b;//a是和，b是b
//    //b = a - b;//b是3
//    //a = a - b;//a是5
//    printf("交换后：a=%d b=%d\n", a, b);
//    return 0;
//}

//找出只出现一次的数(Leetcode)
//暴力求解
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,1,2,3,4 };
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0; i < sz; i++)
//    {
//        int j = 0;
//        int count = 0;
//        for (j = 0; j < sz; j++)
//        {
//            if (arr[i] == arr[j])
//            {
//                count++;
//            }
//        }
//        if (count == 1)
//        {
//            printf("找到了它是 %d\n", arr[i]);
//            break;
//        }
//    }
//    return 0;
//}
//异或求解
//异或满足交换律
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,1,2,3,4 };
//    int i = 0;
//    int ret = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0; i < sz; i++)
//    {
//        ret ^= arr[i];
//    }
//    printf("找到了它是 %d\n", ret);
//    return 0;
//}


//第五节《操作符详解》

//算术操作符 移位操作符 位操作符 赋值操作符 单目操作符 
//关系操作符 逻辑操作符 条件操作符 逗号表达式 下标引用、函数调用和结构成员

//1.算数操作符/和%
//#include<stdio.h>
//int main()
//{
//    double a = 5 / 2.0;
//    printf("%lf\n", a);//2.500000
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    double a = 5 % 2.0;//取余操作符 左右两边必须都为整数
//    printf("%lf\n", a);
//    return 0;
//}

//2.移位操作符
// 不要移动负数位>>-1  error
// >>右移操作符：1、算术右移：右边丢弃，左边补符号位（通常）。2、逻辑右移：右边丢弃，左边补0。
//#include<stdio.h>
//int main()
//{
//    int a = 16;
//    int b = a >> 2;
//    //>>---右移操作符---移动的是二进制位。移动1相当于那个数除以2；
//    printf("%d\n", b);//4
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = -1;
//    //10000000000000000000000000000001原码
//    //存储到内存中的是补码
//    //11111111111111111111111111111110  反码
//    //11111111111111111111111111111111  补码 -1的补码全是1
//    int b = a >> 1;//移动的也是补码
//    printf("%d\n", b);//-1
//    return 0;
//}

//<<---左移操作符---移动的是二进制位。移动1相当于那个数乘以2；
//#include<stdio.h>
//int main()
//{
//    int a = 5;
//    //00000000000000000000000000000101  补码
//    //00000000000000000000000000001010  
//    int b = a << 1;
//    printf("%d\n", b);//10
//    return 0;
//}

//位操作符（操作数必须是整数）
//& 按位与 
//| 按位或
//^ 按位异或

//练习
//1、交换两个int变量的值，不能使用第三个变量。即a=3,b=5，交换之后a=5，b=3；
//#include<stdio.h>
//int main()
//{
//    int a = 3;
//    int b = 5;
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//    printf("%d\n%d\n", a, b);
//    return 0;
//}

//2、编写代码实现;求一个整数存储在内存中的二进制中1的个数。
//#include<stdio.h>
//int main()
//{
//    int num = 0;
//    printf("请一个整数");
//    scanf("%d", &num);
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if (1 == ((num >> i) & 1))
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}

//复合赋值符
//+= -= *= /= %= >>= <<= %= |= ^= 
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    a = a >> 1;
//    a >>= 1;
//
//    a = a & 1;
//    a &= 1;
//    return 0;
//}

//单目操作符 只有一个操作数
// !逻辑反操作   -负值 +正值 &取地址    sizeof操作数的类型长度(以字节为单位)
// ~对一个数的二进制按位取反    --前置后置  ++前置后置  *间接访问操作数(解引用操作符)    (类型)强制类型转换
// !逻辑反操作
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    if (!a)//a为假就执行语句
//    {
//        printf("呵呵\n");
//    }
//    if (a)//a为真就执行语句
//    {
//        printf("哈哈\n");
//    }
//    return 0;
//}

//-负值
//#include<stdio.h>
//int main()
//{
//    int a = -5;
//    a = -a;
//    printf("%d\n", a);
//    return 0;
//}

//&取地址  *间接访问操作数(解引用操作符)
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int* p = &a;//取地址操作符
//    *p = 20;//解引用操作符
//    printf("%d\n", a);
//    return 0;
//}

//sizeof操作数的类型长度(以字节为单位)
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    char c = 'r';
//    char* p = &c;
//    int arr[10] = { 0 };
//    //sizeof计算的是变量所占空间的大小   单位是字节
//    printf("%d\n", sizeof(a));//4
//    printf("%d\n", sizeof(int));//4
//
//    printf("%d\n", sizeof(c));//1
//    printf("%d\n", sizeof(char));//1
//
//    printf("%d\n", sizeof(p));//8   指针是4or8个字节 64位是8个字节
//    printf("%d\n", sizeof(char*));//8
//
//    printf("%d\n", sizeof(arr));//40
//    printf("%d\n", sizeof(int [10]));//40
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    short s = 0;
//    int a = 10;
//    printf("%d\n", sizeof(s = a + 5));//2
//    printf("%d\n", s);//0   s=a+5是在sizeof里 sizeof内部表达式是不会真实进行运算的
//    return 0;
//}

//~对一个数的二进制按位取反
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    //~按位取反、
//    //00000000000000000000000000000000  补码
//    //11111111111111111111111111111111  按位取反后的补码
//    //11111111111111111111111111111110  按位取反后的反码
//    //10000000000000000000000000000001  原码
//    printf("%d\n", ~a);//打印的是原码
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 11;
//    //00000000000000000000000000001011
//    //00000000000000000000000000000100
//    //00000000000000000000000000001111
//    a = a | (1 << 2);
//    printf("%d\n", a);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 15;
//    //00000000000000000000000000001111
//    //11111111111111111111111111111011
//    //00000000000000000000000000001011
//    a = a & (~(1 << 2));
//    printf("%d\n", a);
//    return 0;
//}

//--前置后置  ++前置后置
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    //printf("%d\n", ++a);//11    前置++ 先自增后赋值
//    printf("%d\n", a++);//10      后置++ 先赋值后自增
//    return 0;
//}

//(类型)强制类型转换
//#include<stdio.h>
//int main()
//{
//    int a = (int)3.14;//强制类型转换
//    return 0;
//}

//练习sizeof
//#include<stdio.h>
//void test1(int arr[])//这里arr是指针
//{
//    printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])//ch是指针
//{
//    printf("%d\n", sizeof(ch));
//}
//int main()
//{
//    int arr[10] = { 0 };
//    char ch[10] = { 0 };
//    printf("%d\n", sizeof(arr));//40
//    printf("%d\n", sizeof(ch));//10
//    test1(arr);//4  数组在进行传参的时候 传的是首元素地址
//    test2(ch);//4   用指针来接收 也就是4/8,32位是4 64位是8
//    return 0;
//}

//关系操作符
//> >=  <   <=  !=  ==

//逻辑操作符
//&&逻辑与         ||逻辑或
//#include<stdio.h>
//int main()
//{
//    int a = 3;
//    int b = 5;
//    //int c = a && b;//逻辑与
//    int c = a || b;//逻辑或
//    printf("%d\n", c);
//    return 0;
//}

//练习程序输出的结果是什么(360笔试题)
//#include<stdio.h>
//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//    i = a++ && ++b && d++;//a先是0 0为假  &&左边为假 右边不管是什么都不进行运算了
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);//1，2，3，4
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i = 0, a = 1, b = 2, c = 3, d = 4;
//    i = a++ && ++b && d++;
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);//2，3，3，5
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i = 0, a = 1, b = 2, c = 3, d = 4;
//    i = a++ || ++b || d++;//||左边为真 右边不管是什么都不进行运算了
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);//2，2，3，4
//    return 0;
//}

//条件操作符
//exp1 ? exp2 : exp3表达式一为真结果是表达式二，如果表达式一为假 结果是表达式三
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    if (a > 5)
//        b = 3;
//    else
//        b = -3;
//
//    b = (a > 5 ? 3 : -3);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int max = 0;
//    if (a > b)
//        max = a;
//    else
//        max = b;
//
//    max = (a > b ? a : b);
//    return 0;
//}

//逗号表达式
// exp1,exp2,exp3,...expn
//逗号表达式，就是用逗号隔开的多个表达式。逗号表达式，从左向右依次执行。整个表达式的结果是最后一个表达式的结果。
//#include<stdio.h>
//int main()
//{
//    int a = 1;
//    int b = 2;
//    int c = (a > b, a = b + 10, a, b = a + 1);//第一个为假跳过 第二个为真a=12 第三个为真b=13
//    printf("%d\n", c);//13
//    return 0;
//}

//下标引用、函数调用和结构成员

//1.[]下标引用操作符
//操作数:一个数组名+一个索引值
//#include<stdio.h>
//int main()
//{
//    int a[10] = { 0 };
//    a[4] = 10;
//    return 0;
//}

//2.()函数调用操作符
//接受一个或者多个操作数:第一个操作数是函数名，剩余的操作数就是传递给函数的参数。
//#include<stdio.h>
//int get_max(int x, int y)//()这个是定义函数的语法规则
//{
//    return x > y ? x : y;
//}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int max = get_max(a, b);//()就是函数调用操作符
//    //三个操作数，get_max,a,b
//    printf("%d\n", max);
//    return 0;
//}

//3.访问一个结构的成员
//.     结构体.成员名
//->    结构体指针->成员名
//#include<stdio.h>
////学生,创建一个结构体类型-struct 
//struct Stu
//{
//    //成员变量
//    char name[20];
//    int age;
//    char id[20];
//};
//int main()
//{
//    //使用struct Stu 这个类型创建了一个学生对象s1，并初始化
//    struct Stu s1 = { "何德光",21,"2340210215" };//创建了一个地址来存放数据
//    struct Stu* ps = &s1;
//    //结构体指针->成员名
//    printf("%s\n", ps->name);
//    printf("%d\n", ps->age);
//    printf("%s\n", ps->id);
//
//    //printf("%s\n", (*ps).name);
//    //printf("%d\n", (*ps).age);
//    //printf("%s\n", (*ps).id);
//    
//    //printf("%s\n", s1.name);
//    //printf("%d\n", s1.age);
//    //printf("%s\n", s1.id);
//    //结构体变量.成员名
//    return 0;
//}

//表达式求值

//隐式类型转换
//#include<stdio.h>
//int main()
//{
//    char a = 3;
//    //00000000000000000000000000000011
//    //00000011  -   a
//    char b = 127;
//    //00000000000000000000000001111111
//    //01111111  -   b
//
//    //00000000000000000000000000000011  -   a的整形提升
//    //00000000000000000000000001111111  -   b的整形提升
//    //00000000000000000000000010000010  -   130
//    char c = a + b;//整型提升：整形提升是按照变量的数据类型的符号位来提升的
//    //10000010  -   c
//    //11111111111111111111111110000010  -   c的整形提升（补码）
//    //11111111111111111111111110000001  -   反码
//    //10000000000000000000000001111110  -   原码  -126
//    printf("%d\n", c);//-126
//    return 0;
//}

//练习整形提升1
//#include<stdio.h>
//int main()
//{
//    char a = 0xb6;//10110110    b6  两个十六进制的数
//    short b = 0xb600;//1011011000000000
//    int c = 0xb6000000;//10110110000000000000000000000000
//    if (a == 0xb6)//a整形提升11111111111111111111111110110110   a的补码
//                           //11111111111111111111111110110101   a的反码
//                           //10000000000000000000000001001010   a的原码-74
//        printf("a");
//    if (b == 0xb600)//b整形提升11111111111111111011011000000000    b的补码
//                             //11111111111111111011010111111111    b的反码
//                             //10000000000000000100101000000000    b的原码-18944
//        printf("b");
//    if (c == 0xb6000000)//10110110000000000000000000000000    c的补码
//                        //10110101111111111111111111111111    c的反码
//                        //11001010000000000000000000000000    c的原码-1241513984
//        printf("c");//只打印c
//    printf("\n%d\n%d\n%d\n", a, b, c);
//    return 0;
//}

//练习整形提升2
//#include<stdio.h>
//int main()
//{
//    char c = 1;
//    printf("%u\n", sizeof(c));//1
//    printf("%u\n", sizeof(+c));//4整形提升
//    printf("%u\n", sizeof(!c));//1
//    return 0;
//}

//算术转换
//long double
//double
//float
//unsigned long int
//long int
//unsigned int
//int

//操作符的属性
//复杂表达式的求值有三个影响的因素
//1、操作符的优先级
//2、操作符的结合性
//3、是否控制求值顺序
//当相邻的两个操作符优先级不相同的时候，先算优先级高的
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int c = b + a * 3;//*优先+
//    printf("%d\n", c);
//    return 0;
//}

//非法表达式（无法确定值）
//#include<stdio.h>
//int main()
//{
//    int i = 10;
//    i = i-- - --i * (i = -3) * i++ + ++i;
//    printf("i = %d\n", i);
//    return 0;
//}

//非法表达式（无法确定值）
//#include<stdio.h>
//int fun()
//{
//    static int count = 1;
//    return ++count;
//}
//int main()
//{
//    int answer;
//    answer = fun() - fun() * fun();
//    printf("%d\n", answer);
//    return 0;
//}


//第六节《指针》

//1、指针是什么
//指针是个变量，存放内存单元的地址（编号）
//指针就是变量，用来存放地址的变量。（存放在指针中的值都被当作地址处理）
//指针的大小在32位平台是4个字节，在64为平台是8个字节
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int* p = &a;//p是指针变量
//    return 0;
//}

//2、指针和指针类型
// 作用一：指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
// 作用二：指针类型决定了+- 向后跳几个字节
//#include<stdio.h>
//int main()
//{
//    pritnf("%d\n", sizeof(int*));//4
//    pritnf("%d\n", sizeof(short*));//4
//    pritnf("%d\n", sizeof(char*));//4
//    pritnf("%d\n", sizeof(double*));//4
//    return 0;
//}

//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//#include<stdio.h>
//int main()
//{
//    int a = 0x11223344;//a的地址里面放的是11223344
//    int* pa = &a;//能够访问四个字节
//    *pa = 0;//a的地址里面放的是00000000
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pa = &a;//只能访问一个字节 改变数据只改变一个字节
//    *pa = 0;//a的地址里面放的是11223300
//    return 0;
//}

//指针+-整数
//指针类型决定了+- 向后跳几个字节，决定了指针走一步走多远（指针的步长）
//#include<stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    int* pa = &a;
//    char* pc = &a;
//
//    printf("%p\n", pa);//000000F39D6FF9F4
//    printf("%p\n", pa+1);//000000F39D6FF9F8
//    
//    printf("%p\n", pc);//000000F39D6FF9F4
//    printf("%p\n", pc+1);//000000F39D6FF9F5
//
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    //int* p = arr;//数组名，首元素地址。四个字节 能访问40个字节
//    char* p = arr;//一个字节 能访问10个字节
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        *(p + i) = 1;
//    }
//    return 0;
//}

//野指针
//概念：野指针就是指针指向的位置是不可知的（随机的，不正确的，没有明确限制的）
//1、指针未初始化
//#include<stdio.h>
//int main()
//{
//    int a;//局部变量不初始化，默认是随机值
//    int* p;//局部的指针变量，就被初始化随机值
//    *p = 20;
//    return 0;
//}

//2、指针越界访问
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    int* p = &arr;
//    int i = 0;
//    for (i = 0; i < 11; i++)//越界了 p就是野指针
//    {
//        p++;
//    }
//    return 0;
//}

//3、指针指向空间释放
//#include<stdio.h>
//int* test()
//{
//    int a = 10;//局部变量，出了这个范围就销毁了，内存空间返回给操作系统了
//    return &a;
//}
//int main()
//{
//    int* p = test();//p确实可以接受到a的地址，但是空间不属于当前编译器，越界了
//    *p = 20;
//    return 0;
//}

//4、指针使用之间检查有效性
//#include<stdio.h>
//int main()
//{
//    int* p = NULL;
//    int a = 10;
//    p = &a;
//    if (p != NULL)
//    {
//        *p = 20;
//    }
//    return 0;
//}

//指针运算
//指针+-整数
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int* p = arr;
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d\n", *p);
//        p += 1;
//    }
//    return 0;
//}

//指针-地址 得到中间元素的个数
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    printf("%d\n", &arr[9] - &arr[0]);//9 只能指向同一个空间才能相减
//    return 0;
//}

//strlen    -   求字符串长度（指针）
//#include<stdio.h>
//int my_strlen(char* str)
//{
//    char* start = str;
//    char* end = str;
//    while (*end != '\0')
//    {
//        end++;
//    }
//    return end - start;
//}
//int main()
//{
//    char arr[] = "abc";
//    int len = my_strlen(arr);
//    printf("%d\n", len);
//    return 0;
//}

//指针关系运算
//允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较
//但是不允许与指向第一个元素之前的那个内存位置的指针进行比较。
//#include<stdio.h>
//#define N_VALUES 5
//int main()
//{
//    float values[N_VALUES];
//    float* vp;
//    for (vp = &values[N_VALUES]; vp > &values[0];)
//    {
//        *--vp = 0;
//    }
//    return 0;
//}

//指针和数组
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    printf("%p\n", arr);//地址-首元素的地址
//    printf("%p\n", arr + 1);//+4
//    printf("%p\n", &arr[0]);
//    printf("%p\n", &arr[0] + 1);//+4
//    printf("%p\n", &arr);
//    printf("%p\n", &arr + 1);//+4*10=40
//    //1、&arr- &数组名 - 数组名不是首元素的地址-数组名表示整个数组 - &数组名 取出的是整个数组的地址
//    //2、sizeof(arr)- sizeof(数组名)-数组名表示的整个数组-sizeof(数组名)计算的是整个数组的大小
//    return 0;
//}

//数组通过指针访问
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    int* p = arr;
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        *(p + i) = i;
//    }
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", *(p + i));
//    }
//    /*for (i = 0; i < 10; i++)
//    {
//        printf("%p   ===   %p\n", p + i, &arr[i]);
//    }*/
//    return 0;
//}

//二级指针
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int* pa = &a;//pa就是一级指针变量，int* 就是一级指针类型
//    int** ppa = &pa;//ppa就是二级指针变量
//    int*** pppa = &ppa;//三级指针
//    **ppa = 20;
//    printf("%d\n", **ppa);//20
//    printf("%d\n", a);//20
//    return 0;
//}

//指针数组 - 数组 - 存放指针的数组
//数组指针 - 指针
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int c = 30;
//    int* pa = &a;
//    int* pb = &b;
//    int* pc = &c;
//    //整形数组 - 存放整形
//    //字符数组 - 存放字符
//    //指针数组 - 存放指针
//    //int arr[10];
//    int* arr[3] = { &a,&b,&c };
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        printf("%d\n", *(arr[i]));
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int i = 2;
//    for (i = 1; i++ < 4;);
//    i = i + 5;
//    printf("%d", i);//10
//    return 0;
//}

//创建一个整形数组，完成对数组的操作
//#include<stdio.h>
//void Init(int arr[], int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        arr[i] = 0;
//    }
//}
//void Print(int arr[], int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//void Reverse(int arr[],int sz)
//{
//    int left = 0;
//    int right = sz - 1;
//    while (left < right)
//    {
//        int tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    //Init(arr, sz);//把数组初始化0
//    Print(arr, sz);//打印
//    Reverse(arr,sz);//逆序
//    Print(arr, sz);//打印
//    return 0;
//}

//交换数组，将数组a中的内容和数组b中的内容进行交换。（数组一样大）
//#include<stdio.h>
//int main()
//{
//    int arr1[] = { 1,3,5,7,9 };
//    int arr2[] = { 2,4,6,8,0 };
//    int tmp = 0;
//    int i = 0;
//    int sz = sizeof(arr1) / sizeof(arr1[0]);
//    for (i = 0; i < sz; i++)
//    {
//        tmp = arr1[i];
//        arr1[i] = arr2[i];
//        arr2[i] = tmp;
//        printf("%d ", arr1[i]);
//        printf("%d ", arr2[i]);
//        printf("\n");
//    }
//    return 0;
//}

//下面代码的结果是
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;//强制类型转换
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;//每次操作两个字节，一共移动了8个字节 也就是前两个数
//    }
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);//00345
//    }
//    return 0;
//}

//下面代码的结果是
//#include<stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;//只能操作一个字节
//    printf("%x\n", a);//11223300
//    return 0;
//}

// 下面代码的结果是
//#include<stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))//sizeof()-计算变量/类型所占内存的大小 恒大于等于0 是无符号数
//                      //在比较大小的时候 先把i变为无符号数 也就是-1的符号位变成最高位
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int a, b, c;
//    a = 5;
//    c = ++a;
//    b = ++c, c++, ++a, a++;//赋值操作符是高于逗号操作符的
//    b += a++ + c;//+的优先级高于+=
//    printf("a = %d b = %d c = %d:", a, b, c);//9 23 8
//    return 0;
//}

//写一个函数返回参数二进制中1的个数
//方法一
//#include<stdio.h>
//int he_one(unsigned int n)
//{
//    int count = 0;
//    while (n)
//    {
//        if (n % 2 == 1)
//        {
//            count++;
//        }
//        n = n / 2;
//    }
//    return count;
//}
//int main()
//{
//    int i = 0;
//    scanf("%d", &i);
//    //写一个函数求i的二进制（补码）表示中有几个1
//    int count = he_one(i);//13  1101
//    printf("%d\n", count);
//    return 0;
//}
//方法二
//#include<stdio.h>
//int he_one(int n)
//{
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if (((n >> i) & 1) == 1)
//        {
//            count++;
//        }
//    }
//    return count;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int count = he_one(n);
//    printf("%d\n", count);
//    return 0;
//}
//方法三（高效）
//#include<stdio.h>
//int he_one(int n)
//{
//    int count = 0;
//    while (n)
//    {
//        n = n & (n - 1);
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    int i = 0;
//    scanf("%d", &i);
//    int count = he_one(i);
//    printf("%d\n", count);
//    return 0;
//}

//写一个函数两个int整数m和n的二进制表达中，有多少个位不同
//#include<stdio.h>
//int he_one(int m, int n)
//{
//    int tmp = m ^ n;
//    int count = 0;
//    while (tmp)
//    {
//        tmp = tmp & (tmp - 1);
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d%d", &m, &n);
//    int count = he_one(m, n);
//    printf("%d\n", count);
//    return 0;
//}

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印二进制序列
//#include<stdio.h>
//void print(int n)
//{
//    int i = 0;
//    printf("奇数位 ");
//    for (i = 30; i >= 0; i -= 2)
//    {
//        printf("%d ", (n >> i) & 1);
//    }
//    printf("\n");
//    printf("偶数位 ");
//    for (i = 31; i >= 0; i -= 2)
//    {
//        printf("%d ", (n >> i) & 1);
//    }
//    printf("\n");
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    print(n);
//    return 0;
//}

//写一个函数打印arr数组的内容，不使用数组下标，使用指针。arr是一个整形一维数组。
//#include<stdio.h>
//void print(int* p, int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", *(p + i));
//    }
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    print(arr, sz);
//    return 0;
//}

//程序分析
//#include<stdio.h>
//int Fun(int n)
//{
//    if (n == 5)
//        return 2;
//    else
//        return 2 * Fun(n + 1);
//}
//int main()
//{
//    int n = 2;
//    Fun(n);
//    printf("%d", Fun(n));//16
//}

//实现一个函数 打印乘法口诀表 口诀表的行数和列数自己指定如输入9，输出9 * 9口诀表，输入12输出12 * 12的乘法口诀表
//#include<stdio.h>
//void print_table(int n)
//{
//    int i = 0;
//    for (i = 1; i <= n; i++)
//    {
//        int j = 0;
//        for (j = 1; j <= i; j++)
//        {
//            printf("%d*%d=%-3d ", j, i, i * j);
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    print_table(n);
//    return 0;
//}

//递归方式实现打印一个整数的每一位
//#include<stdio.h>
//void he_one(int n)
//{
//    if (n > 9)
//    {
//        he_one(n / 10);
//    }
//    printf("%d ", n % 10);
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    he_one(n);
//    return 0;
//}

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//非递归
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = 1;
//    int i = 0;
//    for (i = 1; i <= n; i++)
//    {
//        ret = ret * i;
//    }
//    printf("%d\n", ret);
//    return 0;
//}
//递归
//#include<stdio.h>
//int he_one(int n)
//{
//    if (n <= 1)
//    {
//        return 1;
//    }
//    else
//    {
//        return n * he_one(n - 1);
//    }
//}
//int main()
//{
//    int n = 0;
//    int ret = 0;
//    scanf("%d", &n);
//    ret = he_one(n);
//    printf("%d\n", ret);
//    return 0;
//}

//递归和非递归分别实现strlen
//非递归
//#include<stdio.h>
//int he_one(char* str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//int main()
//{
//    char arr[] = "abc";
//    int count=he_one(arr);
//    printf("%d\n", count);
//    return 0;
//}
//递归
//#include<stdio.h>
//int he_one(char* arr)
//{
//    if (*arr != '\0')
//    {
//        return 1 + he_one(arr + 1);
//    }
//    else
//        return 0;
//}
//int main()
//{
//    char arr[] = "abcd";
//    int count = he_one(arr);
//    printf("%d\n", count);
//    return 0;
//}

//写一个函数reverse_string(char* string)(递归和非递归实现)
//实现：将参数字符串中的字符反向排列
//要求：不能使用C函数库中的字符串操作函数
//#include<stdio.h>//使用了C库函数
//void reverse_string(char* arr)
//{
//    int left = 0;
//    int right = strlen(arr) - 1;
//    while (left < right)
//    {
//        int tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char arr[] = "abcdef";
//    reverse_string(arr);
//    printf("%s\n", arr);
//    return 0;
//}
//#include<stdio.h>//非递归(循环)
//int my_strlen(char* arr)//计数的方法
//{
//    int count = 0;
//    while (*arr != '\0')
//    {
//        count++;
//        arr++;
//    }
//    return count;
//     
//}
//reverse_string(char* arr)
//{
//    int left = 0;
//    int right = my_strlen(arr) - 1;
//    while (left < right)
//    {
//        int tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char arr[] = "abcdef";
//    reverse_string(arr);
//    printf("%s\n", arr);
//    return 0;
//}
//#include<stdio.h>//递归
//int my_strlen(char* arr)
//{
//    int count = 0;
//    while (*arr != '\0')
//    {
//        count++;
//        arr++;
//    }
//    return count;
//}
//void reverse_string(char* arr)
//{
//    char tmp = arr[0];
//    int len = my_strlen(arr);
//    arr[0] = arr[len - 1];
//    arr[len - 1] = '\0';
//    if (my_strlen(arr+1) >= 2)
//    {
//        reverse_string(arr + 1);
//    }
//    arr[len - 1] = tmp;
//}
//int main()
//{
//    char arr[] = "abcdefg";
//    reverse_string(arr);
//    printf("%s\n", arr);
//    return 0;
//}

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的它的数字之和
//例如，调用DigitSum(1729), 则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出19
//#include<stdio.h>
//int DigitSum(int n)
//{
//    if (n > 9)
//    {
//        return DigitSum(n/10) + (n % 10);
//    }
//    else
//    {
//        return n;
//    }
//}
//int main()
//{
//    unsigned int n = 0;
//    scanf("%d", &n);
//    int ret = DigitSum(n);
//    printf("%d\n", ret);
//    return 0;
//}

//编写一个函数递归实现n的k次方
//#include<stdio.h>
//double Pow(int n, int k)
//{
//    if (k < 0)
//    {
//        return (1.0 / Pow(n, -k));
//    }
//    else if (k == 0)
//    {
//        return 1;
//    }
//    else
//    {
//        return n * Pow(n, (k - 1));
//    }
//}
//int main()
//{
//    int n = 0;
//    int k = 0;
//    scanf("%d%d", &n, &k);
//    double ret = Pow(n, k);
//    printf("%lf\n", ret);
//}

//递归和非递归分别实现求第n个斐波那契数（前两个数之和等于等于三个数）
//例如：输入5 输出5 输入10 输出55 输入2 输出1
//#include<stdio.h>//递归
//int Fei(int n)
//{
//    if (n < 3)
//    {
//        return 1;
//    }
//    else
//    {
//        return Fei(n - 1) + Fei(n - 2);
//    }
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = Fei(n);
//    printf("%d\n", ret);
//    return 0;
//}
//#include<stdio.h>//非递归 迭代
//int Die(int n)
//{
//    int a = 1;
//    int b = 1;
//    int c = 1;
//    while (n > 2)
//    {
//        c = a + b;
//        a = b;
//        b = c;
//        n--;
//    }
//    return c;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = Die(n);
//    printf("%d\n", ret);
//    return 0;
//}


//第七节《结构体》

//结构体声明
//结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量,结构的成员可以是标量 数组 指针 甚至是其他结构体
//struct tag    struct是结构体关键字   tag是结构体标签（可替换 如学生是student）
//例如描述一个学生
//#include<stdio.h>
//struct student//struct 结构体关键字 student 结构体标签 struct student 结构体类型
//{
//    //成员变量
//    char name[20];
//    short age;
//    char tele[12];
//    char sex[5];
//}s1,s2,s3;//s1,s2,s3是三个全局结构体变量
//int main()
//{
//    struct student s0;//局部变量
//    return 0;
//}

//#include<stdio.h>
//typedef struct student
//{
//    char name[20];
//    short age;
//    char tele[12];
//    char sex[5];
//}stu;//这里stu是类型     使用了ytpedef就把图纸名字改为了stu
//int main()
//{
//    stu s1;
//    return 0;
//}

//结构体变量的定义和初始化
//#include<stdio.h>
//struct S
//{
//    int a;
//    char c;
//    char arr[20];
//    double d;
//};
//
//struct T
//{
//    char a[10];
//    struct S s;
//    char* pc;
//};
//int main()
//{
//    char arr[] = "hello\n";
//    struct T t = { "hehe",{21,'h',"1230",3.14}, arr};
//    printf("%s\n", t.a);
//    printf("%s\n", t.pc);
//    printf("%d\n", t.s.a);
//    printf("%c\n", t.s.c);
//    printf("%s\n", t.s.arr);
//    printf("%lf\n", t.s.d);
//    return 0;
//}

//结构体成员的访问
//结构体变量访问成员 结构变量的成员是通过点操作符(.)访问的。点操作符接受两个操作数。
//#include<stdio.h>
//typedef struct Stu
//{
//    char name[20];
//    short age;
//    char tele[12];
//    char sex[5];
//}Stu;
//void Print1(Stu tmp)
//{
//    printf("name: %s\n", tmp.name);
//    printf("age: %d\n", tmp.age);
//    printf("tele: %s\n", tmp.tele);
//    printf("sex: %s\n", tmp.sex);
//}
//void Print2(Stu* ps)
//{
//    printf("name: %s\n", ps->name);
//    printf("age: %d\n", ps->age);
//    printf("tele: %s\n", ps->tele);
//    printf("sex: %s\n", ps->sex);
//}
//int main()
//{
//    Stu s = { "张三",51,"15528880688","男" };
//    Print1(s);
//    Print2(&s);
//    return 0;
//}


//第八节《实用调试技巧》

//调试Debug又称除错 是发现和减少计算机程序或电子仪器设备中程序错误的一个过程
//Debug通常称为调试版本，它包含调试信息，并且不作任何优化，便于程序员调试程序
//Release称为发布版本，它往往是进行了各种优化，使得程序在代码大小和运行速度上都是最优的，以便用户很好的使用
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 100; i++)
//    {
//        printf("%d ", i);
//    }
//    system("pause");//system 系统命令 pause暂停
//    return 0;
//}

//如果使用Debug则会死循环
//如果使用Release则打印12个hehe
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int i = 0;
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        printf("hehe\n");
//        arr[i] = 0;//死循环 栈溢出
//    }
//    system("pause");
//    return 0;
//}

//断点 F9切换断点 再按F5 直接跳到断点位置
//F10逐过程 按一下走一步 只看这步的结果是什么 不关心里面的过程、
//F11逐语句 每次只执行一条语句 可以进入函数内部（最常用的）（Shift+F11跳出）
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 100; i++)
//    {
//        printf("%d ", i);
//    }
//    
//    for (i = 0; i < 100; i++)
//    {
//        printf("%d ", 10-i);//F9直接到这步 不然需要F10按100次才能到这步 
//    }
//    return 0;
//}

//调试练习
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int sum = 0;//保存最终结果
//    int ret = 1;//保存n的阶乘
//    int n = 0;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        int j = 0;
//        //int ret = 1;//应该每次进循环从1开始乘
//        for (j = 1; j <= i; j++)
//        {
//            ret *= j;
//        }
//        sum += ret;
//    }
//    printf("%d\n", sum);
//    return 0;
//}

//为什么这个代码会进入死循环（Debug版本）
//1、栈区的默认使用：先使用高地址处空间   再使用低地址空间 上面是高下面是低
//2、数组随着下标的增长 地址是由低到高变化
//3、先存放i（高地址）再存放arr（比i低的地址）随后由下标增长（越界后） 很快接近i
//i=12后遇到了arr[12] 赋值为0 然后进入死循环
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int i = 0;
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        printf("hehe\n");
//        arr[i] = 0;
//    }
//    system("pause");
//    return 0;
//}

//(目的地,存放的内容)    字符串拷贝
//char* strcpy(char* strDestination,const char* Source);
//#include<stdio.h>
//#include<string.h>
////void my_strcpy(char* dest, char* src)
////{
////    while (*src!='\0')
////    {
////        *dest = *src;
////        src++;
////        dest++;
////    }
////    *dest = *src;//'\0'
////}
////void my_strcpy(char* dest, char* src)//优化-让代码更健全
////{
////    if (dest != NULL && src != NULL)
////    {
////        while (*dest++ = *src++)
////        {
////            ;
////        }
////    }
////}
////#include<assert.h>
////void my_strcpy(char* dest, char* src)//优化-如果传址错误可以发现
////{
////    assert(dest!=NULL);//断言 表达式为真就不发生任何事 表达式为假就报错
////    assert(src != NULL);
////    while (*dest++ = *src++)
////    {
////        ;
////    }
////}
//#include<assert.h>
////char* strcpy(char* strDestination,const char* Source);标准
//char* my_strcpy(char* dest,const char* src)
//{
//    char* ret = dest;
//    assert(dest!=NULL);//断言
//    assert(src != NULL);//断言
//    //把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
//    while (*dest++ = *src++)//如果dest和src放反了就会报错 因为const修饰的src不能被改变
//    {
//        ;
//    }
//    return ret;
//}
//int main()
//{
//    char arr1[] = "#############";
//    char arr2[] = "hehe";
//    printf("%s\n", my_strcpy(arr1, arr2));//链式访问 返回值作为另外一个函数的参数
//    return 0;
//}

//const 细讲
//#include<stdio.h>
//int main()
//{
//    const int num = 10;//主观意愿不改变num 但是*p还是可以改变(num) 所以在int* 前也加const 程序报错
//    const int* p = &num;
//    //const 放在指针变量的*左边时 修饰的是*p,也就是说不能通过p来改变*p(num)的值
//    //int num = 10;
//    //int* p = &num;
//    *p = 20;
//    printf("%d\n", num);//err
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    const int num = 10;
//    int* const p = &num;
//    //const 放在指针变量的*右边时 修饰的是指针变量p本身，p是可以改变num的值 但是p被限制了不能改变
//    *p = 20;
//    printf("%d\n", num);//20
//    int n = 100;
//    p = &n;//err 因为p被const修饰 不能改变 只能取num的地址
//    return 0;
//}


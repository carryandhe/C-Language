#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//static int g_val = 2023;//静态的全局变量
//int g_val = 2023;//全局变量

//static int Add(int x, int y)		//具有内部链接属性  不可以使用
//int Add(int x, int y)				//具有外部链接属性	可以使用
//{
//	int z = x + y;
//	return z;
//}
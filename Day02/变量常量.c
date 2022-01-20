#define _CRT_SECURE_NO_WARNINGS //引用方法的意思
#include<stdio.h>

//int main() 
//{
//	//创建一个变量
//	int age = 22;
//	double weight = 63.5;
//
//	age = age+1;
//	weight = weight-10;
//
//	printf("%d\n",age);
//	printf("%lf\n",weight);
//	浮点类型中 float用%f   double用%lf
//
//
//	return 0;
//
//}

//int a = 100;	//全局变量 - {}外部定义的
//int main()
//
//{
//	int a = 10;	//局部变量 - {}内部定义的 
//	printf("%d\n", a);
//	
//	return 0;
//
//}
////结果为10  当局部变量和全部变量名字冲突的情况下，局部变量优先


//
////求2个整数之和
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;//定义一个
//
//	int a, b, sum = 0;		//也可以写成这样
//
//	scanf("%d %d", &a, &b);		//进行赋值
//	//取一个整数%d，存放在a；再取一个存放在b
//	sum = a + b;
//	printf("sum = %d\n", sum);
//
//
//
//	return 0;
//}

//int g = 200;		//写在{}外 于此为全局变量 适用于以下代码 
//printf("%d\n",g)	//这样承接上面的写法是错误的 执行性代码必须写到函数中 


//int main()	 
//{
//	printf("HHHHHH\n");
//	int a = 6;
//	
//	printf("a = %d\n", a);	//那a的作用域就在{}57到65之间  
//
//	
//	return 0;
//}

//extern int  声明变量
//在不同的源文件定义的变量在此源文件同样适用，只需要声明一下“告诉”它我有这个变量



//int main()
//{
//	/*3.14;
//	10;
//	"abcdef";
//	return 0;*/
//
//	const int num = 10;
//	num = 20;
//	printf("num=%d\n", num);
//
//}



//
//
//#define Max 20000;
//int main()
//{
//	int n = Max;
//
//	printf("num=%d\n", n);
//
//	return 0;
//
//}
//
//enum MyEnum
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum MyEnum s = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//
//	return 0;
//
//}


int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;//定义一个



	scanf("%d %d", &a, &b);		//进行赋值
	//取一个整数%d，存放在a；再取一个存放在b
	sum = a + b;
	printf("%d\n", sum);
}
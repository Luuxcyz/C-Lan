#define _CRT_SECURE_NO_WARNINGS //���÷�������˼
#include<stdio.h>

//int main() 
//{
//	//����һ������
//	int age = 22;
//	double weight = 63.5;
//
//	age = age+1;
//	weight = weight-10;
//
//	printf("%d\n",age);
//	printf("%lf\n",weight);
//	���������� float��%f   double��%lf
//
//
//	return 0;
//
//}

//int a = 100;	//ȫ�ֱ��� - {}�ⲿ�����
//int main()
//
//{
//	int a = 10;	//�ֲ����� - {}�ڲ������ 
//	printf("%d\n", a);
//	
//	return 0;
//
//}
////���Ϊ10  ���ֲ�������ȫ���������ֳ�ͻ������£��ֲ���������


//
////��2������֮��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;//����һ��
//
//	int a, b, sum = 0;		//Ҳ����д������
//
//	scanf("%d %d", &a, &b);		//���и�ֵ
//	//ȡһ������%d�������a����ȡһ�������b
//	sum = a + b;
//	printf("sum = %d\n", sum);
//
//
//
//	return 0;
//}

//int g = 200;		//д��{}�� �ڴ�Ϊȫ�ֱ��� ���������´��� 
//printf("%d\n",g)	//�����н������д���Ǵ���� ִ���Դ������д�������� 


//int main()	 
//{
//	printf("HHHHHH\n");
//	int a = 6;
//	
//	printf("a = %d\n", a);	//��a�����������{}57��65֮��  
//
//	
//	return 0;
//}

//extern int  ��������
//�ڲ�ͬ��Դ�ļ�����ı����ڴ�Դ�ļ�ͬ�����ã�ֻ��Ҫ����һ�¡����ߡ��������������



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
	int sum = 0;//����һ��



	scanf("%d %d", &a, &b);		//���и�ֵ
	//ȡһ������%d�������a����ȡһ�������b
	sum = a + b;
	printf("%d\n", sum);
}
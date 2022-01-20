//#include <stdio.h>
//int main()//main函数是程序的入口
//{
//    printf("HelloWorld\n");
//    printf("世界你好\n");
//    return 0;
//}


#include <stdio.h>
int main()
{
    printf("%zd\n", sizeof(char));
    printf("%zd\n", sizeof(short));
    printf("%zd\n", sizeof(int));
    printf("%zd\n", sizeof(long));
    printf("%zd\n", sizeof(long long));
    printf("%zd\n", sizeof(float));
    printf("%zd\n", sizeof(double));
    printf("%zd\n", sizeof(long double));
    return 0;
}
//修改 %zd
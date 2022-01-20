#include <stdio.h>
#include<string.h>

int main()
{

	//char arr[] = "hello";
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0' };

	printf("%s\n", arr1);
	printf("%s\n", arr2);

	printf("%zd\n", strlen(arr1));
	printf("%zd\n", strlen(arr2));


	return 0;
}
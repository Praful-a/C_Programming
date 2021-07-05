#include<stdio.h>
/*int main() {
	int a = 1025;
	int *p;
	p = &a;
	printf("Size of integer is %d\n", sizeof(int));
	printf("Address = %d value = %d\n", p, *p);
	char *p0;
	p0 = (char*)p;
	printf("Size of char is %d bytes\n", sizeof(char));
	printf("Address = %d, vlaue = %d\n", p0, *p0);
	return 0;
}*/

int main() {
	int a = 1025;
	int *p;
	p = &a;
	printf("Size of integer is %d\n", sizeof(int));
	printf("Address = %d value = %d\n", p, *p);
	printf("Address = %d, Value = %d\n", p+1, *(p+1));
	char *p0;
	p0 = (char*)p;
	printf("Size of char is %d bytes\n", sizeof(char));
	printf("Address = %d, vlaue = %d\n", p0, *p0);
	printf("Address = %d, Value = %d\n", p0+1, *(p0+1));
	return 0;
}
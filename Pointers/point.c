#include<stdio.h>

/*int main() {
	int a;
	int *p;
	a = 10;
	p = &a;
	printf("%d\n", p);
	printf("%d\n", *p);
	printf("%d\n", &a);
	printf("a = %d\n", a);
	*p = 12; // dereferencing
	printf("a = %d\n", a);
	return 0;
}*/

int main() {
	int a;
	int *p;
	a = 10;
	p = &a; // &a = address of a
	printf("Address of P is %d\n", p);
	printf("Value of P is %d\n", *p);
	int b = 20;
	*p = b; 
	printf("Address of P is %d\n", p);
	printf("Value of P is %d\n", *p);
	return 0;

}
#include<stdio.h>
#include<string.h>
/*int main() {
	char c[5] = {'J', 'O', 'H', 'N', '\0'};
	// char c[] = "JOHN";
	// c[0] = 'J';
	// c[1] = 'O';
	// c[2] = 'H';
	// c[3] = 'N';
	// c[4] = '\0';
	printf("Size in bytes = %d\n", sizeof(c));
	int len = strlen(c);
	printf("Length = %d\n", len);
	printf("%s", c);
	return 0;
}*/

/*void print(char* C) {
	int i = 0;
	while(*(C+i) != '\0') {
		printf("%c", C[i]);
		i++;
	}
	printf("\n");
}

int main() {
	char c[20] = "Hello";
	print(c);
	return 0;
}*/


void print(const char* C) {
	int i = 0;
	// C[0] = 'A';
	while(*C != '\0') {
		printf("%c", C[i]);
		C++;
	}
	printf("\n");
}

int main() {
	// char c[20] = "Hello"; // String gets stored in the space for array
	char c[20] = "Hello";
	print(c);
	return 0;
}

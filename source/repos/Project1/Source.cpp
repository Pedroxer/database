#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 20
int my_strlen(char* a) {
	int i = 0;
	while (*a++ != '\0') {
		i++;
	}
	return i;
}
void strcpy(char* a, char* b) {
	while (*b != '\0') {
		a = b;
		a++;
		b++;
	}
}
void strcat(char* s, char* t) {
	while (*s++ != '\0')
		;
	while (*t != '\0') {
		*s++ = *t++;
	}
	printf("%s", s );
}

int main() {
	char pmessage [MAX] = "now is the time";
	char a[MAX] = "ab";
	strcat(pmessage, a);
}
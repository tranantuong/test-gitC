#include <stdio.h>
#include <string.h> 
int main() {
	char s[200];
	printf("Nhap chuoi ky tu: ");
	fgets(s,100,stdin);
	printf("Chuoi ban dau la: ");
	puts(s); 
	strrev(s);
	printf("Chuoi sau khi dao nguoc la: "); 
	puts(s);
	return 0; 
}

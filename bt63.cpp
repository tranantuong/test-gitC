#include <stdio.h>
#include <string.h> 
void nhap_chuoi(char s[],int *n) {
	do {
	printf("Nhap so luong tu : ");
	scanf("%d",n);
	if (*n<1 || *n>100) 
		printf("Loi kich thuoc, vui long nhap lai!\n"); 
	} while (*n<1|| *n>100);
	getchar(); 
	printf("Nhap chuoi: ");
	fgets(s, 100 , stdin);
}
void chuan_hoa(char s[]) {
	while (s[0]==' ')
		strcpy(&s[0],&s[1]); 
	while( s[strlen(s)-1 ] == ' ') s[strlen(s)-1 ] = '\0';
	for (int i=1;i<strlen(s);i++) 
		if (s[i] == ' ' && s[i+1] == ' ') {
			strcpy(&s[i],&s[i+1]); 
			i--;
		} 
} 
void doi_ky_tu(char s[]) {

	for(int i=0;i<strlen(s);i++) 
		if (i == 0 || s[i-1] == ' ') 
    		if (s[i] >= 'a' && s[i] <= 'z') 
       			 s[i] -= 32;
}
void InSTT(char s[]) {
	int stt = 1;
    printf("%d. ", stt++);
    
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == ' ') {
            printf("\n%d. ", stt++);
        } else {
            printf("%c", s[i]);
        }
    }
}
int main() {
	char s[100];
	int n; 
	nhap_chuoi(s,&n);
	chuan_hoa(s); 
	doi_ky_tu(s); 
	InSTT(s); 
	return 0; 
} 

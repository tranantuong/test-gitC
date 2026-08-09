#include <stdio.h>
#include <string.h> 
int main() {
	char s[50]; 
	int x;
	int a=0,t=0,g=0,c=0;
	float at=0,gc=0;
	do {
		x=1; 
		printf("Nhap chuoi DNA: ");
		fgets(s,50,stdin);
		for(int i=0;i<strlen(s)-1;i++) 
			if (s[i] != 'A' && s[i] != 'T' && s[i]  != 'G' && s[i] != 'C') {
				x=0;
				break;
		}
		if (x==0) 
			printf("Sai ki hieu DNA, vui long nhap lai!\n"); 
	} while (x==0);
	for (int i=0;i<strlen(s)-1;i++) {
		switch (s[i]) {
			case 'A':
				a+=1;
				break;
			case 'T':
				t+=1;
				break;
			case 'G':
				g+=1;
				break;
			case 'C':
				c+=1;
				break;
		}
	}
	printf("Bazo	Tan so\n");
	printf("A	%d\n",a);
	printf("T	%d\n",t);
	printf("G	%d\n",g);
	printf("C	%d",c);
	at= 100.0*(a+t)/(a+t+g+c);
	gc= 100-at; 
	printf("\nPhan tram (AT)la: %.2f",at);
	printf("\nPhan tram (GC)la: %.2f",gc);
	return 0; 
} 



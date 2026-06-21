#include <stdio.h> 
void NhapMang(int a[],int *n) {
	do {
		printf("Nhap so nguyen duong tu 3 den 20: ");
		scanf("%d",n);
		if (*n<3 || *n>20)
			printf("Loi kich thuoc, vui long nhap lai!\n");
	} while (*n<3 || *n>20);
	for (int i=0;i<*n;i++) {
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]); 
	} 
} 

void InMang(int a[],int n) {
	printf("Gia tri cac phan tu cua day la: ");
	for(int i=0;i<n;i++) 
		printf("%d ",a[i]); 
	printf("\n"); 
	 
} 

int TimPT(int a[],int n,int x) {
	for (int i=0;i<n;i++) 
		if (a[i]==x)
		 	return i; 
	return -1; 
}  
void XoaPTDT(int a[],int n) {
	for (int i=0;i<n-1;i++) 
	 	a[i]=a[i+1];
	 InMang(a,n-1); 
}

int main() {
	int a[20], n,x; 
	NhapMang(a,&n);
	InMang(a,n); 
	printf("Nhap gia tri can tim: ");
	scanf("%d",&x); 
	printf("Vi tri cua phan tu can tim la: %d\n",TimPT(a,n,x)); 
	XoaPTDT(a,n); 
	return 0; 
} 

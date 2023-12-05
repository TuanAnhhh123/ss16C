#include<stdio.h>
#include<string.h>
int main(){
	FILE *bai1;
	char buffer[100];
	printf("nhap vao 1 chuoi : ");
	fgets(buffer,100,stdin);
	bai1=fopen("C:\\Users\\Tuan Anh\\OneDrive\\Desktop\\baitap01.txt","w");
	fprintf(bai1,"%s",buffer);
	printf("da ghi vao file bai01: %s",buffer);
	fclose(bai1);
	return 0;
}

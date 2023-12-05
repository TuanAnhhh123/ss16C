#include<stdio.h>

int main(){
	FILE *taptin=NULL;
	taptin = fopen("test.txt","w");
	if(taptin!= NULL){
		fputc('A',taptin);// ghi them vao tap tin ky tu A
		fclose(taptin);
	}
	return 0;
}

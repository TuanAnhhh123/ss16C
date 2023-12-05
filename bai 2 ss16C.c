#include<stdio.h>

int main(){
	FILE *bai2;
	char buffer[100];
	bai2=fopen("C:\\Users\\Tuan Anh\\OneDrive\\Desktop\\baitap01.txt","r");
	if (bai2 == NULL){
        printf("Khong the mo file baitap01.txt\n");
        return 1; 
    }

    int character;
    while ((character = fgetc(bai2) != EOF)){
    	printf("%c",character);
    }

    fclose(bai2);

    return 0;
}


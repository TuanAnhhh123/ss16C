#include<stdio.h>

int main(){
	FILE *bai3;
	char buffer[100];
	bai3=fopen("C:\\Users\\Tuan Anh\\OneDrive\\Desktop\\bt3.txt","w");
	
    if (bai3 == NULL) {
        printf("Khong the mo file bt3.txt\n");
        return 1;
    }

    int soDong;
    printf("Nhap so dong: ");
    scanf("%d", &soDong);

    for (int i = 0; i < soDong; i++) {
        char noiDung[100];
        printf("Nhap dong thu %d: ", i + 1);
        scanf(" %s", noiDung);
        fprintf(bai3, "%s\n", noiDung);
    }
    printf("\nNoi dung trong file:\n");
   
    while (fgets(buffer, sizeof(buffer), bai3) != NULL) {
        printf("%s", buffer);
	}
    
    fclose(bai3);
    return 0;
}

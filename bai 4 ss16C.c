#include <stdio.h>

int main() {
    
    FILE *bai4;
	char buffer[100];
    bai4=fopen("C:\\Users\\Tuan Anh\\OneDrive\\Desktop\\bt3.txt","r");
    if (bai4 == NULL) {
        printf("Khong the mo file bt3.txt\n");
        return 1; 
 	}

    int soDong = 0;
    
    while (fgets(buffer, sizeof(buffer), bai4) != NULL) {
        soDong++;
    }
    
    printf("\nNoi dung trong file:\n");
    while (fgets(buffer, sizeof(buffer), bai4) != NULL) {
        printf("%s", buffer);
    }

    
    printf("\nSo dong trong file: %d\n", soDong);

    
    fclose(bai4);

    return 0; 
}


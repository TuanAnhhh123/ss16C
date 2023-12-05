#include<stdio.h>

int main(){
	FILE *taptin =NULL;
	int kytuhientai = 1;
	taptin = fopen("test.txt","r");
	if (taptin != NULL){
	// vong lap lan luot doc tung ky tu 
		do{
			kytuhientai = fgetc(taptin);//doc ky tu
			printf("%c",kytuhientai);//In ky tu do ra man hinh		
		} while (kytuhientai != EOF);//fgetc tiep tuc dc goi lai vi bien kytuhientai khac EOF
		fclose(taptin);
	}
	return 0;
}

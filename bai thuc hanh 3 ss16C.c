#include<stdio.h>

int main(){
	FILE *taptin=NULL;
	const int SO_KY_TU_TOI_DA =1000;
	char chuoi[SO_KY_TU_TOI_DA] = "";//chuoi co kick thuoc bang SO_KY_TU_TOI_DA
	taptin =fopen("test.txt","r");
	if(taptin !=NULL)
	{
		fgets(chuoi,SO_KY_TU_TOI_DA,taptin);/*Co toi da SO_KY_TU_TOI_DA trong tap tin duoc doc
		chung duoc luu tru vao "chuoi"*/
		printf("%s",chuoi);//hien thi chuoi tren man hinh
		fclose(taptin);
	}
	return 0;
}

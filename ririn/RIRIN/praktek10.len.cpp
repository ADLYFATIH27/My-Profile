#include<stdio.h>
#include<conio.h>
int main(){
	char nama_[25];
	int harga_brg, jumlah_brg, total_hrg;
    total_hrg=harga_brg*jumlah_brg;
	
	printf("inputkan nama barang : ");
	scanf("%s",&nama_brg);
	printf("inputkan harga barang : " );
	scanf("%i" ,&harga_brg);
	printf("inputkan jumlah barang : ");
	scanf("%i" ,&jumlah_brg);
	
	printf("                   Kantin Bpm                      ");
	printf("====================================================");
	printf("1.  ");
	printf("%s ",nama_brg);
    printf("%i ",harga_brg);
    printf("%i ",jumlah_brg);
    printf("%i ",total_hrg);
	
	return 0;
}

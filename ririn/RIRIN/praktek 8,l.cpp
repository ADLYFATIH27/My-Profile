#include<stdio.h>
#include<conio.h>
#define phi 3.14
int main(){
	int jari2;
	float luas, keliling; 
	        
	printf("Inputkan nilai jari-jari: ");
	scanf("%i",&jari2);
	luas=phi*jari2*jari2;
	keliling=2*phi*jari2;
	printf("Hasil Luas Lingkaran adalah %f",luas);
	printf("\nHasil keliling lingkaran adalah %f", keliling);
	
}

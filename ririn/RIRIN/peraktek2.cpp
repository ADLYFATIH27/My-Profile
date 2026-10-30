#include<stdio.h>
int main(){
	int teajus=2000;
	int kerupuk=1000;
	int uang=5000;
	int total= teajus + kerupuk;
	int kembalian= uang-total;
	
	printf("Budi membeli teajus dan kerupuk dengan total Rp.%i", total);
	printf("\nmaka kembalian budi Rp.%i",kembalian)
	return 0;
}

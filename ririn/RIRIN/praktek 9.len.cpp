#include<stdio.h>
#include<conio.h.>
int main(){
	int a,b,c;
	
	printf("inputkan nilai pertama : ");
	scanf("%i" ,&a);1
	;printf("inputkan nilai kedua : ");
	scanf("%i" ,&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("nilai setelah ditukar tempat");
	printf("nilai a = %i", a);
	printf("nilai b =%i", b);
	return 0;
}

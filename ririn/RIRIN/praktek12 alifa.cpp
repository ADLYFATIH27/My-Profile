#include<stdio.h>
#include<conio.h>
        int main(){
        	char nm_kamu,nm_teman[25];
        	int tl_kamu,tl_teman,selisih;
        	
        	printf("inputkan nama kamu : ");
        	scanf("%s",&nm_kamu);
        	printf("inputkan tahun lahir kamu : ");
        	scanf("%i",&tl_kamu);
        	printf("inputkan nama teman : ");
        	scanf("%s",&nm_teman);
        	printf("inputkan tahun lahir teman : ");
        	scanf("%i",&tl_teman);
        	
        	selisih =tl_kamu - tl_teman;
        	
        	printf("selisih umur kamu dan teman kamu adalah : %i ",selisih);
        	return 0;
		}
        

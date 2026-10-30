#include <stdio.h>
#include <conio.h>

int main() {
    int i, j, batas;

    printf("Inputkan angka: ");
    scanf("%d", &batas);

    for(i =batas; > = 2 ; i--) {
        for(j = 1; j < i; j++) {
            printf("Mira");
        }
        printf("\n");
    }

    getch();
    return 0;
}

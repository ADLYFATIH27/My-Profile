#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	 printf("inpukan angka\n");
	 
	 
	 
	 
    char nama[4][4][20] = {
    };

    cout << nama[0][0] << " " << nama[0][1] << " "
         << nama[0][2] << " " << nama[0][3] << endl;

    cout << nama[1][0] << " " << nama[1][1] << " "
         << nama[1][2] << endl;

    cout << nama[2][0] << " " << nama[2][1] << " "
         << nama[2][2] << endl;

    cout << nama[3][0] << " " << nama[3][1] << endl;

    getch();
    return 0;
}

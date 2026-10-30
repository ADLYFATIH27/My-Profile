#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	printf("inputkan angka");
    char nama[4][4][30];

    cout << "Baris 1 (4 nama):" << endl;
    for (int i = 0; i < 4; i++) {
        cin >> nama[0][i];
    }

    cout << "Baris 2 (3 nama):" << endl;
    for (int i = 0; i < 3; i++) {
        cin >> nama[1][i];
    }

    cout << "Baris 3 (3 nama):" << endl;
    for (int i = 0; i < 3; i++) {
        cin >> nama[2][i];
    }

    cout << "Baris 4 (2 nama):" << endl;
    for (int i = 0; i < 2; i++) {
        cin >> nama[3][i];
    }

    getch();
    return 0;
}

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int angka;
    char nama[50];

    cout << "Masukkan angka: ";
    cin >> angka;

    for (int i = 1; i <= angka; i++) {
        cout << "Masukkan nama ke-" << i << ": ";
        cin >> nama;
    }

    getch();
    return 0;
}

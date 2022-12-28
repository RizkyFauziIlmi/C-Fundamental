#include <stdio.h>
#include <string.h>

// Deklarasi function
void isiArray(char arr[][100], int size);
void tampilkanArray(char arr[][100], int size);

int main(void) {
    // Deklarasi variable
    int size;

    // Minta input jumlah data
    printf("Masukkan jumlah data: ");
    scanf("%d", &size);

    // Deklarasi array
    char arr[size][100];

    // Panggil function untuk mengisi array
    isiArray(arr, size);

    // Panggil function untuk menampilkan isi array
    tampilkanArray(arr, size);

    return 0;
}

// Function untuk mengisi array
void isiArray(char arr[][100], int size) {
    // Loop untuk mengisi elemen array
    for (int i = 0; i < size; i++) {
        printf("Masukkan string untuk elemen ke-%d: ", i);
        scanf("%s", arr[i]);
    }
}

// Function untuk menampilkan isi array
void tampilkanArray(char arr[][100], int size) {
    // Tampilkan isi array
    printf("Isi array: ");
    for (int i = 0; i < size; i++) {
        printf("[%d] %s ", i, arr[i]);
    }
    printf("\n");
}

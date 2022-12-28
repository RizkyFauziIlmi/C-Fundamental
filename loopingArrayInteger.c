#include <stdio.h>
#include <string.h>

// Deklarasi function
void isiArray(int arr[], int size);
void tampilkanArray(int arr[], int size);

int main(void)
{
    // Deklarasi variable
    int size;

    // Minta input jumlah data
    printf("Masukkan jumlah data: ");
    scanf("%d", &size);

    // Deklarasi array
    int arr[size];

    // Panggil function untuk mengisi array
    isiArray(arr, size);

    // Panggil function untuk menampilkan isi array
    tampilkanArray(arr, size);

    return 0;
}

// Function untuk mengisi array
void isiArray(int arr[], int size)
{
    // Loop untuk mengisi elemen array
    for (int i = 0; i < size; i++)
    {
        printf("Masukkan integer untuk elemen ke-%d: ", i);
        scanf("%d", &arr[i]);
    }
}

// Function untuk menampilkan isi array
void tampilkanArray(int arr[], int size)
{
    // Tampilkan isi array
    printf("Isi array: ");
    for (int i = 0; i < size; i++)
    {
        printf("[%d] %d ", i, arr[i]);
    }
    printf("\n");
}

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{

    // Deklarasi array pertanyaan, pilihan, dan jawaban
    char questions[][100] = {"1.Who invented C?", "2. When C is Invented?", "3. Which one is the C framework?"};
    char options[][100] = {
        "A. Dennis Ritchie", "B. Bill Gates", "C. Elon Musk", "D. James Gosling",
        "A. 1950", "B. 1980", "C. 1972", "D. 1989",
        "A. Express", "B. Numpy", "C. Laravel", "D. Kore"};
    char answer[] = {'A', 'C', 'D'};

    // Mendapatkan jumlah pertanyaan
    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

    // Deklarasi variabel tebakan dan skor awal
    char guess;
    int score = 0;

    // Perulangan untuk setiap pertanyaan
    for (int i = 0; i < numberOfQuestions; i++)
    {
        printf("*****************************\n");
        printf("%s\n", questions[i]);
        printf("*****************************\n");

        // Perulangan untuk setiap pilihan
        for (int j = i * 4; j < i * 4 + 4; j++)
        {
            printf("%s\n", options[j]);
        }

        // Minta tebakan dari pengguna dan ubah menjadi huruf besar
        printf("GUESS: ");
        scanf(" %c", &guess);
        guess = toupper(guess);

        // Hapus layar konsol dan berikan jawaban benar atau salah
        system("clear");

        if (guess == answer[i])
        {
            printf("\nCorrect Answer!\n");
            score++;
        }
        else
        {
            printf("\nWrong Answer!\n");
        }
    }

    // Hitung skor persentase dan tampilkan
    int percentage = (score * 100) / numberOfQuestions;

    system("clear");
    printf("\nScore: [%d/%d] - %d percent\n", score, numberOfQuestions, percentage);

    return 0;
}

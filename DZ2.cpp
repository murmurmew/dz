#include <iostream>

int main() {
    // создание двойного массива
    // тип данных им€ [размер1][размер2]
    // эквивалентно матрице, у которой 3 строки и 5 столбиков
    const int x = 3;
    const int y = 5;
    int array_name[x][y];

    //способ заполнени€
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            array_name[i][j] = i + j;
        }
    }

    //способ вывода
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            std::cout << array_name[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
    /* «адание 1.
     * —оздать двумерный массив размерами M на N (, и заполнить его "змейкой"
     * Ќапример:
     * 1 2 3 4
     * 8 7 6 5
     * */

    const int M = 7;
    const int N = 5;
    int array_snake[M][N];

    int count = 1;

    for (int i = 0; i < M; i++) {
        if (i % 2 == 0) {

            for (int j = 0; j < N; j++) {
                array_snake[i][j] = count;
                count = count + 1;
            }
        }
        else {
            for (int j = N - 1; j >= 0; j--) {
                array_snake[i][j] = count;
                count = count + 1;
            }
        }

    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << array_snake[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
    /* «адание 2.
     * —оздать два двумерных массива размерами N на N, и перемножить их как две матрицы.
     * */

    const int kolvo_stolb_1 = 5;
    const int kolvo_strok_1 = 5;
    int array_for_umnozh_1[kolvo_strok_1][kolvo_stolb_1];

    for (int i = 0; i < kolvo_strok_1; i++) {
        for (int j = 0; j < kolvo_stolb_1; j++) {
            array_for_umnozh_1[i][j] = rand();
        }
    }

    const int kolvo_stolb_2 = 5;
    const int kolvo_strok_2 = 5;
    int array_for_umnozh_2[kolvo_strok_2][kolvo_stolb_2];

    for (int i = 0; i < kolvo_strok_2; i++) {
        for (int j = 0; j < kolvo_stolb_2; j++) {
            array_for_umnozh_2[i][j] = rand();
        }
    }

    const int kolvo_stolb_rez = kolvo_stolb_2;
    const int kolvo_strok_rez = kolvo_strok_1;
    int array_rez[kolvo_strok_rez][kolvo_stolb_rez];


    for (int i = 0; i < kolvo_strok_rez; i++) {
        for (int j = 0; j < kolvo_stolb_rez; j++) {
            array_rez[i][j] = 0;
        }
    }

    for (int i = 0; i < kolvo_strok_1; i++) {
        for (int j = 0; j < kolvo_stolb_2; j++) {
            for (int k = 0; k < kolvo_stolb_1; k++) {
                array_rez[i][j] = array_rez[i][j] + array_for_umnozh_1[i][k] * array_for_umnozh_2[k][j];
            }
        }
    }


    for (int i = 0; i < kolvo_strok_rez; i++) {
        for (int j = 0; j < kolvo_stolb_rez; j++) {
            std::cout << array_rez[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    /* «адание 3.
     * —оздать квадратный двумерный массив размером N, и заполнить его по спирали.
     * Ќапример:
     * 1 2 3
     * 8 9 4
     * 7 6 5
     * */

    const int n = 4;

    int array_spiral[n][n];


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            array_spiral[i][j] = 0;
        }
    }




    int Count = 1;



    int first_stolb = 0;
    int first_strok = 0;
    int last_stolb = n;
    int last_strok = n;



    while (Count <= n * n) {


        for (int i = first_stolb; i < last_stolb; i++) {
            array_spiral[first_strok][i] = Count;
            Count++;
        }



        first_strok++;

        for (int i = first_strok; i < last_strok; i++) {
            array_spiral[i][last_stolb - 1] = Count;
            Count++;
        }

        Count--;

        last_stolb--;


        for (int i = last_stolb; i >= first_stolb; i--) {
            array_spiral[last_strok - 1][i] = Count;
            Count++;
        }
        Count--;

        last_strok--;



        for (int i = last_strok; i >= first_strok; i--) {
            array_spiral[i][first_stolb] = Count;
            Count++;
        }

        first_stolb++;

    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << array_spiral[i][j] << ' ';
        }
        std::cout << std::endl;
    }


    return 0;
}
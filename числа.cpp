#include <iostream>
int main() {

    //ряд натуральных чисел
    int n, i;
    printf("n = ");
    scanf_s("%d", &n);
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= n);

    //goto
    int a = 1;
    //do {
label_do:
    printf("%d ", a);
    a = a + 1;
    //} while (a <= 10);
    if (a <= 10) goto label_do;

    //Continue Вывод  2000 2001 2002 2003 ... 2030 - только НЕВИСОКОСНЫЕ
    int a = 1999;
    while (a < 2030) {
        a = a + 1;
        if (a % 4 == 0)
            continue;
        printf("%d ", a);
    }

    //SWITCH
    int n;
    switch (n) {
    case 1:
        printf("Вы ввели ПН\n");
        break;
    case 2:
        printf("Вы ввели ВТ\n");
        break;
    }

    //Ввести с клавиатуры 5 чисел
    printf("Введите с клавиатуры 5 чисел");
    int i = 1;
    int a;
    do {
        scanf_s("%d", &a);
        i++;
    } while (i <= 5);

    //Население города увеличивается на 3% каждый год
    int year = 2014;
    long population = 650000;
    do {
        printf("%ld  inhabitants live in the city in %d\n",
            population, year);
        population = (population * 103) / 100;
        year = year + 1;
    } while (year <= 2040);

    //На счет положили R рублей сегодня под N процентов годовых
    перем
        god = 0;
    do {
        printf("li RUB in %i year \n", s, god);
        s = (s * (100 + procent)) / 100;
    } while (god <= 10);

    //Факториал
    long fuct(int n);
    int num;
    printf("num = ");
    scanf_s("%d", &num);
    long f = fuct(num);
    printf("num = %d, num! = %ld", num, f);

    //является ли число простым
    int isPrime(int num) {
        int del = 2;
        while (del < num) {
            // если num нацело делиться на del
            if (num % del == 0) {
                // возвращаем 0, т.к. число не простое
                return 0;
            }
            del++;
        }
        // возвращаем 1, т.к. ни одно число от 2 до num-1 
        // не является делителем
        return 1;
    }
    }

    //вывести N первых простых чисел
    int n = 10;
    int a = 1;
    int i = 0;
    while (i < n) {
        if (isPrime(a)) {
            printf("%d ", a);
            i++;
        }
        a++;
    }

    //Вывести N первых нечетных чисел
    int i, a, n;
    scanf("%d", &n);
    a = 1;
    i = 1;
    do {
        printf("%d ", a);
        a += 2;
        i++;
    } while (i <= n);
    printf("\n");

    //Вывести первые N значений числа Фибоначчи
    int i;
    int a1, a2, a3;
    int n;
    scanf("%d", &n);
    a1 = 0;
    a2 = 1;
    i = 1;
    do {
        printf("%d ", a2);
        a3 = a2 + a1;
        a1 = a2;
        a2 = a3;
        i++;
    } while (i <= n);
    printf("\n");

    //Задача2. Ввести с клавиатуры число N. Вывести узор из чисел
    void Uzor1() {
        int n, i, j;
        scanf_s("%d", &n);
        i = 0;
        while (i < n) {
            j = i;
            while (j >= 0) {
                printf("%d ", j);
                j--;
            }
            printf('\n');
            i++;
        }
    }
    0
    1 0
    2 1 0
    3 2 1 0

    //Задача2. ещё
    void Uzor2() {
        //внешний цикл формирует 5 строк
        int i = 5;
        while (i >= 1) {
            int j = i;
            // внутренний цикл формирует строку из чисел
            while (j <= 5) {
                printf("%d ", j);
                j++;
            }
            printf("\n");
            i--;
        }
    }
    5
    4 5
    3 4 5
    2 3 4 5
    1 2 3 4 5
    
    //Задача 2. ещё
    void Uzor3() {
    //внешний цикл формирует 5 строк
    int i = 0;
    int j;
    int x;
    while (i < 5) {
        x = 5 - i;
        j = 0;
        // внутренний цикл формирует строку из чисел
        while (j < 5) {
            if (x != 0) {
                printf("%d ", x);
                x = x - 1;
            }
            j++;
        }
        printf("\n");
        i++;
        }
    }
    5 4 3 2 1
    4 3 2 1
    3 2 1
    2 1
    1


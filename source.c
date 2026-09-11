#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>

#define D 2.54
#define P 2.32

void inches_to_cm()
{
    int dym;
    float result_from_inch;
    float result_from_pulgada;

    puts("Введите значение в дюймах для перевода в см:");
    scanf("%d", &dym);
    result_from_inch = D * dym;
    result_from_pulgada = P * dym;
    printf("%d английских дюймов – это %.2f см\n", dym, result_from_inch);
    printf("%d испанских дюймов – это %.2f см\n", dym, result_from_pulgada);
}

void print_table()
{
    float a, b;
    puts("Введите число a:");
    scanf("%f", &a);
    puts("");
    puts("Введите число b:");
    scanf("%f", &b);
    puts("");
    printf("_____________________________________________________________\n");
    printf("|       a * b       |       a + b       |       a - b       |\n");
    printf("-------------------------------------------------------------\n");
    printf("|%8.2f * %-8.2f|%8.2f + %-8.2f|%8.2f - %-8.2f|\n", a, b, a, b, a, b);
    printf("-------------------------------------------------------------\n");
    printf("| %17.2f | %17.2f | %17.2f |\n", a*b, a+b, a-b);
}

int main()
{
    setlocale(LC_CTYPE, "RUS.UTF-8");

    int num, num2;
    puts("введите число");
    scanf("%d", &num);
    printf("Введено число %d\n\n", num);
    puts("введите второе число");
    scanf("%d", &num2);
    printf("Введено число %d\n\n", num2);
    printf("%d + %d = %d\n", num, num2, num + num2);
    printf("%d - %d = %d\n", num, num2, num - num2);
    printf("%d * %d = %d\n", num, num2, num * num2);
    printf("%d / %d = %d\n", num, num2, num / num2);
    printf("Остаток от деления %d на %d равен %d\n", num, num2, num % num2);
    puts("");
    inches_to_cm();
    puts("");
    print_table();
    system("pause");
}
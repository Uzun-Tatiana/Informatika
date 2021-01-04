#include<iostream>
#include <stdio.h>
#include <cstdio>
#include <cstring>

using namespace std;



int main(void) {
    setlocale(0, ""); // Включаем кириллицу
    char str[255], temp;
    int n, i, j;
    cout << "Введите строку" << endl;
    fgets(str, 255, stdin);
    fflush(stdin); // очищаем поток ввода

    cout << "Введенная строка" << endl;
    puts(str);

    cout << "Элемeнты строки в алфавитном порядке" << endl;

    n = strlen(str);

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("%s", str);

    return 0;
}

/*Задание 2. Сортировка
Что нужно сделать
Пользователь вводит в консоль 15 дробных чисел.
Необходимо прочитать их и вывести в консоль в порядке от большего к меньшему.
По возможности используйте минимум дополнительной памяти и проходов по массиву.

Пример
Ввод: 1.2 2.3 1.11 3.4 5.5 5.4 5.3 5.1 1.5 1.25 5.41 5.31 5.11 1.51 1.251
Вывод: 5.5 5.41 5.4 5.31 5.3 5.11 5.1 3.4 2.3 1.51 1.5 1.251 1.25 1.2 1.11

Рекомендации по выполнению
Воспользуйтесь дополнительными материалами.*/

#include <iostream>
#include <math.h>

int main()
{

    int arr[] = {4, 10, 3, 5, 1};

    // задание начальных констант
    // размер массива
    int sizeArr = 5;
    // высота кучи
    int heapHeight = log(sizeArr) / log(2);

    // вывод кучи
    std::cout << arr[0] << std::endl;
    for (int i = 1; i <= heapHeight; i++)
    {
        for (int j = pow(2, i) - 1; j <= pow(2, i + 1) - 2; j++)
        {
            if (j <= sizeArr)
            {
                std::cout << arr[j] << " ";
            }
        }
        std::cout << std::endl;
    }

    /*for (int i = sizeArr / 2 - 1; i >= 0; i--)
    {
        summSequence += i;
    }

    for (int i = 0; i < 15; i++)
    {
        summ += numbers[i];
    }

    int initialNumber = (summ - summSequence) / sequenceLength;
    int repeatingNumber = (summ - summSequence) % sequenceLength + initialNumber;

    std::cout << "Summa: " << summ << std::endl;
    std::cout << "Initial number: " << ++initialNumber << std::endl;
    std::cout << "A repeating number: " << repeatingNumber << std::endl;*/
}
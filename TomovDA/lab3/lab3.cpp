
#include <iostream>
#include <string.h>

int ascii_sum (char string[]) {
    int len = strlen(string);
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += string[i];
    }
    return sum;
}



int main()
{
	char string[100];
	int words[100];

	std::cout << "Enter the input sentence" << std::endl;
	std::cin.getline(string, 100);
	
    /* Количество введенных слов */
    int number = 0;

   
        int i, j, temp;
        int Flag = 1; /* Признак окончания слова */

     
        /* Предварительная обработка */
        for (i = 0; i < 100; i++)
        {
            /* Все пробелы заменяем на символ конца строки */
            if (string[i] == ' ') {
                string[i] = 0;
                Flag = 1;
            }
            /* Позиции первых после пробелов символов записываем в массив */
            else if (Flag) {
                words[number++] = i;
                Flag = 0;
            }
        }

        /* Сортировка */
        for (j = number - 1; j > 0; j--)
            for (i = 0; i < j; i++)
                if (ascii_sum(&string[words[i]]) > ascii_sum(&string[words[i + 1]])) {
                    temp = words[i];
                    words[i] = words[i + 1];
                    words[i + 1] = temp;
                }

        /* Вывод результата */
        for (i = 0; i < number; i++) {
            std::cout << &string[words[i]] << " ";
        }
         
	return 0;
}
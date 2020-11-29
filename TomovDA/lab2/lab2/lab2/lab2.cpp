#include <iostream>

int main() {
    const int array_size = 5;
    const int arr_even_size = 5;
    int arr[array_size];


    for (int i = 0; i < array_size; i++) {
        arr[i] = -5 + rand() % 70;
    }

    std::cout << "Default array: ";
    for (int i = 0; i < array_size; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    int temp;
    bool done = false;

    while (!done) {
        done = true;
        int i = 0;
        while (i < array_size - 1) {
            while (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                done = false;
            }
            i++;
        }
    }

    int arr_even[arr_even_size];
    for (int i = 0; i < arr_even_size; i++) {
        arr_even[i] = 0;
    }


    for (int i = 0; i < array_size; i++) {
        if (arr[i] % 2 != 0) {
            arr_even[i] = arr[i];
        }
    }

    int sum = 0;
    int counter = 0;
    for (int i = 0; i < arr_even_size; i++) {
        if (arr_even[i] != 0) {
            sum += arr_even[i];
            counter++;
        }
    }

    float ave_value = (float)sum / counter;
    std::cout << std::endl;

    int max = arr_even[0];
    for (int i = 0; i < arr_even_size; i++) {
        if (max < arr_even[i] && arr_even[i] != 0) {
            max = arr_even[i];
        }
    }

    int min = arr_even[0];
    for (int i = 0; i < array_size; i++) {
        if (arr_even[i] != 0 && min > arr_even[i]) {
            min = arr_even[i];
        }
    }


    std::cout << "Sorted default array: ";
    for (int i = 0; i < array_size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Array with even numbers: ";
    for (int i = 0; i < arr_even_size; i++) {
        if (arr_even[i] != 0) {
            std::cout << arr_even[i] << " ";
        }
    }
    std::cout << std::endl;
    std::cout << "Average value: " << ave_value;
    std::cout << std::endl;
    std::cout << "Min: " << min;
    std::cout << std::endl;
    std::cout << "Max: " << max;
    return 0;
}
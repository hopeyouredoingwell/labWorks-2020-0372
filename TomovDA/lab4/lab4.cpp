
#include <iostream>

int power_of_a_number(int number, int power)
{
    int result = 1;
    while (power != 0) {
        result *= number;
        --power;
    }
    return result;
}

int factorial (int number)
{
    int result = 1;
    int counter = 1;
	while (counter <= number)
	{
        result *= counter;
        counter++;
	}
    return result;
}

int my_sqrt(int number) {
    if (number == 0) return 0;
    int left = 1;
    int right = number / 2 + 1;
    int res;

    while (left <= right) {
        int mid = left + ((right - left) / 2);
        if (mid <= number / mid) {
            left = mid + 1;
            res = mid;
        }
        else {
            right = mid - 1;
        }
    }

    return res;
}

bool prime(int number) {
    for (int i = 2; i <= my_sqrt(number); i++)
        if (number % i == 0)
            return false;
    return true;
}




int main()
{
    std::cout << power_of_a_number(2, 2) << std::endl;
    std::cout << factorial(4) << std::endl;
    std::cout << my_sqrt(16) << std::endl;
    std::cout << prime(7) << std::endl;
    return 0;
}

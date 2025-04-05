#include <iostream>

int main()
{
    char vowels[]{'a', 'e', 'i', 'o', 'u'};
    std::cout << "\nThe first vowel is: " << vowels[0] << std::endl;
    std::cout << "\nThe last vowel is: " << vowels[4] << std::endl;

    double hi_temps[]{90.1, 89.8, 77.5, 81.6};
    std::cout << "\nThe first high temperature is: " << hi_temps[0] << std::endl;

    hi_temps[0] = 100.7;

    std::cout << "\nThe first high temperature is now: " << hi_temps[0] << std::endl;

    return 0;
}
#include <iostream>
#include <cmath>

int main()
{
    double num{};
    std::cout << "Enter a number(double):";
    std::cin >> num;

    std::cout << "The sqrt of " << num << " is: " << sqrt(num) << std::endl;
    std::cout << "The cubed root of " << num << " is: " << cbrt(num) << std::endl;

    std::cout << "The sine of " << num << " is: " << sin(num) << std::endl;
    std::cout << "The cosine of " << num << " is: " << cos(num) << std::endl;
    std::cout << "The tangent of " << num << " is: " << tan(num) << std::endl;
    std::cout << "The arcsine of " << num << " is: " << asin(num) << std::endl;
    std::cout << "The arccosine of " << num << " is: " << acos(num) << std::endl;
    std::cout << "The arctangent of " << num << " is: " << atan(num) << std::endl;

    std::cout << "The ceil of " << num << " is: " << ceil(num) << std::endl;
    std::cout << "The floor of " << num << " is: " << floor(num) << std::endl;
    std::cout << "The round of " << num << " is: " << round(num) << std::endl;
    std::cout << "The trunc of " << num << " is: " << trunc(num) << std::endl;
    std::cout << "The fmod of " << num << " is: " << fmod(num, 2) << std::endl;
    std::cout << "The abs of " << num << " is: " << abs(num) << std::endl;
    std::cout << "The exp of " << num << " is: " << exp(num) << std::endl;
    std::cout << "The log of " << num << " is: " << log(num) << std::endl;
    std::cout << "The log10 of " << num << " is: " << log10(num) << std::endl;

    double power{};
    std::cout << "\nEnter a power to raise " << num << " to: ";
    std::cin >> power;
    std::cout << num << " raised to the " << power << " power is: " << pow(num, power) << std::endl;

    std::cout << std::endl;
    return 0;
}
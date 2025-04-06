#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    int random_number{};
    size_t count{10};
    int min{1};
    int max{6};

    std::cout << "RAND_MAX on this machien is: " << RAND_MAX << std::endl;
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for (size_t i{0}; i <= count; ++i)
    {
        random_number = std::rand() % max + min;
        std::cout << random_number << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
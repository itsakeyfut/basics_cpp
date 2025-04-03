#include <iostream>

int main()
{
    std::cout << "How many rooms would you like cleaned?";

    int number_of_rooms{0};
    constexpr int price_per_room{30};
    constexpr float sales_tax{0.06};
    constexpr int estimate_expiry{30};
    std::cin >> number_of_rooms;

    std::cout << "\nEstimate for carpet cleaning service" << std::endl;
    std::cout << "Number of rooms: " << number_of_rooms << std::endl;
    std::cout << "Price per room: $" << price_per_room << std::endl;
    std::cout << "Cost: $" << price_per_room * number_of_rooms << std::endl;
    std::cout << "Tax: $" << price_per_room * number_of_rooms * sales_tax << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "Total estimate: $" << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * sales_tax) << std::endl;

    if (number_of_rooms < 2)
    {
        std::cout << "No support provided" << std::endl;
        return 0;
    }
    std::cout << "This estimate is valid for " << estimate_expiry << " days" << std::endl;

    return 0;
}
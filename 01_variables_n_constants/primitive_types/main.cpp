#include <iostream>

int main()
{
    /*******************
     * Character Type
     *******************/
    char score{'A'};
    std::cout << "You aced " << score << "+" << std::endl;

    /*******************
     * Integer Types
     *******************/
    unsigned short int exam_score{55};
    std::cout << "My exam score was " << exam_score << std::endl;

    int countries_represented{65};
    std::cout << "There were " << countries_represented << " countries represented in my meeting" << std::endl;

    long people_in_florida{20610000};
    std::cout << "There are about " << people_in_florida << " people in Florida" << std::endl;

    long people_on_earth{7'600'000'000};
    std::cout << "There are about " << people_on_earth << " people on earth" << std::endl;

    long long distance_to_alpha_centauri{9'461'000'000'000};
    std::cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers" << std::endl;

    /************************
     * Floating point Types
     ************************/
    float car_payment{401.23};
    std::cout << "My car payment is " << car_payment << std::endl;

    double pi{3.14159};
    std::cout << "PI is " << pi << std::endl;

    long double large_amount{2.7e120};
    std::cout << large_amount << " is a very big number" << std::endl;

    /*******************
     * Boolean Types
     *******************/
    bool game_over{false};
    std::cout << "is Game Over: " << game_over << std::endl;
}
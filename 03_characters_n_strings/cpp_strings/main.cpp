#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string s0;
    std::string s1{"Apple"};
    std::string s2{"Banana"};
    std::string s3{"Kiwi"};
    std::string s4{"apple"};
    std::string s5{s1};
    std::string s6{s1, 0, 3};
    std::string s7{10, 'X'};

    std::cout << s0 << std::endl;          // No garbage
    std::cout << s0.length() << std::endl; // empty string

    /*
     * Assignment
     */
    s1 = "Watermelon";
    std::cout << "s1 is now: " << s1 << std::endl;
    s2 = s1;
    std::cout << "s2 is now: " << s2 << std::endl;

    s3 = "AIR";
    std::cout << "s3 is now: " << s3 << std::endl;

    s3[2] = 'M';
    std::cout << "s3 change third letter to 'M': " << s3 << std::endl;
    s3.at(2) = 'L';
    std::cout << "s3 change third letter to 'L': " << s3 << std::endl;

    /*
     * Concatenation
     */
    s3 = s5 + " and " + s2 + " juice";
    std::cout << "s3 is now: " << s3 << std::endl;

    /*
     * Loop
     */
    s1 = "Apple";
    for (size_t i{0}; i < s1.length(); ++i)
        std::cout << s1.at(i);
    std::cout << std::endl;

    for (char c : s1)
        std::cout << c;
    std::cout << std::endl;

    /*
     * Substring
     */
    s1 = "This is a test";
    std::cout << s1.substr(0, 4) << std::endl;  // This
    std::cout << s1.substr(5, 2) << std::endl;  // is
    std::cout << s1.substr(10, 4) << std::endl; // test

    /*
     * Erase
     */
    s1 = "This is a test";
    s1.erase(0, 5);
    std::cout << "s1 is now: " << s1 << std::endl; // is a test

    /*
     * getline
     */
    std::string full_name{};

    std::cout << "Enter your full name:";
    getline(std::cin, full_name);

    std::cout << "Your full name is: " << full_name << std::endl;

    /*
     * Find
     */
    s1 = "The secret word is Boo";
    std::string word{};

    std::cout << "Enter the word to find:";
    std::cin >> word;

    size_t pos = s1.find(word);
    if (pos != std::string::npos)
        std::cout << "Found " << word << " at position: " << pos << std::endl;
    else
        std::cout << "Sorry, " << word << " not found" << std::endl;

    std::cout << std::endl;
    return 0;
}
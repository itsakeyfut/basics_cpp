#include <iostream>
#include <string>
#include <vector>

void print(int);
void print(double);
void print(std::string);
void print(std::string, std::string);
void print(std::vector<std::string>);

void print(int num)
{
    std::cout << "Printing int: " << num << std::endl;
}

void print(double num)
{
    std::cout << "Printing double: " << num << std::endl;
}

void print(std::string s)
{
    std::cout << "Printing string: " << s << std::endl;
}

void print(std::string s, std::string t)
{
    std::cout << "Printing 2 strings: " << s << " and " << t << std::endl;
}

void print(std::vector<std::string> v)
{
    std::cout << "Printing vector of strings: ";
    for (auto s : v)
        std::cout << s + " ";
    std::cout << std::endl;
}

int main()
{
    print(100);
    print('A'); // character is always promoted to int should print 65 ASCII ('A')
    print(123.5);
    print(123.5F);

    print("C-style string");

    std::string s{"C++ string"};
    print(s);

    print("C-style string", s);

    std::vector<std::string> three_stooges{"Larry", "Moe", "Curly"};
    print(three_stooges);

    std::cout << std::endl;
    return 0;
}
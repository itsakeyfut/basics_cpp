#include <iostream>
#include <cstring>
#include <cctype>

int main()
{
    char first_name[20];
    char last_name[20];
    char full_name[50];
    char temp[50];

    std::cout << "Please enter your first name:";
    std::cin >> first_name;

    /*
     * std::cin >> first_name; の場合、空白で区切られるまでの文字列を読み取る
     * std::cin.getline(first_name, sizeof(first_name)); の場合、改行文字が入力されるまでの文字列を読み取る
     * std::cin.ignore(); を使うことで、前の入力で残った改行文字を無視することができる
     */

    std::cout << "Please enter your last name:";
    std::cin >> last_name;

    std::cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << std::endl;
    std::cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << std::endl;

    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    std::cout << "Your full name is: " << full_name << std::endl;

    strcpy(temp, full_name);
    if (strcmp(temp, full_name) == 0)
        std::cout << temp << " and " << full_name << " are the same" << std::endl;
    else
        std::cout << temp << " and " << full_name << " are different" << std::endl;

    for (size_t i{0}; i < strlen(full_name); ++i)
    {
        if (isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }
    std::cout << "Your full name is " << full_name << std::endl;

    std::cout << "Result of comparing" << temp << " and " << full_name << ": " << strcmp(temp, full_name) << std::endl;
    std::cout << "Result of comparing" << full_name << " and " << temp << ": " << strcmp(full_name, temp) << std::endl;
}
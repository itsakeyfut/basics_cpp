# Character Functions

`#include <cctype>`

- Functions for testing characters
- Functions for converting character case

## Testing characters

- `isalpha(c)`
  - True if c is a letter
- `isalnum(c)`
  - True if c is a letter or digit
- `isdigit(c)`
  - True if c is a digit
- `islower(c)`
  - True if c is lowercase letter
- `isprint(c)`
  - True if c is a printable character
- `ispunct(c)`
  - True if c is a punctuation character
- `isupper(c)`
  - True if c is an uppercase letter
- `isspace(c)`
  - True if c is whitespace

## Converting characters

- `tolower(c)`
  - returns lowercase of c
- `toupper(c)`
  - returns uppercase of c

# C-style Strings

- Sequenece of characters

  - contiguous in memory
  - implemented as an array of characters
  - terminated by a null character (null)
    - null - character with a value of zero
  - Referred to as zero or null terminated strings

- String literal
  - sequence of characters in double quotes
  - constant
  - terminated with null character

## declaring variables

```cpp
char name[] {"Jonathan"}

name[10] = "f"; // Error
name[2] = "f";  // OK
```

```cpp
char name[10];
name = "Jonathan";        // Error
strcpy(name, "Jonathan"); // OK
```

## Functions that work with C-style Strings

- Copying
- Concatenation
- Comparison
- Searching
- and others

```cpp
char str[80];

strcpy(str, "Hello  ");

strcat(str, "there ");

strlen(str);

strcmp(str, "Another");
```

## `#include <cstdlib>`

- Includes functions to convert C-style Strings to
  - integer
  - float
  - long
  - etc.

# C++ Strings

- std::string is a Class in the Standard Template Library
  - #include <string>
  - std namespace
  - contiguous in memory
  - dynamic size
  - work with input and output streams
  - lots of useful member functions
  - our familiar operators can be used (+, =, < <=, >, >=, +=, ==, !=, []...)
  - can be easily converted to C-style Strings if needed
  - safer

## Declaring and initializing

```cpp
#include <string>

std::string s1;            // Empty
std::string s2 {"AIR"};    // AIR
std::string s3 {s2};       // AIR
std::string s4 {"AIR", 1}; // A
std::string s5 {s3, 0, 1}; // A
std::string s6 (2, 'M');   // MM
```

## Concatenation

```cpp
std::string part1 {"C++"};
std::string part2 {"is a powerful"};

std::string sentence;

sentence = part1 + " " + part2 + " language";
// C++ is a powerful language

sentence = "C++" + " is powerful"; // Illegal
```

## Comparing

The objects are compared character by character lexically.

Can compare:

- two std::string objects
  - std::string object and C-style string literal
  - std::string object and C-style string variable

## Substrings - substr()

Extracts a substring from a std::string

object.substr(start_index, length)

```cpp
std::string s1 {"This is a test"};

std::cout << s1.substr(0, 4);  // This
std::cout << s1.substr(5, 2);  // is
std::cout << s1.substr(10, 4); // test
```

## Searching - find()

Returns the index of a substring in a std::string

object.find(search_string)

```cpp
std::string s1 {"This is a test"};

std::cout << s1.find("This");  // 0
std::cout << s1.find("is");    // 2
std::cout << s1.find("test");  // 10
std::cout << s1.find("e");     // 11
std::cout << s1.find("is", 4); // 5
std::cout << s1.find("XX");    // string::nops
```

## Removing characters - erase() and clear()

Removes a substring of characters from a std::string

object.erase(start_index, length)

```cpp
std::string s1 {"This is a test"};

std::cout << s1.erase(0, 5); // is a test
std::cout << s1.erase(5, 4); // is a
s1.clear();                  // empties string s1
```

## Other useful methods

```cpp
std::string s1 {"Angel"};

std::cout << s1.length() << std::endl; // 5

s1 += " Beats!";
std::cout << s1 << std::endl; // Angel Beats!
```

## Input >> and getline()

Reading std::string from cin

```cpp
std::string s1;
std::cin >> s1; // Hello there
                // Only accepts up to the first space

std::cout << s1 << std::endl; // Hello

getline(cin, s1); // Read entire line until \n
std::cout << s1 << std::endl; // Hello there

getline(cin, s1, 'x'); // this isx
std::cout << s1 << std::endl; // this is
```

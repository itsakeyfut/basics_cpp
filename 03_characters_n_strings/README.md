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

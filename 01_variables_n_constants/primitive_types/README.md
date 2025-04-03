# C++ Primitive Data Types

## Character Types

- Used to represent single characters, 'A', 'X', '@'
- Wider types are used to represent wide character sets

- char
  - Exactly one byte. At least 8 bits
- char16_t
  - At least 16 bits.
- char32_t
  - At least 32 bits.
- wchar_t
  - Can represent the largest available character set.

## Integer Types

- signed short int
  - At least 16 bits.
- signed int
  - At least 16 bits.
- signed long int
  - At least 32 bits.
- signed long long int

  - At least 64 bits.

- unsigned short int
  - At least 16 bits.
- unsigned int
  - At least 16 bits.
- unsigned long int
  - At least 32 bits.
- unsigned long long int
  - At least 64 bits.

## Floating-point Type

- Used to represent non-integer numbers
- Represented by mantissa and exponent (scientific notation)
- Precision is the number of digits in the mantissa
- Precision and size are compiler dependent

- float
  - 7 decimal digits
- double
  - No less than float / 15 decimal digits
- long double
  - No less than double / 19 decimal digits

## Boolean Type

- Used to represent true and false
- Zero is false.
- Non-zero is true.

- bool
  - Usually 8 bits
  - true or false

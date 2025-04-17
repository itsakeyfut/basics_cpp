# What is a Pointer?

- A variable
  - whose value is an address
- What can be at that address?
  - Another variable
  - A function
- Pointers point to variables or functions?
- If x is an integer variable and its value is 10 then I can declare a pointer that points to it
- To use the data that the pointer is pointing to you must know its type

# Why use Pointers?

- Inside functions, pointers can be used to access data that are defined outside the function.
  Those variables may not be in scope so you can't access them by their name
- Pointers can be used to operate on arrays very efficiently
- We can allocate memory dynamically on the heap or free store
  - This memory doesn't even have a variable name.
  - The only way to get to it is via a pointer
- With OO. pointers are how polymorphism works!
- Can access specific addresses in memory
  - useful in embedded and systems applications

# Declaring Pointers

Initializing pointer variables to 'point nowhere'

- Always initialize pointers
- Uninitialized pointers contain garbage data and can 'point anywhere'
- Initializing to zero or `nullptr` (C++ 11) represents address zero
  - implies that the pointer is 'pointing nowhere'
- If you don't initialize a pointer to point to a variable or function when you should
  initialize it to `nullptr` to 'make it null'

# Accessing Pointer Address

& the address operator

- Variables are stored in unique addresses
- Unary operator
- Evaluates to the address of its operand
  - Operand cannot be a constant or expression that evaluates to temp values

`sizeof` a pointer variable

- Don't confuse the size of a pointer and size of what it points to
- All pointers in a program have the same size
- They may be pointing to very large or very small types

```cpp
int *p1 {nullptr};
double *p2 {nullptr};
unsigned long long *p3 {nullptr};
vector<string> *p4 {nullptr};
string *p5 {nullptr};
```

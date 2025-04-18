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

# Potential Pointer Pitfalls

- Uninitialized pointers
- Dangling Pointers
- Not checking if new failed to allocate memory
- Leaking memory

# What is a Reference?

- An alias for a variable
- Must be initialized to a variable when declared
- Cannot be null
- Once initialized cannot be made to refer to a different variable
- Very useful as function parameters
- Might be helpful to think of a reference as a constant pointer that is automatically dereferenced

# l-values

- l-values
  - values that have names and are addressable
  - modifiable if they are not constants

```cpp
int x {100}; // x is an l-value
x = 1000;
x = 1000 + 20;

string name; // name is an l-value
name = "James";
```

# r-values

- r-values (non-addressable and non-assignable)
  - A value that's not an l-value
    - on the right-hand side of an assignment expression
    - a literal
    - a temporary which is intended to be non-modifiable

```cpp
int x {100};     // 100 is an r-value
int y = x + 200; // (x + 200) is an r-value

string name;
name = "James"; // "James" is an r-value

int max_num = max(20, 30); // max(20, 30) is an r-value
```

# l-value references

- The references we've used are l-value references
  - Because we are referencing l-values

```cpp
int x {100};

int &ref1 = x; // ref1 is reference to l-value
ref1 = 1000;

int &ref2 = 100; // Error 100 is an r-value
```

```cpp
int square(int &n)
{
  return n*n;
}

int num {10};

square(num); // OK

square(5);   // Error - can't reference r-value 5 (because 5 is literal)
```

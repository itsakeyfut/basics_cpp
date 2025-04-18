# Relationship Between Arrays and Pointers

- The value of an array name is the address of the first element in the array
- The value of a pointer variable is an address
- If the pointer points to the same data type as the array element then the pointer and array name can be used interchangeably (almost)

```cpp
int scores[] {100, 95, 89};

cout << scores << endl;
cout << *scores << endl;

int *score_ptr {scores};

cout << score_ptr << endl;
cout << *score_ptr << endl;
```

```cpp
int scores[] {100, 95, 89};

int *score_ptr {scores};

cout << score_ptr[0] << endl;
cout << score_ptr[1] << endl;
cout << score_ptr[2] << endl;
```

# Using pointers in expressions

increment by 4

```cpp
int scores[] {100, 95, 89};

int *score_ptr {scores};

// Subscript Notation
cout << score_ptr << endl;       // 0x61ff10
cout << (score_ptr + 1) << endl; // 0x61ff14
cout << (score_ptr + 2) << endl; // 0x61ff18
```

```cpp
int scores[] {100, 95, 89};

int *score_ptr {scores};

// Offset Notation
cout << *score_ptr << endl;       // 100
cout << *(score_ptr + 1) << endl; // 95
cout << *(score_ptr + 2) << endl; // 89
```

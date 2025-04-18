# Dynamic Memory Allocation

Allocating storage from the heap at runtime

- We often don't know how much storage we need until we need it
- We can allocate storage for a variable at run time
- Recall C++ arrays
  - We had to explicitly provide the size and it was fixed
  - But vectors grow and shrink dynamically
- We can use pointers to access newly allocated heap storage

using new to allocate storage

```cpp
int *int_ptr {nullptr};
int_ptr = new int; // allocate an integer on the heap
cout << int_ptr << endl;
cout << *int_ptr << endl;
*int_ptr = 100;
cout << *int_ptr << endl;
```

using `delete` to deallocate storage

```cpp
int *int_ptr {nullptr};
int_ptr = new int;

delete int_ptr;
```

using `new[]` to allocate storage for an array

```cpp
int *array_ptr {nullptr};
int size {};

cout << "How big do you want the array? ";
cin >> size;

array_ptr = new int[size];
```

using `delete[]` to deallocate storage for an array

```cpp
int *array_ptr {nullptr};
int size {};

cout << "How big do you want the array?";
cin >> size;

array_ptr = new int[size];

delete [] array_ptr;
```

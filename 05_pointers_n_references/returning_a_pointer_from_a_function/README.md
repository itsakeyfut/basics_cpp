# Returning a Pointer from a Function

- Functions can also return pointers

```cpp
type *function();
```

- Should return pointers to
  - Memory dynamically allocated in the function
  - To data that was passed in
- Never return a pointer to a local function variable!

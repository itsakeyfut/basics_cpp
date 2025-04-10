# Pass by Reference

```cpp
void scale_number(int &num); // prototype

int main()
{
    int number {1000};
    scale_number(number);
    cout << number << endl; // 100
    return 0;
}

void scale_number(int &num)
{
    if (num > 100)
        num = 100;
}
```

```cpp
void swap(int &a, int &b);

int main()
{
    int x {10}, y {20};
    cout << x " " << y << endl; // 10 20
    swap(x, y);
    cout << x " " << y << endl; // 20 10
    return 0;
}

void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
```

```cpp
void print(const std::vector<int> &v);

int main()
{
    std::vector<int> data {1, 2, 3, 4, 5};
    print(data); // 1 2 3 4 5
    return 0;
}

void print(const std::vector<int> &v)
{
    for (auto num: v)
        cout << num << endl;
}
```

#include <iostream>

using namespace std;

int main()
{
    int *int_ptr{nullptr};
    int_ptr = new int;

    cout << int_ptr << endl;
    delete int_ptr;

    size_t size{0};
    double *tmp_ptr{nullptr};

    cout << "How many tmps?";
    cin >> size;
    tmp_ptr = new double[size];

    cout << tmp_ptr << endl;
    delete[] tmp_ptr;

    cout << endl;
    return 0;
}
#include <iostream>
#include "bublesort.cpp"
int main() {
    int array[] = {4, 6, 1, 2, 7, 9};
    int size = sizeof(array) / sizeof(array[0]);
    for(int i = 0; i < size; ++i)
    {
        std::cout << array[i] << '\t';
    }
    std::cout << std::endl;
    BubleSort(array, size);
    for(int i = 0; i < size; ++i)
    {
        std::cout << array[i] << '\t';
    }
    return 0;
}

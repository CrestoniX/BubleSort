#pragma once
#include <iostream>
void BubleSort(int* array, int size)
{
    for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size - 1 - i; ++j)
        {
            if(array[j] > array[j+1])
            {
                int buf = array[j];
                array[j] = array[j + 1];
                array[j + 1] = buf;
            }
        }
    }
}
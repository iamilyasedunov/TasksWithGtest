#include "../include/headers.h"

template <typename T>

std::vector<T> reverseArr(std::vector<T> mas){
    size_t size = mas.size();
    for (size_t i = 0; i < size/2; i++)
        std::swap(mas[i], mas[size - i - 1]);

    return mas;
}



#include "../include/headers.h"

template <typename T>

vector<T> reverseArr(vector<T> mas){
    size_t size = mas.size();
    for (size_t i = 0; i < size/2; i++) {
        swap(mas[i], mas[size - i - 1]);
    }
    return mas;
}


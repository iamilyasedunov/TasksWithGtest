#include "../include/headers.h"

std::string check(int N){
    if ((N % 3 == 0)&&(N % 5 != 0))
        return "Фиг";

    if ((N % 3 != 0)&&(N % 5 == 0))
        return "Вам";

    if ((N % 3 == 0)&&(N % 5 == 0))
        return "ФигВам";

    return std::to_string(N);
}

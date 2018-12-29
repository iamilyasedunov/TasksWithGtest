#include "../include/headers.h"

template <typename T>
bool isError(std::vector <T> sides)
{
    if ((sides[2] > sides[1] + sides[0])||
        (sides[1] > sides[2] + sides[0])||
        (sides[0] > sides[1] + sides[2]))
        return true;
}

template <typename T>
string isAngle(vector<T> sides)
{
    if (isError(sides))
        return "error";
    T sumTwo = sides[0]*sides[0] + sides[1]*sides[1];
    if (sides[2]*sides[2] == sumTwo)
        return "rectangular";
    if (sides[2]*sides[2] < sumTwo)
        return "acute";
    if (sides[2]*sides[2] > sumTwo)
        return "obtuse";

}

template <typename T>
string whatAngle(T a, T b, T c)
{
    vector <T> sides = {a, b, c};
    sort(sides.begin(), sides.end());
    return isAngle(sides);
}


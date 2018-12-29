#include "../include/headers.h"
#include "../include/task1.h"
#include "../include/task2.h"
#include "../include/task3.h"
#include "gtest/gtest.h"
#include <cstring>

// task1

TEST(TriangleWithTests,task1_test1)
{
	string res = whatAngle(3, 4, 5);
    EXPECT_EQ(res, "rectangular");
}

TEST(TriangleWithTests,task1_test2)
{
    string res = whatAngle(3, 6, 6);
    EXPECT_EQ(res, "acute");
}

TEST(TriangleWithTests,task1_test3)
{
    string res = whatAngle(9, 5, 6);
    EXPECT_EQ(res, "obtuse");
}

TEST(TriangleWithTests,task1_test4)
{
    string res = whatAngle(1, 1, 4);
    EXPECT_EQ(res, "error");
}

//task2

TEST(MassiveFrom1toN ,task2_test1)
{
    int N = 16;
    string res = check(3);
    string res1 = check(5);
    string res3 = check(15);
    string res4 = check(N);

    EXPECT_EQ(res, "Фиг");
    EXPECT_EQ(res1, "Вам");
    EXPECT_EQ(res3, "ФигВам");
    EXPECT_EQ(res4, to_string(N));
}

TEST(MassiveFrom1toN ,task2_test2)
{
    string ans[5] = {"1","2","Фиг","4","Вам"};
    for (int i = 1; i <= 5; i++)
        EXPECT_EQ(check(i), ans[i - 1]);
}

//task2

TEST(Reverse ,task3_test1)
{
    vector <int> mas = {5,4,3,2,1,1,2,4,5,7,4,2,3,4,5},
        reverse_arr, reverse_by_stl;
    reverse_arr = reverseArr(mas);
    reverse(mas.begin(), mas.end());
    for (size_t i = 0;i < mas.size(); i++)
        EXPECT_EQ(mas[i], reverse_arr[i]);
}

TEST(Reverse ,task3_test2)
{
    vector <char> mas = {'F','i','r','s','t','l','i','n','e','s','o','f','t','w','a','r','e'},
            reverse_arr, reverse_by_stl;
    reverse_arr = reverseArr(mas);
    reverse(mas.begin(), mas.end());
    for (size_t i = 0;i < mas.size(); i++)
        EXPECT_EQ(mas[i], reverse_arr[i]);
}
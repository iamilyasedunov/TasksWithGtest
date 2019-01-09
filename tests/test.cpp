#include "../include/headers.h"
#include "../include/task1.h"
#include "../include/task2.h"
#include "../include/task3.h"
#include "../include/task4.h"
#include "gtest/gtest.h"
#include <cstring>



// task1

TEST(TriangleWithTests,task1_test1)
{
    std::string res = whatAngle(3, 4, 5);
    EXPECT_EQ(res, "rectangular");
}

TEST(TriangleWithTests,task1_test2)
{
    std::string res = whatAngle(3, 6, 6);
    EXPECT_EQ(res, "acute");
}

TEST(TriangleWithTests,task1_test3)
{
    std::string res = whatAngle(9, 5, 6);
    EXPECT_EQ(res, "obtuse");
}

TEST(TriangleWithTests,task1_test4)
{
    std::string res = whatAngle(1, 1, 4);
    EXPECT_EQ(res, "error");
}

//task2

TEST(MassiveFrom1toN ,task2_test1)
{
    int N = 16;
    std::string res = check(3);
    std::string res1 = check(5);
    std::string res3 = check(15);
    std::string res4 = check(N);

    EXPECT_EQ(res, "Фиг");
    EXPECT_EQ(res1, "Вам");
    EXPECT_EQ(res3, "ФигВам");
    EXPECT_EQ(res4, std::to_string(N));
}

TEST(MassiveFrom1toN ,task2_test2)
{
    std::string ans[5] = {"1","2","Фиг","4","Вам"};
    for (int i = 1; i <= 5; i++)
        EXPECT_EQ(check(i), ans[i - 1]);
}

//task3

TEST(Reverse ,task3_test1)
{
    std::vector <int> mas = {5,4,3,2,1,1,2,4,5,7,4,2,3,4,5},
        reverse_arr, reverse_by_stl;
    reverse_arr = reverseArr(mas);
    reverse(mas.begin(), mas.end());
    for (size_t i = 0;i < mas.size(); i++)
        EXPECT_EQ(mas[i], reverse_arr[i]);
}

TEST(Reverse ,task3_test2)
{
    std::vector <char> mas = {'F','i','r','s','t','l','i','n','e','s','o','f','t','w','a','r','e'},
            reverse_arr, reverse_by_stl;
    reverse_arr = reverseArr(mas);
    reverse(mas.begin(), mas.end());
    for (size_t i = 0;i < mas.size(); i++)
        EXPECT_EQ(mas[i], reverse_arr[i]);
}

//test for CaptureStdout()

TEST(CaptureStdout,test0){
    testing::internal::CaptureStdout();
    std::cout<<"MyTest";
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ("MyTest", output);
}

//task4 output

TEST(LinkedList, task4_test1_addHead_addTail){
    LinkedList list;
    std::vector<int> vec_in = {1,2,3,4,5};
    for (int x: vec_in)
        list.addHead(x);

    testing::internal::CaptureStdout();
    list.print();
    std::string output1 = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output1, "5 4 3 2 1 ");

    for (int x: vec_in)
        list.addTail(x);
    testing::internal::CaptureStdout();
    list.print();
    std::string output2 = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output2, "5 4 3 2 1 1 2 3 4 5 ");
}

TEST(LinkedList, task4_test2_insert) {
    LinkedList list;
    std::vector<int> vec_in = {1, 2, 5};
    for (int x: vec_in)
        list.insert(x);     //or addTail(x)

    list.insert(3, 4);
    list.insert(3, 3);

    testing::internal::CaptureStdout();
    list.print();
    std::string output1 = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output1, "1 2 3 4 5 ");
}















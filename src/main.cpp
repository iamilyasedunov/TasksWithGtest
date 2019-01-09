#include <iostream>

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../include/headers.h"
#include "../include/task4.h"


int main(int argc, char* argv[]){
    testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
    /*
    LinkedList list;
    vector<int> vec_in = {1,2,3,4,5};
    for (int x: vec_in)
        list.addHead(x);
    testing::internal::CaptureStdout();
    list.print();
    std::string output = testing::internal::GetCapturedStdout();
    std::cout<<output;
    */
    return 0;
}
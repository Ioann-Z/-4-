#include "pch.h"
#include <gtest/gtest.h>
#include <iostream>
#include <vector>

using namespace std;

vector<int> increaseVectorElements(const vector<int>& vec, int n)
{
    vector<int> result;
    for (int num : vec)
    {
        result.push_back(num + n);
    }
    return result;
}



TEST(IncreaseVectorElementsTest, Test1)
{
    vector<int> vec = { 1, 2, 3, 4, 5 };
    int n = 10;
    vector<int> expected = { 11, 12, 13, 14, 15 };

    ASSERT_EQ(expected, increaseVectorElements(vec, n));
}

int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
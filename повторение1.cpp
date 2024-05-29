#include <vector>

std::vector<int> increaseVectorValues(const std::vector<int>& vec, int n) {
    std::vector<int> resultVec(vec.size());

    for (size_t i = 0; i < vec.size(); ++i) {
        resultVec[i] = vec[i] + n;
    }

    return resultVec;
}

#include <gtest/gtest.h>
#include "your_file.h" 

TEST(IncreaseVectorValuesTest, SimpleTest) {
    std::vector<int> inputVec = { 1, 2, 3, 4, 5 };
    int n = 3;

    std::vector<int> expected = { 4, 5, 6, 7, 8 };
    std::vector<int> result = increaseVectorValues(inputVec, n);

    ASSERT_EQ(expected, result);
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
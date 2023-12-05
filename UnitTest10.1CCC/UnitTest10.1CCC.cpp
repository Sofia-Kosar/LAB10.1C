
#include "pch.h" 
#define _CRT_SECURE_NO_WARNINGS 
#include "CppUnitTest.h" 
#include <fstream> 
#include "../10.1CCC/10.1CCC.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(Test)
{
public:
    TEST_METHOD(testCountABC)
    {
        int result = hasAdjacentPairs("test.txt");
        std::ofstream file("test.txt");
        file << "abc\n";
        file << "aabcdefabc\n";
        file << "xyz\n";
        file.close();

        Assert::AreEqual(result, 1);
    }
};
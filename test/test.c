#define CTEST_MAIN
#include "computing.h"
#include <ctest.h>
#include <string.h>

CTEST(sorting, correct_input)
{
    char* k1 = "привет";
    char* k2 = "пока";
    int result = sort(k1, k2);
    ASSERT_EQUAL(result, 1);
}
int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}
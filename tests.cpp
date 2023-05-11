#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Task A: printRange")
{
    CHECK(printRange(1, 10) == "1,2,3,4,5,6,7,8,9,10");
    CHECK(printRange(-2, 10) == "-2,-1,0,1,2,3,4,5,6,7,8,9,10");
    CHECK(printRange(1, 1) == "1");
    CHECK(printRange(10, 1) == "");
}

TEST_CASE("Task B: sumRange")
{
    CHECK(sumRange(1, 3) == 6);
    CHECK(sumRange(-2, 10) == 52);
    CHECK(sumRange(1, 1) == 1);
    CHECK(sumRange(10, 1) == 0);
}

TEST_CASE("Task C: sumArray")
{
    int arr1[] = {1, 2, 3, 4, 5};
    CHECK(sumArray(arr1, 5) == 15);
    int arr2[] = {1, 2, 3, 4, 5, 6};
    CHECK(sumArray(arr2, 6) == 21);
    int arr3[] = {-1, -2, -3, -4, -5};
    CHECK(sumArray(arr3, 5) == -15);
    int arr4[] = {1};
    CHECK(sumArray(arr4, 1) == 1);
    int arr5[] = {0};
    CHECK(sumArray(arr5, 0) == 0);
}

TEST_CASE("Task D: isAlphanumeric")
{
    CHECK(isAlphanumeric("ABCD") == true);
    CHECK(isAlphanumeric("Abcd1234xyz") == true);
    CHECK(isAlphanumeric("KLMN 8-7-6") == false);
    CHECK(isAlphanumeric("ABCDabcd") == true);
    CHECK(isAlphanumeric("ABCDabcd ") == false);
    CHECK(isAlphanumeric("ABCDabcd!") == false);
}
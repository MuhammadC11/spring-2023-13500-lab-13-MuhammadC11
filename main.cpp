#include <iostream>
#include "funcs.h"

int main()
{
    std::cout << "Task A: \n";
    std::cout << "Testing printRange(1, 10):\n";
    std::cout << printRange(1, 10) << "\n";
    std::cout << "Testing printRange(-2, 10):\n";
    std::cout << printRange(-2, 10) << "\n";
    std::cout << "Testing printRange(1, 1):\n";
    std::cout << printRange(1, 1) << "\n";
    std::cout << "Testing printRange(10, 1):\n";
    std::cout << printRange(10, 1) << "\n";

    std::cout << "\nTask B: \n";
    std::cout << "Testing sumRange(1, 3):\n";
    std::cout << sumRange(1, 3) << "\n";
    std::cout << "Testing sumRange(-2, 10):\n";
    std::cout << sumRange(-2, 10) << "\n";
    std::cout << "Testing sumRange(1, 1):\n";
    std::cout << sumRange(1, 1) << "\n";
    std::cout << "Testing sumRange(10, 1):\n";
    std::cout << sumRange(10, 1) << "\n";

    std::cout << "\nTask C: \n";
    int arr[] = {1, 3, 5, 7, 9};
    std::cout << "Testing sumArray(arr, 5):\n";
    std::cout << sumArray(arr, 5) << "\n";
    std::cout << "Testing sumArray(arr, 1):\n";
    std::cout << sumArray(arr, 1) << "\n";
    std::cout << "Testing sumArray(arr, 0):\n";
    std::cout << sumArray(arr, 0) << "\n";

    std::cout << "\nTask D: \n";
    std::cout << "Testing isAlphanumeric(\"ABCD\"):\n";
    std::cout << isAlphanumeric("ABCD") << "\n";
    std::cout << "Testing isAlphanumeric(\"Abcd1234xyz\"):\n";
    std::cout << isAlphanumeric("Abcd1234xyz") << "\n";
    std::cout << "Testing isAlphanumeric(\"KLMN 8-7-6\"):\n";
    std::cout << isAlphanumeric("KLMN 8-7-6") << "\n";

    std::cout << "\nTask E: \n";
    std::cout << "Testing nestedParens(\"((()))\"):\n";
    std::cout << nestedParens("((()))") << "\n";
    std::cout << "Testing nestedParens(\"()\"):\n";
    std::cout << nestedParens("()") << "\n";
    std::cout << "Testing nestedParens(\"((\"):\n";
    std::cout << nestedParens("((") << "\n";
    std::cout << "Testing nestedParens(\"\"):\n";
    std::cout << nestedParens("") << "\n";

       return 0;
}
#include <iostream>

std::string printRange(int left, int right)
{
    std::string range = "";
    if (left > right) // if the left bound is greater than the right bound.
    {
        return range; // return an empty string.
    }
    else if (left == right) // if the left bound is equal to the right bound.
    {
        range += std::to_string(left); // convert the left bound to a string and add it to the range.
        return range;                  // return the range.
    }
    else
    {
        // recursively write a solution without using for or while loops.
        range += std::to_string(left) + "," + printRange(left + 1, right); // convert the left bound to a string and add it to the range, then add a comma, then recursively call the function again with the left bound incremented by 1.
    }
    return range; // return the range.
}

int sumRange(int left, int right)
{
    int sum = 0;
    if (left > right) // if the left bound is greater than the right bound.
    {
        return sum; // return 0.
    }
    else if (left == right) // if the left bound is equal to the right bound.
    {
        sum += left; // add the left bound to the sum.
        return sum;  // return the sum.
    }
    else
    {
        // recursively write a solution without using for or while loops.
        sum += left + sumRange(left + 1, right); // add the left bound to the sum, then recursively call the function again with the left bound incremented by 1.
    }
    return sum; // return the sum.
}

int sumArray(int *arr, int size) // arr is a pointer to the first element of the array.
{
    int sum = 0;   // initialize the sum to 0.
    if (size == 0) // if the size of the array is 0.
    {
        return sum; // return 0.
    }
    else if (size == 1) // if the size of the array is 1.
    {
        sum += arr[0]; // add the first element of the array to the sum.
        return sum;    // return the sum.
    }
    else
    {
        // recursively write a solution without using for or while loops.
        sum += arr[0] + sumArray(arr + 1, size - 1); // add the first element of the array to the sum, then recursively call the function again with the array incremented by 1 and the size decremented by 1.
    }
    return sum; // return the sum.
}

bool isAlphanumeric(std::string s)
{
    if (s.length() == 0) // if the length of the string is 0.
    {
        return true; // return true.
    }
    else if (s.length() == 1) // if the length of the string is 1.
    {
        if (isalpha(s[0]) || isdigit(s[0])) // if the first character of the string is a letter or a digit.
        {
            return true; // return true.
        }
        else
        {
            return false; // return false.
        }
    }
    else
    {
        // recursively write a solution without using for or while loops.
        if (isalpha(s[0]) || isdigit(s[0])) // if the first character of the string is a letter or a digit.
        {
            return isAlphanumeric(s.substr(1)); // return the result of recursively calling the function again with the first character of the string removed.
        }
        else
        {
            return false; // return false.
        }
    }
}

bool nestedParens(std::string s)
{
    if (s.length() == 0) // if the length of the string is 0.
    {
        return true; // return true.
    }
    else if (s.length() == 1) // if the length of the string is 1.
    {
        return false; // return false.
    }
    else
    {
        // recursively write a solution without using for or while loops.
        if (s[0] == '(' && s[s.length() - 1] == ')') // if the first character of the string is a left parenthesis and the last character of the string is a right parenthesis.
        {
            return nestedParens(s.substr(1, s.length() - 2)); // return the result of recursively calling the function again with the first and last characters of the string removed.
        }
        else
        {
            return false; // return false.
        }
    }
}

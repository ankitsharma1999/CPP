//! Checks if a string is palindrome or not using recursion.

#include <iostream>
using namespace std;

bool checkPalindrome(string &str, int l, int r)
{
    if (r <= l)
        return true;
    else
        return (str[l] == str[r]) && checkPalindrome(str, l + 1, r - 1);
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    if (checkPalindrome(str, 0, str.length() - 1))
        cout << "Yes"
             << "\n";
    else
        cout << "No"
             << "\n";
    return 0;
}
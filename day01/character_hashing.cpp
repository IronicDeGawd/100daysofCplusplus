// Character hashing using array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // take input
    string s;
    cout << "Enter string" << endl;
    cin >> s;

    // for small letters(a-z) hash[26] & subtract by a to count each and keep in an array
    // for capital letters(A-Z) hash[26] & subtract by A to count each and keep in an array
    // for combined (a-z A-z), hash[256] & no need to subtract
    int hash[26] = {0};

    // precompute using array

    // Error here: `int i` is a signed integer, while `s.size()` returns an unsigned type (`std::string::size_type`, typically `std::size_t`). Comparing signed and unsigned types can cause unexpected behavior, especially if the unsigned value is very large.
    for (int i = 0; i < s.size(); i++)
    {

        // Error here : s[i] is a char, and subtracting 'a' gives an int. If s[i] is not a lowercase letter, the result may be negative, and converting this negative value to an unsigned type (e.g., array index) can lead to unexpected behavior.
        hash[s[i] - 'a']++;
    }

    char q;
    cout << "Enter character to search count" << endl;
    cin >> q;

    // fetch
    cout << hash[q - 'a'] << endl;
}

// Character hashing can be done by arrays itself, by
// Command to run : g++ -Wno-vla -o program character_hashing.cpp

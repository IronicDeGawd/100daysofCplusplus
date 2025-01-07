// Number Hashing using arrays

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    cout << "Enter size" << endl;
    cin >> s;

    // Current Error: ISO C++ forbids variable length array ‘n’ [-Wvla]gcc
    int n[s];

    // take input
    cout << "Enter number" << endl;
    for (int i = 0; i < s; i++)
    {
        cin >> n[i];
    }

    int hash[13] = {0};
    // precompute using array
    for (int i = 0; i < s; i++)
    {
        hash[n[i]]++;
    }

    int q;
    cout << "Enter number to search count" << endl;
    cin >> q;
    // fetch
    cout << hash[q] << endl;
}

// Globally array can have 1e7 size and inside main, it can have maximum 1e6
// Therefore, for bigger numbers > 1e7/1e6 arrays become inefficient to use

// Command to run: g++ -Wno-vla -o program number_hashing.cpp

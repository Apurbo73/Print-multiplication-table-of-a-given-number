#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Print multiplication table of a given number:
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        cout << a << "*" << i << " = " << a * i << endl;
    }
}
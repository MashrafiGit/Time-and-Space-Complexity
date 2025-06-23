#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;    // O(1)
    cin >> n; // O(1)

    for (int i = 1; i <= n; i *= 2) // O(log2N)
    {
        cout << i << " ";
    }

    return 0; // O(1)
}

//  in total linear time complexity is:
// => O(1 + 1 + 1 + O(log2N))
// => O(log2N)

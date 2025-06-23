#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;    // O(1)
    cin >> n; // O(1)

    for (int i = 1; i <= n; i++) // O(n)
    {
        cout << i << " ";
    }

    cout << endl; // O(1)

    for (int i = 1; i <= n; i += 2) // O(n/2)
    {
        cout << i << " ";
    }

    return 0; // O(1)
}

//  in total linear time complexity is:
// => O(1 + 1 + n + 1 + n/2 +1)
// => O(n)

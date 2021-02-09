 // C++ Program to implement
// the above approach
 #include <bits/stdc++.h>
using namespace std;
 // Fucntion to check if sum of first
// N natural numbers is >= X
bool isGreaterEqual(int N, int X)
{
    return (N * 1LL * (N + 1) / 2) >= X;
}
 // Finds minimum value of
// N such that sum of first
// N natural number >= X
int minimumPossible(int X)
{
    for (int i = 1; i <= X; i++) {
         // Check if sum of first i
        // natural number >= X
        if (isGreaterEqual(i, X))
            return i;
    }
}
 // Driver Code
int main()
{
    // Input
    int X = 14;
     // Finds minimum value of
    // N such that sum of first
    // N natural number >= X
    cout << minimumPossible(X);
    return 0;
}
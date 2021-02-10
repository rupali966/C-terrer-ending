// C++ program to implement
// the above approach
 #include <bits/stdc++.h>
using namespace std;
 // Function to find the smallest positive integer
// that divides array elements to get the sum <= K
int findSmallestInteger(int arr[], int N, int K)
{
     // Stores minimum possible of the smallest
    // positive integer satisfying the condition
    int left = 1;
     // Stores maximum possible of the smallest
    // positive integer satisfying the condition
    int right = *max_element(arr, arr + N);
     // Apply binary search over
    // the range [left, right]
    while (left < right) {
         // Stores middle element
        // of left and right
        int mid = (left + right) / 2;
         // Stores sum of
        // array elements
        int sum = 0;
         // Traverse the array
        for (int i = 0; i < N; i++) {
             // Update sum
            sum += (arr[i] + mid - 1) / mid;
        }
         // If sum is greater than K
        if (sum > K) {
             // Update left
            left = mid + 1;
        }
        else {
             // Update right
            right = mid;
        }
    }
    return left;
}
 // Driver Code
int main()
{
    int arr[] = { 1, 2, 5, 9 };
    int N = sizeof(arr) / sizeof(arr[0]);
    ;
    int K = 6;
    cout << findSmallestInteger(arr, N, K);
}
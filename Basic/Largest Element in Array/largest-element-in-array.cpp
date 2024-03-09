//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int max = 0;
        int left = 0;
        int right = n-1;
        while(left<=right){
            if(arr[left]<=arr[right]){
                if(max<arr[right]){
                    max=arr[right];
                }
                left++; right--;
            }
            else{
                if(max<arr[left]){
                    max = arr[left];
                }
                left++;right--;
            }
        }
        return max;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.largest(arr, n) << "\n";
    }
    return 0;
}

// } Driver Code Ends
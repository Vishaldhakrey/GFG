//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  private : 
    int isAllocated(vector<int>arr, int pages, int n) {
        int cntStd = 1;
        long long sumOfPages = 0;
        
        for (int i=0; i<n; i++) {
            if (sumOfPages + arr[i] <= pages) {
                sumOfPages += arr[i];
            }
            else {
                sumOfPages = arr[i];
                cntStd++;
            }
        }
        return cntStd;
    }
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        
        if (n < k) {
            return -1;
        }
        int page = *max_element(arr.begin(), arr.end());
        long long totalPages = accumulate(arr.begin(), arr.end(), 0);
        int left = page;
        long long right = totalPages;
        
        while (left <= right) {
            int mid = left + (right-left)/2;
            
            int cntStd = isAllocated(arr, mid, n);
            
            if (cntStd <= k) {
                right = mid-1;
            }
            else {
                left = mid+1;
            }
        }
        return left;
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.findPages(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
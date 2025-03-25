//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  private: 
    bool isPlacedStalls(vector<int>&stalls, int k, int dist, int n) {
        int cow = 1;
        int last = stalls[0];
        
        for (int i=1; i<n; i++){
            if (stalls[i]-last >= dist) {
                cow++;
                last = stalls[i];
            }
            
            if (cow >= k) {
                return true;
            }
        } 
        return false;
    }
  public:

    int aggressiveCows(vector<int> &stalls, int k) {

        // Write your code here
        int n = stalls.size();
        
        sort(stalls.begin(), stalls.end());
         
        int left = 1, right = stalls[n-1];
        
        while (left <= right) {
            int mid = left + (right-left)/2;
            
            if (isPlacedStalls(stalls, k, mid, n)) {
                left = mid+1;
            }
            else {
                right = mid-1;
            }
        }
        return right;
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
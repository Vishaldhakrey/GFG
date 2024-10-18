//{ Driver Code Starts
#include <bits/stdc++.h>
#include <limits.h>
#include <random>
#include <sstream>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        
        sort(arr.begin(), arr.end());
        int smallest = arr[0];
        
        int secSmallest = -1;
        
        for(int i=1; i<arr.size(); i++) {
            if(arr[i]>smallest){
                secSmallest = arr[i];
                break;
            }
        }
        
        if(secSmallest == -1) {
            return {-1};
        }
        
        
        return {smallest, secSmallest};
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.minAnd2ndMin(arr);
        if (ans[0] == -1)
            cout << -1 << endl;
        else
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends
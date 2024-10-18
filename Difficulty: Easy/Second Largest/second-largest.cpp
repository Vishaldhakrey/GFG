//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        sort(arr.begin(), arr.end());
        
        int secondLargest = arr[arr.size()-1];
        for(int i=arr.size()-2; i>=0; i--){
           if(arr[i]<secondLargest){
               secondLargest = arr[i];
               break;
           } 
        }
        if(secondLargest == arr[arr.size()-1]) {
            return -1;
        }
        return secondLargest;
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends
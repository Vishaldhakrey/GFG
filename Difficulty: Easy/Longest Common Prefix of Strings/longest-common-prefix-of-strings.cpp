//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        sort(arr.begin(), arr.end());
        
        string fString = arr[0];
        string lString = arr[arr.size()-1];
        
        int minLen = min(fString.size(), lString.size());
        
        int i=0; 
        while(i<minLen && fString[i] == lString[i]) {
            i++;
        }
        
        if(i == 0) {
            return "-1";
        }
        return fString.substr(0, i);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends
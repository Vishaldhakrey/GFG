//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        // write code here
        int n=arr.size();
        
        vector<int>result;
        
        int i=0, j=0; 
        deque<int>dq;
        
        while (j<n) {
            if (arr[j] < 0) {
                dq.push_back(arr[j]);
            }
            if ((j-i+1) == k) {
                if (dq.empty()) {
                    result.push_back(0);
                }
                else {
                    result.push_back(dq.front());
                    if (arr[i] < 0) {
                        dq.pop_front();
                    }
                }
                i++;
            }
            j++;
        }
        return result;
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
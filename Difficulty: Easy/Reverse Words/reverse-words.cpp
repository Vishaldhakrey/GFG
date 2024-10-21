//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
        stack<string>st;
        string s = "";
        for(int i=0; i<str.size(); i++) {
            if(str[i] != '.') {
                s+=str[i];
            }
            
            else if(!s.empty()) {
                st.push(s);
                s = "";
            }
        }
        if(!s.empty()) {
            st.push(s);
           
        }
         s = "";
        while(!st.empty()) {
            s += st.top();
            st.pop();
            if(!st.empty()) {
                s += ".";
            }
        }
        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends
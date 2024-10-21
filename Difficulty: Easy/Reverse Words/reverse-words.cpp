//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
        reverse(str.begin(), str.end());
        int i=0;
        for(int l=0; l<str.size(); l++ ) {
            if(str[l]!='.') {
                if(i > 0) {
                    str[i++]='.';
                }
                
                int r = l;
                while(r<str.size() && str[r] != '.') {
                    str[i++] = str[r++];
                }
                
                reverse(str.begin() + i-(r-l), str.begin()+i);
                
                l = r;
            }
        }
        
        str.erase(str.begin()+i, str.end());
        return str;
        
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
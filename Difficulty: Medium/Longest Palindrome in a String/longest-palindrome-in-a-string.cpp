//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        // code here
        int size = S.size();
        int start = 0, end = 0, maxLen= 1;
        
        for(int i=0; i<size; i++){
            int l = i, r = i;
            
            while(l>=0 && r<size){
                if(S[l]!=S[r]){
                    break;
                }
                l--;
                r++;
            }
            int len = r-l-1;
            
            if(len>maxLen){
                maxLen = len;
                start = l+1;
                end = r-1;
            }
        }
        
        for(int i=0; i<size; i++){
            int l=i, r=i+1;
            while(l>=0 && r<size){
                if(S[l]!=S[r]){
                    break;
                }
                l--;
                r++;
            }
            int len = r-l-1;
            
            if(len>maxLen){
                maxLen = len;
                start = l+1;
                end = r-1;
            }
        }
        return S.substr(start, maxLen);
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
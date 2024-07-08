//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            // code here
            int count = 0;
            for(int i=0; i<s.size(); i++){
                if(s[i]=='.'){
                    count++;
                }
            }
            if(count!=3){
                return 0;
            }
            
            unordered_set<string>st;
            for(int i=0; i<256; i++){
                st.insert(to_string(i));
            }
            
            count = 0;
            string temp="";
            for(int i=0; i<s.size(); i++){
                if(s[i]!='.'){
                    temp = temp+s[i];
                }
                else{
                    if(st.count(temp)!=0) count++;
                    temp="";
                }
            }
          if(st.count(temp)!=0) count++;
          if(count!=4) return 0;
          return 1;
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends
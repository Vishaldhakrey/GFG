//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        string str = "";
        stack<string>st;
        S.push_back('.');
        
        for(char ch: S){
            if(ch != '.'){
                str.push_back(ch);
            }
            else{
                st.push(str);
                str = "";
            }
        }
        string ans = "";
        while(!st.empty()){
            ans+=st.top();
            ans.push_back('.');
            st.pop();
        }
        ans.pop_back();
       
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
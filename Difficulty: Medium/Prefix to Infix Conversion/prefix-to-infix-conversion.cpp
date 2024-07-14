//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
   bool isOperator(char ch) {
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '^') {
        return true;
    }
    return false;
}

    string preToInfix(string pre_exp) {
        // Write your code here
        
        stack<string>st;
        
        for(int i=pre_exp.length()-1; i>=0; i--){
            
            if(isOperator(pre_exp[i])){
                
                string s1 = st.top(); 
                st.pop();
                string s2 = st.top();
                st.pop();
                
                string ans = "(" + s1 + pre_exp[i] + s2 + ")";
                
                st.push(ans);
            }
            else{
                st.push(string(1, pre_exp[i]));
            }
        }
        return st.top();
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToInfix(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends
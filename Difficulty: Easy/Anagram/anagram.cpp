//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    string sortString(string str){
        vector<int>freq(26, 0);
        
        for(int i=0; i<str.size(); i++){
            int index = str[i]-'a';
            freq[index]++;
        }
        
        int j=0;
        for(int i=0; i<26; i++){
            while(freq[i]--){
                str[j++] = i+'a';
            }
        }
        return str;
    }
    bool isAnagram(string a, string b){
        
        // Your code here
        if(a.size()!=b.size()){
            return 0;
        }
        string sortedStringa = sortString(a);
        string sortedStringb = sortString(b);
        
        return sortedStringa == sortedStringb ? 1 : 0;
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    bool isAnagram(vector<int>& pat_freq, vector<int>& txt_freq) {
        return txt_freq == pat_freq;
    }
    int search(string &pat, string &txt) {
        // code here
        int m = pat.size();
        int n = txt.size();
        
        int count = 0;
        
        vector<int>pat_freq(26, 0), txt_freq(26, 0);
        
        for (int i=0; i<m; i++) {
            pat_freq[pat[i] - 'a']++;
            txt_freq[txt[i] - 'a']++;
        }
        
        if (isAnagram(pat_freq, txt_freq)) {
            count++;
        }
        
        for (int i=m; i<n; i++) {
            txt_freq[txt[i-m] - 'a']--;
            txt_freq[txt[i] - 'a']++;
            
            if (isAnagram(pat_freq, txt_freq)) {
                count++;
            }
        }
        return count;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
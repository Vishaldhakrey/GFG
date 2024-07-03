//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        if(str1.size() != str2.size()){
            return false;
        }
        
        if(str1.length()<2){
            return str1==str2;
        }
        
        int n = str1.length();
        
        string clockwiseString = str1.substr(n-2, 2) + str1.substr(0, n-2);
        string antiClockWiseString = str1.substr(2, n-2) + str1.substr(0, 2);
        
        return (str2 == clockwiseString || str2 == antiClockWiseString);
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends
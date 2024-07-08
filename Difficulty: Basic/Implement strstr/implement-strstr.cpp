//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     for(int i=0; i<s.size(); i++){
         if(s[i]==x[0]){
             int j=0;
             int count=0;
             while(j<x.size()){
                 if(s[i+j]==x[j]){
                     count++;
                     j++;
                 }
                 else break;
             }
             if(count == x.size()){
             return i;
         }
         }
         
     }
     return -1;
}
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void sumOfsubset(int ind, int sum, vector<int>&arr, int N, vector<int>&sumSubset){
        if(ind == arr.size()){
            sumSubset.push_back(sum);
            return;
        }
        sumOfsubset(ind+1, sum+arr[ind], arr, N, sumSubset);
        sumOfsubset(ind+1, sum, arr, N, sumSubset);
        
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>sumSubset;
        sumOfsubset(0,0,arr,N,sumSubset);
        sort(sumSubset.begin(), sumSubset.end());
        return sumSubset;
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
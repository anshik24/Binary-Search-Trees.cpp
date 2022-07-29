//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:

void sortedArrayBST(vector<int>&nums,vector<int>&v,int st,int end){
    if(st>end){
    return ;
    }
    int mid=(st+end)/2;
    v.push_back(nums[mid]);
    sortedArrayBST(nums,v,st,mid-1);
    sortedArrayBST(nums,v,mid+1,end);
    
}
/*void preorder(Node*root,vector<int>& arr){
    if(root==NULL)
    return ;
    arr.push_back(root->data);
    preorder(root->left,arr);
    preorder(root->right,arr);
    
}*/

    vector<int> sortedArrayToBST(vector<int>& nums) {
        int n=nums.size()-1;
                vector<int>ans;
     sortedArrayBST(nums,ans,0,n);

       // preorder(root,ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends

// ques - https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1#

class Solution
{
	public:
	    void permute(string S,int l,vector<string>&v){
	        
	        int r=S.size()-1;
	        
	        if(l==r){
	            v.push_back(S);
	            return;
	        }
	        
	        else{
	            for(int i=l;i<=r;i++){
	                swap(S[l],S[i]);
	                permute(S,l+1,v);
	                swap(S[l],S[i]);
	            }
	        }
	    }
	
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    int l=0;
		    vector<string>v;
		    permute(S,l,v);
		    
		    set<string>w(v.begin(),v.end());
		    vector<string>v1(w.begin(),w.end());
		    
		    return v1;
		}
};

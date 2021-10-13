// ques - https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1/?track=MD-Math&batchId=144#

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        sort(array.begin(),array.end());
        
        if(array[n-2]!=n){
            return n;
        }
        
        
        for(int i=0;i<n;i++){
            
            if(array[i]!=i+1){
                return i+1;
            }
            
        }
        
        return -1;
    }
};

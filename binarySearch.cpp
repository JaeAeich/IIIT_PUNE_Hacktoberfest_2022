//Binary search implementation to check if an element is present in a non decreasing array or not.
//TC:O(logN)

bool binSearch(vector<int> &v, int k){
  //search space : 0-v.size()-1, ie the entire array
  int lo=0, hi=v.size()-1;
  bool ans =false;
  
  //main loop
  while(hi>=lo){
    //halving the search space.
    int mid=lo+(hi-lo)/2;
    
    //if ele found return true.
    if(v[mid]==k) return true;
    
    //if one right of ele, search left
    else if(v[mid]>t){
      hi=mid-1;
    }
    
    //vice versa
    else{
      lo=mid+1;
    }
  } 
  return ans;
}

int Solution::removeDuplicates(vector<int> &A) {
      int i,j=0;
    for(i=1;i<A.size();i++){
        if(A[i]!=A[j]){
             j++;
            A[j]=A[i];
           
        }
    }
    return j+1;
}

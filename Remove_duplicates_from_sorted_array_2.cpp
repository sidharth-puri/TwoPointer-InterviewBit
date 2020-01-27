int Solution::removeDuplicates(vector<int> &A) {
   int count=1,i,j=0;
   for(i=1;i<A.size();i++){
       if(A[i]==A[j] && count<2){
           j++;
           A[j]=A[i];
       }
       if(A[i]!=A[j]){
           j++;
           A[j]=A[i];
           count=0;
       }
       count++;
   }
   return j+1;
}

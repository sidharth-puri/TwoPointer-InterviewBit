int Solution::diffPossible(vector<int> &A, int B) {
    int n=A.size();
    int r=1;
    int l=0;
    while(l<n && r<n){
        if(r!=l && A[r]-A[l]==B){
            return 1;
        }
        else if(A[r]-A[l]>B){
            l++;
        }
        else {
            r++;
        }
    }
    return 0;
}

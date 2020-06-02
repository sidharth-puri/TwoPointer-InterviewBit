/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
 int max(int a,int b){
     if(a>b) return a;
     return b;
 }
 int min(int a,int b){
     if(a<b) return a;
     return b;
 }
int maxArea(int* A, int len) {
   int l = 0; 
    int r = len -1; 
    int area = 0; 
      
    while (l < r) 
    { 
        area = max(area, min(A[l], 
                        A[r]) * (r - l)); 
                          
            if (A[l] < A[r]) 
                l += 1; 
                  
            else
                r -= 1; 
    } 
    return area; 

}

/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Void. Just modifies the args passed by reference 
 */
void sortColors(int* a, int n1) {
    int i,j=0,count=0;
    for(i=0;i<n1;i++){
        if(a[i]==0){
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            j++;
        }
    }
    int next=j;
     for(i=next;i<n1;i++){
        if(a[i]==1){
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            j++;
            
        }
    }
    next=j;
     for(i=next;i<n1;i++){
        if(a[i]==2){
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            j++;
            
        }
    }
}

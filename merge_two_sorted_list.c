/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer array
 * @input n2 : Integer array's ( B ) length
 * 
 * @Return Returns a array of size n1 + n2 with A and B merged. 
 */
int* merge(int* a, int n1, int* b, int n2) {
    int* arr=(int*)malloc(sizeof(int)*(n1+n2));
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(a[i]<a[j]){
            arr[k]=a[i];
            k++;
            i++;
        }
        else {
            arr[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        k++;
        i++;
    }
    while(j<n2){
        arr[k]=b[j];
        j++;
        k++;
    }
    return arr;
}

int compare(const void *a,const void *b)
{
 return *(int*)a-*(int*)b;
}

int threeSumClosest(int* A, int n1, int B) {

  qsort(A,n1,sizeof(int),compare);
  int i,j,k;
  int min=INT_MAX;
  int min_sum;
  long sum,diff;
  for(i=0;i<=n1;i++)
  {
    j=i+1;
    k=n1-1;
    while(j<k)
    {
      sum=A[i]+A[j]+A[k];
      diff=sum-B;
      if(abs(diff)<abs(min))
      {
          min_sum=sum;
          min=diff;
      }
      if(diff<0)
       j++;
      else
       k--;
    }
  }
 return min_sum;
}

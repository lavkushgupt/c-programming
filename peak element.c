
#include<stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int arr[50];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        
    }
   for(i=1;i<n-1;i++) 
   {       
    if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
       {
   printf("find peak element %d ",arr[i]);    
   }    
   
   }
   return 0;
   
}

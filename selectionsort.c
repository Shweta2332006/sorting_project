#include<stdio.h>
void selectionsort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    int minindex=i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[minindex]){
        minindex=j;
      }
    }
  }
}
int main(){
  int arr[]={5,3,8,4,2};
  int n=5;
  selectionsort(arr,n);
  printf("Sorted array :");
  for(int i=0;i<n;i++){
    printf("%d",arr[i]);
  }
return 0;
}


      

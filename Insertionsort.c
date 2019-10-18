#include<stdio.h>

int main(void){
  int a[10],i,j;
  printf("Enter ten values to be sorted");
  //taking the input from user
  for(i=0;i<10;++i){
    scanf("%d",&a[i]);
  }
  
  //Insertion sorting procedure
  for(i=1;i<10;++i){
    
    for(j=i-1;j>=0 && a[i]>a[j],--j){
      a[j+1]=a[j];
    }
    a[j+1]=a[i];
  }
  
  //printing the sorted array
  for(i=0;i<10;++i){
   printf("%d ",a[i]);
  }
  }
  

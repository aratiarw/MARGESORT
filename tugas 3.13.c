#include <iostream.h>  
#include <conio.h>  
int a[50];  
void merge(int,int,int);  
void merge_sort(int low,int high)  
{  
 int mid;  
 if(low<high)  
 {  
  mid=(low+high)/2;  
  merge_sort(low,mid);  
  merge_sort(mid+1,high);  
  merge(low,mid,high);  
 }  
}  
void merge(int low,int mid,int high)  
{  
 int h,i,j,b[50],k;  
 h=low;  
 i=low;  
 j=mid+1;  
 while((h<=mid)&&(j<=high))  
 {  
  if(a[h]<=a[j])  
  {  
   b[i]=a[h]; h++;  
  }  
  else  
  {  
   b[i]=a[j]; j++;  
  } i++;  
 }  
 if(h>mid)  
 {  
  for(k=j;k<=high;k++)  
  {  
   b[i]=a[k]; i++;  
  }  
 }  
}  

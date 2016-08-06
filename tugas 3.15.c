#include<iostream.h>

//Fungsi Merge
void merge(int val[], int l, int pivot, int r)
{
    int temp[100];
    int w, x, y;

    w = 0;
    x = l;
    y = pivot + 1;

     while((x <= pivot) && (y <= r))
     {
          if(val[x] <= val[y]) //Note
                temp[w++] = val[x++];
          else
                temp[w++] = val[y++];
     }

     while(x <= pivot)
        temp[w++] = val[x++];
     while(y <= r)
        temp[w++] = val[y++];

     for(x = r; x >= l; x--)
     {
        val[x]=temp[--w];
     }
}

//Fungsi Merge Sort
void mergesort(int val[], int l, int r)
{
     int pivot;

     if(l < r)
     {
          pivot = (l+r) / 2;
          mergesort(val, l, pivot);
          mergesort(val, pivot+1, r);
          merge(val, l, pivot, r);
     }
}


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

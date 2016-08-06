#include <stdio.h>
#define MAX 10
int Data[MAX];
int temp[MAX];

// Prosedur merge sort
void merge(int Data[], int temp[], int kiri, int tengah, int kanan)
{
            int i, left_end, num_elements, tmp_pos;
            left_end = tengah - 1;
            tmp_pos = kiri;
            num_elements = kanan - kiri + 1;

            while ((kiri <= left_end) && (tengah <= kanan))
            {
                        if (Data[kiri] <= Data[tengah])
                        {
                                    temp[tmp_pos] = Data[kiri];
                                    tmp_pos = tmp_pos + 1;
                                    kiri = kiri +1;
                        }
                        else
                        {
                        temp[tmp_pos] = Data[tengah];
                        tmp_pos = tmp_pos + 1;
                        tengah = tengah + 1;
                        }
            }
            while (kiri <= left_end)
            {
                        temp[tmp_pos] = Data[kiri];
                        kiri = kiri + 1;
                        tmp_pos = tmp_pos + 1;
            }
            while (tengah <= kanan)
            {
                        temp[tmp_pos] = Data[tengah];
                        tengah = tengah + 1;
                        tmp_pos = tmp_pos + 1;
            }

            for (i=0; i <= num_elements; i++)
            {
                        Data[kanan] = temp[kanan];
                        kanan = kanan - 1;
            }
}

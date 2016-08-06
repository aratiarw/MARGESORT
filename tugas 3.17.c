read(data)
int temp[100], tempAwal = awal, tempMid = mid, i = 0
while (tempAwal < mid && tempMid < akhir) do
if(data[tempAwal] < data[tempMid]) then
temp[i] = data[tempAwal]
else
temp[i] = data[tempMid]
endif
endwhile
while(tempAwal < mid)do
temp[i] = data[tempAwal]
endif
while(tempMid < akhir)do
temp[i] = data[tempMid]
endif
for j <= 0 to i do
for k <= awal to akhir do
data[k] = temp[j]
endfor
endfor
if(akhir-awal != 1)
int mid = (awal+akhir)/2
merge(awal, mid)
merge(mid, akhir)
mergeSort(awal, mid, akhir)
endif
read(n)
for i ß 0 to n do
data[i]
merge(0,n)
endfor
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Merge(int *a ,int low, int mid, int high){
int b[high+1],p=low,p1=mid+1,i=low;
while(p<=mid && p1<=high){
    if(a[p]<a[p1]){
        b[i]=a[p];
        p++;
    }
    else{
        b[i]=a[p1];
        p1++;
    }
    i++;
}
if(p1>high){
    while(p<=mid){
         b[i]=a[p];
        p++;
        i++;
    }
}
else{
    while(p1<=high){
         b[i]=a[p1];
        p1++;
        i++;
    }
}
for(int j=high;j>=low;j--)
    a[j]=b[j];

}
void MergeSort(int* a ,int low,int high){
if(low<high){
    int mid =(low+high)/2;
    MergeSort(a,low,mid);
    MergeSort(a,mid+1,high);
    Merge(a,low,mid,high);
}
}
int main(){
    ios_base::sync_with_stdio(false);
int a []={2,34,5,6567,667,778,3564,34,23,32,43,54,45,54232,898};
MergeSort(a,0,14);
for(int i :a)
    cout<<i<<" ";

return 0;
}



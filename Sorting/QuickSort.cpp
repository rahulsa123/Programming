#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void QuickSort(int* a ,int low,int high){
if(low<high){
    int pivot = low,i=low,j=high;
    while(i<j){
    while(a[i]<=a[pivot] && i<high)
        i++;
    while(a[pivot]<a[j])
        j--;
    if(i<j){
        int temp =a[i];
        a[j]=a[i];
        a[i]=temp;
    }
    }
    int temp =a[j];
    a[j]=a[pivot];
    a[pivot]=temp;
    //cout<<j;
    QuickSort(a,low,j-1);
    //cout<<j;
    QuickSort(a,j+1,high);
}
}
int main(){
    ios_base::sync_with_stdio(false);
int a []={2,34,5,6567,667,778,3564,34,23,32,43,54,45,54232,898};
QuickSort(a,0,14);
for(int i :a)
    cout<<i<<" ";

return 0;
}




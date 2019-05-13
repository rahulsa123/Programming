#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int* a){
    int temp,mi,s=15,i,j;
for (i=0; i< (s-1) ;i++){
    mi = i;
    for(j = i+1;j<s;j=j+1){
        if(a[j]<a[mi]){
            mi=j;
            }
        }
    temp = a[mi];
    a[mi]=a[i];
    a[i]=temp;
}

}
int main(){
    ios_base::sync_with_stdio(false);
int a[] ={2,34,5,6567,667,778,3564,34,23,32,43,54,45,54232,898};

SelectionSort(a);
for(int i :a)
    cout<<i<<" ";

return 0;
}

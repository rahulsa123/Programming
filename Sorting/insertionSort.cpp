#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> InsertionSort(vector<int> a){
for(int i=1;i<a.size();i++){
    for(int j=i;j>-1 && a[j-1]>a[j];j--){
        int temp =a[j-1];
        a[j-1]=a[j];
        a[j]=temp;
    }
}
return a;
}
int main(){
    ios_base::sync_with_stdio(false);
vector<int> a ={2,34,5,6567,667,778,3564,34,23,32,43,54,45,54232,898};
a=InsertionSort(a);
for(int i :a)
    cout<<i<<" ";

return 0;
}


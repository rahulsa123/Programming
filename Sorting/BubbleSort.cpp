#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> BubbleSort(vector<int> a){
for (int i =0;i<a.size()-1;i++){
    for(int j=i+1;j<a.size();j++){
        if(a[i]>a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
return a;
}
int main(){
    ios_base::sync_with_stdio(false);
vector<int> a ={2,34,5,6567,667,778,3564,34,23,32,43,54,45,54232,898};
a=BubbleSort(a);
for(int i :a)
    cout<<i<<" ";

return 0;
}

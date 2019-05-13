#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int interPolation(vector <int> a , int x){
int lo = 0 , high = a.size()-1;
while(lo<=high && x>=a[lo] && x<=a[high]){
    if(lo==high){
        if(a[lo]==x)
            return lo;
        else
            return -1;
    }
    int pos = lo+((double) ((high-lo)*(x-a[lo]))/(a[high]-a[lo]));
    cout<<pos<<"\n";
    if(a[pos]==x)
        return pos;
    if(a[pos]<x)
        lo=pos+1;
    if(a[pos]>x)
        high=pos-1;

}
return -1;
}
int binarySearch(vector<int> a ,int x){
int lo =0,high=a.size()-1;
while(lo<=high){
    if(lo==high){
        if(a[lo]==x)
            return lo;
        else
            return -1;
    }
    int pos = (lo+high)/2;
    //int pos = lo+((double) ((high-lo)*(x-a[lo]))/(a[high]-a[lo]));
    cout<<pos<<"\n";
    if(a[pos]==x)
        return pos;
    if(a[pos]<x)
        lo=pos+1;
    if(a[pos]>x)
        high=pos-1;
}
return -1;
}
int main(){

vector <int> a={1,3,4,5,6,7,8,9,10,12, 13, 14, 15, 16,17,18,19,21,22,23};
int pos=interPolation(a,14);
if(pos==-1)
    cout<<"Element not present";
else
    cout<<"Element present at index "<<pos;

}

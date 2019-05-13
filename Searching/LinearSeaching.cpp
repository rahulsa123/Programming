#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void LinearSerach(int *a,int siz,int searc){
	int index =-1;
	for (int var = 0; var < siz; ++var) {
		if(a[var]==searc){
			cout<<"First present at index "<<var<<"\n";
			index =var;
		}
	}
	if(index==-1){
		cout<<"Element Not present in array";
	}
}
int main(){
    cin.tie(NULL);
    cout<<"Enter any search element";
    int a[10]={10,3,4,5,56,6,7,8,8,9};
    ios_base::sync_with_stdio(false);
	int searc;
	cin>>searc;
	LinearSerach(a,10,searc);

	return 0;
}

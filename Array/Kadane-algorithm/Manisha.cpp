#include<bits/stdc++.h>
using namespace std;

int maxsum(int n,int a[]){
    int maximumSum=INT_MIN,sum=0;
    for(int i=0;i<n;i++){
    	sum+=a[i];
    	if(maximumSum<sum)
		maximumSum=sum;
		if(sum<0)
		sum=0;
	}
	return maximumSum;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}
    cout<<maxsum(n,a);
}
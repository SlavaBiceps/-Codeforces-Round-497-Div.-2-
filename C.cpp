#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main(){
    ll n,m=0,t,i,j,k,cnt=0,cnt1=0,sum=0;
    cin>>t;
    ll a[t];
	for(i=0;i<t;i++){
		cin>>a[i];
	}
	sort(a,a+t);
	i=0;
	j=1;
	while(j<t){
		if(a[j]>a[i]){
			i++;
			m++;
		}
		j++;
	}
	cout<<m<<"\n";
    return 0;
}    
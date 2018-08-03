#include<bits/stdc++.h>
using namespace std;
int n,a,b,i,p=1000000002;
int main(){
	for(cin>>n;i<n;i++){
		cin>>a>>b;
		if(max(a,b)<=p)p=max(a,b);
		else if(a<=p)p=a;
		else if(b<=p)p=b;
		else return cout<<"NO",0;
	}
	cout<<"YES";
}
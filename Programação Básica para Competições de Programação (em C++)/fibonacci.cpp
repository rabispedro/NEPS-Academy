#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

unsigned int fibo(int pos){
	if(pos==0) return 1;
	if(pos==1) return 1;
	return fibo(pos-1)+fibo(pos-2);
}

int main(){
	fastio;
	int x;
	cin>>x;
	cout<<"Fibo: "<<fibo(x)<<"\n";
	return 0;
}
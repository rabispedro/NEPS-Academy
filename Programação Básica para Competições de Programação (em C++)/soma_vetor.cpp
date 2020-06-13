#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int soma_vetor(int n, int v[]){
	int soma=0;
	for(int i=0;i<n;i++) soma+=v[i];
	return soma;
}

int main(){
	int n, v[100100];
	cin>>n;
	for(int i=0;i<n;i++) cin>>v[i];
	cout<<soma_vetor(n,v)<<"\n";
	return 0;
}
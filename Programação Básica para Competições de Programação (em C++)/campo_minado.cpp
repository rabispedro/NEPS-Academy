#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main(){
	fastio;
	int N;
	cin>>N;
	int vet[N];
	for(int i=0;i<N;i++) cin>>vet[i];
	for(int i=0;i<N;i++){
		int cont=0;
		if(i>0) if(vet[i-1]==1) cont++;
		if(i<N-1) if(vet[i+1]==1) cont++;
		if(vet[i]==1) cont++;
		cout<<cont<<"\n";
	}
	return 0;
}

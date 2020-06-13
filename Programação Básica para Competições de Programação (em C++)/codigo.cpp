#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main(){
	fastio;
	int N;
	cin>>N;
	int vet[N];
	for(int i=0;i<N;i++) cin>>vet[i];
	int cont=0;
	for(int i=0;i<N-2;i++) if((vet[i] == 1) && (vet[i+1] == 0) && (vet[i+2] == 0)) cont++;
	cout<<cont<<"\n";
	return 0;
}

#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main(){
	fastio;
	int N;
	cin>>N;
	int vet[N];
	for(int i=0;i<N;i++) cin>>vet[i];
	sort(vet,(vet+N));
	for(int i=0;i<N;i++) cout<<vet[i]<<" ";
	cout<<"\n";
	return 0;
}
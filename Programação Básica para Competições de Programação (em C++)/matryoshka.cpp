#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main(){
	fastio;
	int N;
	cin>>N;
	int vet[N],aux[N];
	for(int i=0;i<N;i++){
		cin>>vet[i];
		aux[i]=vet[i];
	}
	sort(vet,(vet+N));
	int soma=0,recall[N];
	for(int i=0;i<N;i++){
		if(aux[i]!=vet[i]){
			recall[soma]=aux[i];
			soma++;
		}
	}
	sort(recall,(recall+soma));
	cout<<soma<<"\n";
	for(int i=0;i<soma;i++) cout<<recall[i]<<" ";
	cout<<"\n";
	return 0;
}
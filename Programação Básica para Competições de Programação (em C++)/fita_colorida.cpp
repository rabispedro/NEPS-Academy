#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main(){
	fastio;
	int N;
	cin>>N;
	int vet[N],aux[N];
	for(int i=0;i<N;i++) aux[i]=0;
	for(int i=0;i<N;i++) cin>>vet[i];
	for(int i=0;i<N;i++){
		int esq=0,dir=0;
		if(vet[i]==0){
			for(int j=i;j<N;j++){
				if(vet[j]!=0) if(aux[j]==0 || aux[j]>dir) aux[j]=dir;
				dir++;
			}
			for(int j=i;j>=0;j--){
				if(vet[j]!=0) if(aux[j]==0 || aux[j]>esq) aux[j]=esq;
				esq++;
			}

		}
	}
	for(int i=0;i<N;i++) if(aux[i]>9) aux[i]=9;
	for(int i=0;i<N;i++) cout<<aux[i]<<" ";
	cout<<"\n";
	return 0;
}

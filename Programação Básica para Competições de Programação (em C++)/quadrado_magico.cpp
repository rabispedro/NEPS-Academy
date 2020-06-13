#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main(){
	fastio;
	int N;
	cin>>N;
	int mat[N][N];
	for(int i=0;i<N;i++) for(int j=0;j<N;j++) cin>>mat[i][j];
	int vet[2*N+2];
	for(int i=0;i<(2*N+2);i++) vet[i]=0;
	bool valida=true;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			//	Linha
			vet[i]+=mat[i][j];
			//	Coluna
			vet[N+i]+=mat[j][i];
			//	Diagonal Principal
			if(i==j) vet[2*N]+=mat[i][j];
			//	Diagonal Secundaria
			if((i+j)==(N-1)) vet[2*N+1]+=mat[i][j];
		}
	}
	for(int i=0;i<(2*N+1);i++) if(vet[i]!=vet[i+1]) valida=false;
	if(valida) cout<<vet[0]<<"\n";
	else cout<<"-1\n";
	return 0;
}
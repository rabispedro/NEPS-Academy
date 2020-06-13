#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main(){
	fastio;
	int N;
	cin>>N;
	int mat[N][N],linha[N],coluna[N];
	//	Preenche os vetores de Linha e Coluna com 0's
	for(int i=0;i<N;i++){
		linha[i]=0;
		coluna[i]=0;
	}
	//	Preenche a Matriz, a soma das Linhas e a soma das Colunas
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cin>>mat[i][j];
			linha[i]+=mat[i][j];
			coluna[j]+=mat[i][j];
		}
	}
	int maior=0;
	//	Busca o maior numero
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(maior<(linha[i]+coluna[j]-2*mat[i][j])) maior=(linha[i]+coluna[j]-2*mat[i][j]);
		}
	}
	cout<<maior;
	return 0;
}
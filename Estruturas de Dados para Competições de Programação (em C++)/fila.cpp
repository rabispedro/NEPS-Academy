#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int N,M;

int main(){
	fastio;

	int aux;
	vector<int> entrada,saida;

	cin>>N;
	for(int i=0; i<N; i++){
		cin>>aux;
		entrada.push_back(aux);
	}

	cin>>M;
	for(int i=0; i<M; i++){
		cin>>aux;
		saida.push_back(aux);
	}

	for(int i=0; i<saida.size(); i++){
		for(int j=0; j<entrada.size(); j++){
			if(saida.at(i) == entrada.at(j)){
				saida.erase(saida.begin()+i);
				entrada.erase(entrada.begin()+j);
			}
		}
	}

	for(int i=0; i<entrada.size();i++){
		cout<<entrada.at(i)<<" ";
	}
	cout<<"\n";

	return 0;
}
#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int N,M;

int main(){
	fastio;

	int aux;
	vector<int> entrada, saida;

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

	cout<<"ENTRADA INICIO: ";
	for(int i=0; i<entrada.size();i++){
		cout<<entrada.at(i)<<" ";
	}
	cout<<"\n";

	cout<<"SAIDA INICIO: ";
	for(int i=0; i<saida.size();i++){
		cout<<saida.at(i)<<" ";
	}
	cout<<"\n\n";

	for(int i=0; i<entrada.size(); i++){
		for(int j=0; j<saida.size(); j++){
			if(entrada.at(i) == saida.at(j)){
				entrada.erase(entrada.begin()+i);
				saida.erase(saida.begin()+j);
			}
		}
	}

	cout<<"ENTRADA FIM: ";
	for(int i=0; i<entrada.size();i++){
		cout<<entrada.at(i)<<" ";
	}
	cout<<"\n";

	cout<<"SAIDA FIM: ";
	for(int i=0; i<saida.size();i++){
		cout<<saida.at(i)<<" ";
	}
	cout<<"\n";

	return 0;
}
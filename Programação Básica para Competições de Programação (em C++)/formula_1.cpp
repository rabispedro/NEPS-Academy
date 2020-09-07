#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

struct piloto{
	int id,pontos;
	vector<int> pos;
};

bool ordenaDecres(piloto a, piloto b){
	if(a.pontos!=b.pontos) return (a.pontos>b.pontos);
	else return (a.id<b.id);
}


int main(){
	fastio;
	int G,P;
	while(true){
		cin>>G>>P;
		if(G==0 && P==0) break;
		else{
			piloto tabela[P];
			//	Limpando todos os dados dos pilotos
			for(int i=0;i<P;i++){
				tabela[i].pontos=0;
				tabela[i].id=(i+1);
			}
			//	Percorre os Grandes Premios e classifica os Pilotos
			for(int i=0;i<G;i++){ 
				for(int j=0;j<P;j++){
					int aux;
					cin>>aux;
					tabela[j].pos.push_back(aux);
				}
			}
			//	Atribui valores de Sistemas de Pontuação ORDENADAMENTE
			int S;
			cin>>S;
			int maior=0,ganhadores[P];
			for(int i=0;i<P;i++) ganhadores[i]=0;
			for(int i=0;i<S;i++){
				int K;
				cin>>K;
				for(int j=0;j<K;j++){
					int aux;
					cin>>aux;
					ganhadores[j]=aux;
				}
				for(int j=0;j<P;j++){
					for(int k=0; k<tabela[j].pos.size();k++){
						tabela[j].pontos+=ganhadores[tabela[j].pos.at(k)-1];
					}
				}
				sort(tabela,(tabela+P), ordenaDecres);
				maior=tabela[0].pontos;
				for(int k=0; k<P; k++){
					if(maior!=tabela[k].pontos) break;
					else cout<<tabela[k].id<<" ";
				}
				cout<<"\n";
				for(int k=0; k<P; k++){
					ganhadores[k]=0;
					tabela[k].pontos=0;
				}
			}
		}
	}
	return 0;
}

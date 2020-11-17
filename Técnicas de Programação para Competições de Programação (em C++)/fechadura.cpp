#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int N,M;
int menorPos = -1;
int menor = -1;
int cont = 0;

bool verifica(int vet[]){
	for(int i=0; i<N; i++){
		if(vet[i] != M){
			cout<<"ERRADO\n";
			return false;
		}
	}

	cout<<"CORRETO\n";
	return true;
}

bool sobe(int vet[]){
	if(menorPos <= (N-2)){
		cout<<"Subiu!\n";
		return true;
	}

	cout<<"NAO Subiu!\n";
	return false;
}

bool desce(int vet[]){
	if(vet[menorPos] != 1){
		if(vet[menorPos-1] != 0){
			cout<<"Desceu!\n";
			return true;
		}
	}

	cout<<"NAO Desceu!\n";
	return false;
}



int main(){
	fastio;

	//	ENTRADA
	cin>>N>>M;
	int vet[N];
	for(int i=0; i<N; i++){
		cin>>vet[i];
		if(menor != -1){
			if(menor > vet[i]){
				menor = vet[i];
				menorPos = i;
			}
		}else{
			menor = vet[i];
			menorPos = i;
		}
	}

	//	PROCESSAMENTO
	while(!verifica(vet)){

	}

	//	SAIDA
	cout<<"Vetor: ";
	for(int i=0; i<N; i++) cout<<vet[i]<<" ";
	cout<<"\n";
	cout<<"Menor: "<<menor<<"\n";
	cout<<"Menor Posicao: "<<menorPos<<"\n";
	cout<<"Cont: "<<cont<<"\n";
	return 0;
}

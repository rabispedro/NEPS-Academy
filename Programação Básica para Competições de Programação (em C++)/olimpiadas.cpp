#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

struct pais{
	int O,P,B,id;
};

bool comparaM(pais x, pais y){
	if(x.O!=y.O) return (x.O>y.O);
	else if(x.P!=y.P) return (x.P>y.P);
	else if(x.B!=y.B) return (x.B>y.B);
	else return (x.id<y.id);
}

int main(){
	fastio;
	int N,M;
	cin>>N>>M;
	pais vet[N];
	int o,p,b;
	for(int i=0;i<N;i++){
		vet[i].O=0;
		vet[i].P=0;
		vet[i].B=0;
		vet[i].id=(i+1);
	}
	for(int i=0;i<M;i++){
		cin>>o>>p>>b;
		vet[(o-1)].O++;
		vet[(p-1)].P++;
		vet[(b-1)].B++;
	}
	sort(vet,(vet+N),comparaM);
	for(int i=0;i<N;i++) cout<<vet[i].id<<" ";
	cout<<"\n";
	return 0;
}
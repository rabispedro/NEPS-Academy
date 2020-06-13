#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

using namespace std;

int main(){
	fastio;
	int N,maior;
	cin>>N;
	int aux[N],j=0;
	for(int i=0;i<N;i++) aux[i]=0;
	for(int i=0;i<N;i++){
		int A,cont,temp;
		cin>>A;
		if(i==0){
			temp=A;
			cont=1;
			aux[j]=cont;
		}else if(A==temp){
			cont++;
			aux[j]=cont;
		}else if(A!=temp){
			aux[j++]=cont;
			cont=1;
			temp=A;
		}
	}
	for(int i=0;i<=j;i++){
		if(i==0) maior=aux[i];
		else if(aux[i]>maior) maior=aux[i];
	}
	cout<<maior<<"\n";
	return 0;
}

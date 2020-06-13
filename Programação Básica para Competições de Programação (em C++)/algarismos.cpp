#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main(){
	fastio;
	int N;
	cin>>N;
	unsigned int zero=0,um=0,dois=0,tres=0,quatro=0,cinco=0,seis=0,sete=0,oito=0,nove=0;
	string vet[N];
	for(int i=0;i<N;i++){
		cin>>vet[i];
		for(int j=0;j<vet[i].size();j++){
			switch (vet[i][j]){
				case '0':
					zero++;
					break;
				case '1':
					um++;
					break;
				case '2':
					dois++;
					break;
				case '3':
					tres++;
					break;
				case '4':
					quatro++;
					break;
				case '5':
					cinco++;
					break;
				case '6':
					seis++;
					break;
				case '7':
					sete++;
					break;
				case '8':
					oito++;
					break;
				case '9':
					nove++;
					break;
			}
		}
	}
	cout<<"0 - "<<zero<<"\n";
	cout<<"1 - "<<um<<"\n";
	cout<<"2 - "<<dois<<"\n";
	cout<<"3 - "<<tres<<"\n";
	cout<<"4 - "<<quatro<<"\n";
	cout<<"5 - "<<cinco<<"\n";
	cout<<"6 - "<<seis<<"\n";
	cout<<"7 - "<<sete<<"\n";
	cout<<"8 - "<<oito<<"\n";
	cout<<"9 - "<<nove<<"\n";
	return 0;
}

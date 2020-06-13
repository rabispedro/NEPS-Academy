#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define SPACE 32

using namespace std;

string MAIUSCULA="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string MINUSCULA="abcdefghijklmnopqrstuvwxyz";

string title(string F){
	string aux="";
	int pos=0;
	for(int i=0;i<F.size();i++){
		if(pos==0){
			for(int j=0;j<MINUSCULA.size();j++){
				if((MINUSCULA[j]==F[i]) || (MAIUSCULA[j]==F[i])) aux+=MAIUSCULA[j];
			}
		}else{
			for(int j=0;j<MINUSCULA.size();j++){
				if((MINUSCULA[j]==F[i]) || (MAIUSCULA[j]==F[i])) aux+=MINUSCULA[j];
			}
		}
		pos++;
		if(F[i]==' '){
			aux+=F[i];
			pos=0;
		}
	}
	return aux;
}

int main(){ 
	fastio;
	string F;
	getline(cin,F);
	cout<<title(F)<<"\n";
	return 0;
}
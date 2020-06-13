#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main(){
	fastio;
	string str,aux="";
	bool pal=true;
	cin>>str;
	for(int i=0;i<str.size();i++){
		if((str[i]=='a' ) || (str[i]=='e') || (str[i]=='i') || (str[i]=='o') || (str[i]=='u')){
			aux+=str[i];
		}
	}
	for(int i=0;i<aux.size();i++){
		if(aux[i]!=aux[aux.size()-i-1]){
			pal=false;
			break;
		}
	}
	if(pal) cout<<"S\n";
	else cout<<"N\n";
	return 0;
}
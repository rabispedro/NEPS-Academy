#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

bool eh_primo(int x){
	int div=0;
	for(int i=1;i<=x;i++){
		if(!(x%i)){
			cout<<"Divisor: "<<i<<"\n";
			div++;
		}
		if(div>2) return false;
	}
	return true;
}

int main(){
	fastio;
	int x;
	cin>>x;
	if(eh_primo(x)) cout<<"S\n";
	else cout<<"N\n";
	return 0;
}
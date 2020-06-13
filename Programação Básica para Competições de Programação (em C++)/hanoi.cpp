#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

unsigned int hanoi(int N);

int main(){
	fastio;
	int x,num=0;
	while(true){
		cin>>x;
		if(x==0) break;
		cout<<"Teste "<<++num<<"\n";
		cout<<hanoi(x)<<"\n\n";
	};
	return 0;
}

unsigned int hanoi(int N){
	if(N==1) return 1;
	else return 1+2*hanoi(N-1);
}

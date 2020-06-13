#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main(){
	fastio;
	int N,x,y;
	char op;
	cin>>N>>x;
	cin>>op;
	cin>>y;
	switch (op){
	case '+':
		x+=y;
		break;
	case '*':
		x*=y;
	}
	if(x<=N) cout<<"OK\n";
	else cout<<"OVERFLOW\n";
	return 0;
}
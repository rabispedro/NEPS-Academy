#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main(){
	fastio;
	int N,acerto=0;;
	string gab,resp;
	cin>>N;
	cin>>gab>>resp;
	for(int i=0;i<N;i++) if(gab[i]==resp[i]) acerto++;
	cout<<acerto<<"\n";
	return 0;
}
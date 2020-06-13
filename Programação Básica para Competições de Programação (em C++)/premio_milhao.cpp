#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N,dia,soma=0;
	cin>>N;
	int A[N];
	for(int i=0;i<N;i++) cin>>A[i];
	for(dia=0;dia<N;dia++){
		soma+=A[dia];
		if(soma>=1000000) break;
	}
	cout<<dia+1<<"\n";
	return 0;
}

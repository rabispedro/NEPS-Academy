#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N,soma=0;
	cin>>N;
	for(int i=0;i<N;i++){
		int L,C;
		cin>>L>>C;
		if(L>C)soma+=C;
	}
	cout<<soma<<"\n";
	return 0;
}

#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main(){
	fastio;
	int X;
	cin>>X;
	for(int i=1;i<=X;i++) if(!(X%i)) cout<<i<<" ";
	cout<<"\n";
	return 0;
}

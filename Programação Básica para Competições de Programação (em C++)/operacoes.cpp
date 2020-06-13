#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main(){
	fastio;
	char op;
	double x,y;
	cin>>op;
	cin>>x>>y;
	cout.precision(2);
	cout.setf(ios::fixed);
	switch(op){
		case 'M':
			cout<<x*y<<"\n";
			break;
		case 'D':
			cout<<x/y<<"\n";
			break;
	}
	return 0;
}
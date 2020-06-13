#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main(){
	fastio;
	double N;
	cin>>N;
	for(double i=0;i<N;i++){
		double A;
		cin>>A;
		cout.precision(4);
		cout.setf(ios::fixed);
		cout<<sqrt(A)<<"\n";
	}
	return 0;
}

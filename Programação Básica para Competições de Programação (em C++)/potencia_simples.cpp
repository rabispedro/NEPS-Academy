#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main(){
	fastio;
	double A,B;
	cin>>A>>B;
	cout.precision(4);
	cout.setf(ios::fixed);
	cout<<pow(A,B)<<"\n";
	return 0;
}

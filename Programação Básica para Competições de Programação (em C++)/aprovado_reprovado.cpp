#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	float A,B;
	cin>>A>>B;
	if((A+B)/2.00 >= 7.00) cout<<"Aprovado\n";
	else if((A+B)/2.0 < 7.00 && (A+B)/2.00 >= 4.00) cout<<"Recuperacao\n";
	else cout<<"Reprovado\n";
	return 0;
}

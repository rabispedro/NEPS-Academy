#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main(){
	fastio;
	int N,I1=0,I2=0;
	cin>>N;
	for(int i=0;i<N;i++){
		int A;
		cin>>A;
		if(A==1) I1++;
		else if(A==2) I2++;
	}
	int A=0,B=0;
	while(I2 > 0){
		if(A == 1) A = 0;
		else if(A == 0) A = 1;
		if(B == 1) B = 0;
		else if(B == 0) B = 1;
		I2--;
	}
	while(I1 > 0){
		if(A == 1) A = 0;
		else if(A == 0) A = 1;
		I1--;
	}
	cout<<A<<"\n";
	cout<<B<<"\n";
	return 0;
}

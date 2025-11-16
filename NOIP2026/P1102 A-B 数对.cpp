#include<iostream>
using namespace std;
typedef long long ll;

const int Maxn=200005;
const int MAXN=200000000;
int N;
ll a[Maxn],Target,ans=0;
ll barrel[MAXN]={0};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	
	cin>>N>>Target;
	for(int i=0;i<N;i++){
		cin>>a[i];
		barrel[a[i]]++;
	} 
	for(int i=0;i<N;i++){
		if( barrel[a[i]+Target]!=0 )ans++;
	}
	cout<<ans;
return 0;
}


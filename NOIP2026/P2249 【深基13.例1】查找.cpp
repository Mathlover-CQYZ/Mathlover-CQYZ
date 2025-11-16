#include<iostream>
using namespace std;

	int n,q;
	long long a[1000002],Q[10002];
	long long ans[1000002]={0};
	
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin>>n>>q;
	
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=q;i++) cin>>Q[i];
	
	
	for(int j=1;j<=q;j++){
		for(int i=1;i<=n;i++){
			if(Q[j]==a[i]) {
				cout<<i<<" ";
				break;	
			}
			else if(i==n&&a[i]!=Q[j]) cout<<-1<<" ";
		}
	}
	return 0;
}

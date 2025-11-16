#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

const int Maxn=200005;
int N;
ll a[Maxn],Target,ans=0;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin>>N>>Target;
	for(int i=1;i<=N;i++) cin>>a[i];
	sort(a+1,a+N+1);
	for(int i=1;i<=N;i++){
		ans+=(upper_bound(a+1,a+N+1,a[i]+Target)-a)-(lower_bound(a+1,a+N+1,a[i]+Target)-a);
	}
	cout<<ans;
return 0;
}


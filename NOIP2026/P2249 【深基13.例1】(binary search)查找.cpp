#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
ll a[1000006],Q[100005];
int n,q;
int binary_search(ll a[],int x){
	int result=-1,left=1,right=n,flag;	
	while(left<=right){
		flag=(left+right)/2;
		if(a[flag]==x){
			result = flag;
			right = flag-1;//看看左边还有没有 即 对 第一次出现的判定; 
		} else if(a[flag] < x){
			left = flag+1;
		}else if(a[flag] > x){
			right=flag-1;
		}
	}
	return result;
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin>>n>>q;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=q;i++) cin>>Q[i];
	vector<int> Ans; 
	
	for(int i=1;i<=q;i++){
		Ans.push_back(binary_search(a,Q[i]));
	}
	
	for(int i=0;i<Ans.size();i++) cout<<Ans[i]<<" ";
return 0;
}


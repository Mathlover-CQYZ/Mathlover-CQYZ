#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

long long n,S_t=0;
struct water{
	int dir;
	int t;
} wait[1010];

bool cmp(water x,water y){
	if(x.t!=y.t) return x.t < y.t;
	else return x.dir < y.dir;
}


int main(){
	
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>wait[i].t;
		wait[i].dir=i;

	}
	sort(wait+1,wait+n+1,cmp);//从小排到大
	
	for(int i=1;i<=n;i++){
		cout<<wait[i].dir<<" ";
		S_t+=(n-i)*wait[i].t;		
	} 
	cout<<endl;
	double ans=1.0*S_t/n;
	cout<<fixed<<setprecision(2)<<ans;
	
return 0;
}


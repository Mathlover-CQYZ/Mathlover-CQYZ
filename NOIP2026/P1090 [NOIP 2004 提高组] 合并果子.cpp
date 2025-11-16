//1 2 9
//证明:  合并方式(1+2=3 3+9=12 3+12=15 ) (1+9=10 10+2=12 10+12=22) 
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long n,a[10005]={0},Sum=0;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	for(int i=0;i<n-1;i++){// 1 2 9      
		Sum+=a[i]+a[i+1];
		a[i+1]=a[i]+a[i+1]; 
		sort(a+i,a+n); //每次完事后再排一次序！ 
	}
	cout<<Sum;
	return 0;
}

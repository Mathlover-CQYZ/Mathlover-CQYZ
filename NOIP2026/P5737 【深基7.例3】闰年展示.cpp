#include<iostream>
using namespace std;

bool is_LY(int n){//常识: 四  年一闰，百年不闰，四百年再闰 
	if(n%4==0)
		if(n%100!=0) return true;
		else if(n%400==0) return true;
	return false;
}

int main(){
	int l,r,cnt=0;
	int a[2002];
	cin>>l>>r;
	for(int i = l;i <= r;i++ )
		if( is_LY(i) ) a[cnt++]=i;
	cout<<cnt<<endl;
	for(int i=0;i<cnt;i++) cout<<a[i]<<" ";
	 
	
	
return 0;
}


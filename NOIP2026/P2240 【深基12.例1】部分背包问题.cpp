#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

struct coin {
	int value;
	int mass;
} a[102];

int N,T;//V for Sum of the 'Value' 
double V=0;


bool cmp(coin x,coin y){//x.v/x.m >y.v/y.m
	return x.value * y.mass > x.mass *y.value;//UM it seems that there's no problem with cmp function? 
}

int main(){
	V=0;
	cin>>N>>T;
	for(int i=0;i<N;i++) cin>>a[i].mass>>a[i].value; 
	
	sort(a,a+N,cmp);
	for(int i=0;i<N;i++){
		
		if(T-a[i].mass>=0) {
			T-=a[i].mass;
			V+=a[i].value;
		}else if(T-a[i].mass<0){
			V+=T*(1.0*a[i].value/a[i].mass);
			T=0;
			break;
		}	
		
	}
	
	cout<<fixed<<setprecision(2)<<V;
	//for(int i=0;i<N;i++) cout<<a[i].value/a[i].mass<<" ";	
return 0;
}


#include<iostream>
#include<unordered_map>

using namespace std;
int main(){
	int n;cin>>n;
	unordered_map<int, int> fib;
	int f;
	for(int i=1;i<=n;i++){		
    if(i<=2) f=1;
	else f=fib[i-1]+fib[i-2];
	fib[i]=f;
	}
	cout<<f<<endl;
}

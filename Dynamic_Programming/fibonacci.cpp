#include<iostream>
#include<unordered_map>

#define ll long long
using namespace std;

ll fib(ll n, unordered_map<ll, ll>& memo){
	if(memo.find(n)!=memo.end())return memo[n];
	if(n<=2)return 1;
	memo[n] = fib(n-1, memo) + fib(n-2, memo);
	return memo[n];
}


int main(){
	int n;cin>>n;
	unordered_map<ll, ll> memo;
	ll answer = fib(n, memo);
	cout<<answer<<endl;
}

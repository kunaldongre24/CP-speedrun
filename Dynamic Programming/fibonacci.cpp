#include<iostream>

#define int long long int

using namespace std;
int32_t main(){
	int n;cin>>n;
	int firstNum=1, secondNum=1;
	int sum=firstNum+secondNum;
	for(int i=1;i<n-1;i++){		
    sum=firstNum+secondNum;
	firstNum=secondNum;
	secondNum=sum;
	}
	cout<<sum<<endl;
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	cout<<"请输入两个数"<<endl;
	int a,b;
	cin>>a>>b;
	if(a>b){
		int c= a-b-1;
		while(c>0){
			a--;
			cout<<a<<endl;
			c--;
		}
	}
	else{
		int c = b-a-1;
		while(c>0){
			a++;
			cout<<a<<endl;
			c--;
		}
	}
	return 0;
}

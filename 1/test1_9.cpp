#include <iostream>
using namespace std;

int main(){
	int sum=0;
	int i ;
	for(i=50;i<101;i++){
		sum = sum + i;
	}
	cout<<"50到100之间的整数和为";
	cout<<sum<<endl;
	return 0;
}

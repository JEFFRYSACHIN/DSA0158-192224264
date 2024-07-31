#include<iostream>
using namespace std;
class cubecalculator{
	int limit;
public:
	cubecalculator(int n):limit(n) {}
	~cubecalculator(){
		for(int i=1;i<=limit;i++){
			cout<<i<<"^3="<<i*i*i<<endl;
		}
	}
};
int main()
{
	int n;
	cout<<"Enter integer:\n"<<endl;
	cin>>n;
	if(n>0){
		cubecalculator cubecalc(n);
	}
	else
	{
		cout<<"Enter a pos integer"<<endl;
	}
    return 0;
}

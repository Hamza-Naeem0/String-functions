#include<iostream>
#include<string>
using namespace std;
int main(){
	string name="Hamza";
	cout<<name.find("za")<<endl;
	
	cout<<"For searchonfg from right side"<<endl;
	cout<<name.rfind("mz");
	
	
	
	
	return 0;
}
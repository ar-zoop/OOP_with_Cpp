#include <iostream>
using namespace std;
typedef struct book{
	char name[20];
	int pg;
	float price;
}book;

int main(){
	book b[3];
	int i;
	cout<<"Write name, pg no, price 3 times in order:";
	for(i=0;i<3;i++){
		cin>>b[i].name;
		cin>>b[i].pg;		
		cin>>b[i].price;
	}
	for(i=0;i<3;i++){
		cout<<i+1<<":"<<endl;
		cout<<b[i].name<<endl;
		cout<<b[i].pg<<endl;		
		cout<<b[i].price<<endl;
	}
}

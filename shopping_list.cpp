#include <iostream>
#include <stdio.h>
using namespace std;
class shop{
	public:
		int codee;
	private:
		int price;
		static int total;
	public:
		void insert(){
			cout<<"Enter code: ";
			cin>>codee;
			cout<<"Enter price:";
			cin>>price;
			total+=price;
		}
		void deletion(){
			cout<<"Item deleted!";
			total-=price;
		}
		void print_total(){
			cout<<"total= "<<total;
		}
};

int shop::total;

int main() {
	shop s[10];
	int i=0,ch,count=0;
	while(1){
		cout<<"Your choices are:\n1)Add item\n2)Delete item\n3)Show total:\n4)Exit ";
		cin>>ch;
		switch(ch){		
			case 1: 
				s[i].insert();
				count++;
				i++;
				break;
			case 2: 
				int j,temp;
				cout<<"Enter the code of item you want to delete: ";
				cin>>temp;
				for (j=0;j<count;j++){
					{
					if(temp==s[j].codee)
						s[j].deletion();
						count--;
						break;
					}
							//shifting like a normal array!
				}
							
				break;
			case 3: s[0].print_total();
				break;
			case 4: exit(0);
			default:cout<<"Invalid chocie! ";
		}
		}
	}


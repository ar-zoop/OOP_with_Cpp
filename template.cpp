#include <iostream>
using namespace std;
const int SIZE=3;

template <class T>
class vector{
	T * v;
	
	public:
		vector(){
			int i;
			cout<<"default called\n";
			v= new T[SIZE];
			for (i=0;i<SIZE;i++){
			
				v[i]=0;
			}
		}
		vector (T *a){
			int i;
			cout<<"copy const called\n";
			for (i=0;i<SIZE;i++){
				
				v[i]=a[i];
				
			}
			cout<<"reached end of copy cost\n";
		}
		T operator *(vector &y){
			int i;
			T prod=0;
			for (i=0;i<SIZE;i++ ){
				prod+=this -> v[i] * y.v[i];
			}
			return prod;
		}
};

int main(){
	int a[3]={1,2,3};
	int b[3]={4,5,6};
	cout<<"pass1 ";
	vector <int> v1;
	cout<<"pass2 ";
	vector <int> v2;
	cout<<"pass3";
	v1=a;
	cout<<"pass4";
	v2=b;
	float R= v1*v2;
	cout<<"R = "<<R;
	return 0;
}

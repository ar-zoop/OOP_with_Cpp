
#include<iostream>
using namespace std; 
const int size=3; 
class vector
{ 
 int v[size]; 
 public:
 vector(); 
 friend vector operator *(vector b,int a); 
 friend istream & operator >>(istream &,vector &); 
 friend ostream & operator <<(ostream &,vector &); 
}; 
vector::vector() 
{ 
 for(int i=0;i<size;i++) v[i]=0; 
} 
vector operator * (vector b,int a) 
{ 
 vector c; 
 for(int i=0;i<size;i++) 
 c.v[i] = b.v[i]*a; 
 return c; 
} 
istream & operator >>(istream &din, vector &b) 
{ 
 for(int i=0;i<size;i++) 
 din>>b.v[i]; 
 return din; 
} 
ostream & operator <<(ostream &dout, vector &b) 
{ 
 dout<<"("<<b.v[0]; 
 for(int i=1;i<size;i++) 
 dout<<","<<b.v[i]; 
 dout<<")"; 
 return dout; 
} 
int main() 
{ 
cout<<"pass1";
 vector m; 
 cout<<"Enter Elements of vector m= \n"; 
 cout<<"pass2";
 cin>>m; 
 cout<<"\n"; 
 cout<<"m = "<<m<<"\n"; 
 vector p = m*2; 
 cout<<"\n"; 
 cout<<"P = "<<p<<"\n"; 
 return 0; 
}

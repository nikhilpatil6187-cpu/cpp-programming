#include<iostream>
using namespace std;
class Addition
{
private:
int n1,n2,n3;
public:
void input()
{
   cout<<"enter first no:";
   cin>>n1;
   cout<<"enter second no:";
   cin>>n2;
   }
void add(){
   n3=n1+n2;
   }
void display()
   {
   cout<<"addition of two no.s:"<<n3<<endl;
   }
};
int main()
   {
   Addition obj;
   obj.input();
   obj.add();
   obj.display();
    return 0;
}

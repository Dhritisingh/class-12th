#include <iostream>
#include <stdio.h>
using namespace std;
class Resort
{
private:
  int Rno;
  char Name[20];
  float Charges;
  int Days;
  float Compute();

public:
  void getinfo();
  void dispinfo();
};

void Resort::getinfo()
{
  cout<<"enter the name\n";
  gets(Name);
  cout<<"enter the room no.\n";
  cin>>Rno;
  cout<<"enter days\n";
  cin>>Days;
  cout<<"enter charges\n";
  cin>>Charges;

}
float Resort::Compute()
{
 return (Days*Charges);
}

void Resort::dispinfo()
{
  cout<<"enter room no \n";
  cout<<Rno;
  cout<<"enter name\n";
  cout<<Name;
  cout<<"enter charges\n";
  cout<<Charges;

  cout<<"enter days\n";
  cout<<Days;
  cout<<"total amount\n";
  cout<<Compute();
}
int main()
{
  Resort r;
  r.getinfo();
  r.dispinfo();
  return (0);
}

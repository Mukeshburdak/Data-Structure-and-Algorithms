#include <iostream>
using namespace std;

void TOH(int d ,char tower1 ,char tower2 char tower3)
{
  if(d==1)  //base case
{
cout<< "\nShift top disk from tower " << tower1 <<"to tower"<<tower2;
return;
}
TOH(d-1,tower3,tower2,tower1); //recursive function call
}

int main(){
  int disk;
cout<<"Enter the number of disks : ";
cin>>disk;

if(disk<1){
cout<<"\nThere are no disks to shift";
else
cout<<"\nThere are "<<disk<<" disk in tower 1\n";

TOH(disk,'1','2','3');
cout<< "\n\n"<<disk<<" disks in tower 1 are shifted to tower 2";
return 0;
}

#include<iostream>
using namespace std;
#include<string.h>
int main()
{
 int i,l,n;
 char pz[5][15]={"monday","tuesday","wednesday","thrusday","friday"};
 char a[15];
 cin>>a;
 
 for(i=0;i<5;i++)
 {
  if(strcmp(a,pz[i])!=0)
  {
   cout<<"true"<<endl;
   break;
  }
 else
  c++;
}
if(c==5)
{
 cout<<"false"<<endl;
}
  return 0;
}

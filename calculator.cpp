#include <bits/stdc++.h>>
using namespace std;
int main() {
  int n;
  cout<<"Enter the number of numbers - ";
  cout.flush();
  cin>>n;
  vector<int>no;
  cout<<"Enter the numbers - " << endl;
  for(int i=0;i<n;i++)
    {
      int d;
      cin>>d;
      no.push_back(d);
    }
  cout<<"Addition [1]"<<endl<<"Multiplication [2]"<<endl<<"Subtraction [3]"<<endl<<"Division [4]"<<endl;
    cout<<"ENTER THE CODE OF OPERATION - "<<endl;
  int y;
  cin>>y;
  if(y==1)
  {
    int sum=0;
    for(int i=0;i<no.size();i++)
      {
        sum+=no[i];
      }
    cout<<"Answer - "<<sum<<endl;
  }
  else if(y==2)
  {
    int mul=1;
    for(int i=0;i<no.size();i++)
      {
        mul*=no[i];
      }
      cout<<"Answer - "<<mul<<endl;
  }
  else if(y==3){
    int sub=no[0];
    for(int i=1;i<no.size();i++)
      {
        sub-=no[i];
      }
      cout<<"Answer - "<<sub<<endl;
  }
  else if(y==4)
  {
    int div=no[0];
    for(int i=0;i<no.size();i++)
      {
        div/=no[i];
      }
    cout<<"Answer - "<<div<<endl;
    
  }
}

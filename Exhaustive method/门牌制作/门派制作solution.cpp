#include <iostream>
#include<cstring>
using namespace std;
int main()
{
  string str;
  char *ch;
  ch=new char[5];
  int cnt=0;
  
  for(int i=1;i<2021;i++)
  {
    str=to_string(i);
    strcpy(ch,str.c_str());
    for(int j=0;ch[j]!='\0';j++)
    {
      if(ch[j]=='2')
      {
        cnt++;
      }
    }
  }
  
  cout<<cnt;
  return 0;
}

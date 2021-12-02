#include <iostream>
#include<cstring>
using namespace std;
int main()
{
  string str;
  char *ch;
  ch=new char[5];
  int cnt1=0;
  int i=0;
  
  while(cnt1<2021)
  {
    i++;
    str=to_string(i);
    strcpy(ch,str.c_str());
    for(int j=0;ch[j]!='\0';j++)
    {
      if(ch[j]=='1')
      {
        cnt1++;
      }
    }
  }
  cout<<i;
  return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main ()
{
  long long int a,b;

  cin >> a >> b;

  string s;
  cin >> s;

  int ar[s.size()+7];

  ar[0]=a;


  for(int i=1;i<s.size();i++)
  {
    ar[i]=ar[i-1]*ar[i-1];
  }

  long long int sum=0;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='1')
    {
    //  cout << 1 << " ";
      sum=sum+ar[i];
    }
  }

//  cout << s << endl;
  /*for(int i=0;i<s.size();i++)
  {
    cout << ar[i] << " ";
  }
  */
  //cout << endl;
  //cout << sum << endl;
  cout << sum%b << endl;

  return 0;
}

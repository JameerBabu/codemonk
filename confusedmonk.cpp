#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
        result = gcd(arr[i], result);

    return result;
}

long long int modexp(long long int x, long long int n, long long int m)
{
  if(n==0)
  {
    return 1;
  }
  else if(n%2==0)
  {
    return modexp((x*x)%m, n/2,m);
  }
  else
  {
    return (x*modexp((x*x)%m,(n-1)/2,m)%m);
  }
}
int main()
{
  //cout << gcd(2,6)<< endl;
  int n;
  cin >> n;
  int a[n+7];
  for(int i=0;i<n;i++)
  {
    cin >> a[i];
  }
  long long int m = 1000000007;
  int b=1;
  for(int i=0;i<n;i++)
  b=((b%m)*(a[i]%m)%m);

  int c = findGCD(a,n);

  //cout << pow(b,c) << endl;

  //long long int e = (pow(b,c));
    //long long int f = modexp(b,c,1000000007);
  //cout << f << endl;
  //cout << b << " " << c << endl;
  //cout << (pow(b,c)) %  1000000007 << endl;
  long long int d=1;

  for(long long int i=1;i<=c;i++)
  {
    d=(((d%m)*(b%m)%m)%m+m)%m;
  }
  long long int e = d%m;
  cout << e << endl;
  return 0;
}

#include<bits/stdc++.h>
using namespace std;

 //int ll;
bool has[10000007];
void sieve()
{

    memset(has, true, sizeof(has));
    for (int p = 2; p * p < 10000007; p++)
        if (has[p] == true)
            for (int i = p * 2; i < 10000007; i += p)
                has[i] = false;


}
int fact(int n)
{
  int total = 1;
    for (int p = 2; p <= n; p++) {
        if (has[p]) {

            // calculate number of divisor
            // with formula total div =
            // (p1+1) * (p2+1) *.....* (pn+1)
            // where n = (a1^p1)*(a2^p2)....
            // *(an^pn) ai being prime divisor
            // for n and pi are their respective
            // power in factorization
            int count = 0;
            if (n % p == 0) {
                while (n % p == 0) {
                    n/=p;
                    count++;
                }
                total = total * (count + 1);
            }
        }
    }
    return total;
}
int main()
{
  sieve();
  /*int arr[10000007];
  arr[0]=0;
  arr[1]=0;
  for(int i=2;i<=100007;i++)
  {
    arr[i]=fact(i);
  }
*/

  int b,x;

  cin >> b;

  while(b--)
  {
    cin >> x;
    if(fact(x)<4)
    {
      //cout << fact(x) << " ";
      cout << "NO" << endl;
    }
    else
    {
      cout << "YES"<< endl;
    }

  }

  return 0;
}


/*

int divisor (int x)
{
    int ctr = 0;

    for (int i = 1; i<sqrt(x); i++)
    {
        if (x%i==0)
        {
            ctr+=2;
        }
    }
    if(x%((int)sqrt(x)) ==0) ctr++;

    return ctr;
}

*/

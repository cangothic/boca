#include <cstdio>
using namespace std;
typedef long long ll;
int main() {
  ll a1,b1,a2,b2;
  while (scanf("%lld %lld %lld %lld",&a1,&b1,&a2,&b2)!=EOF) {
    ll sum1=a1+b1+a2+b2;
    scanf("%lld %lld %lld %lld",&a1,&b1,&a2,&b2);
    ll sum2=a1+b1+a2+b2;
    if(sum1>sum2){
      printf("%s\n","Gunnar");
    }
    else if(sum1<sum2){
      printf("%s\n","Emma");
    }
    else printf("%s\n","Tie");
  }
  return 0;
}

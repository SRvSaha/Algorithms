/*
*   @author      : SRvSaha
*   Filename     : seive.cpp
*   Timestamp    : 18:55 23-October-2016 (Sunday)
*   Description  : Seive of Eratosthenes is one of the fastest methods to find out the primes numbers in a range.  (Upto 10 Million it is recommended)
*   Link         : http://www.geeksforgeeks.org/sieve-of-eratosthenes/
*
*/
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <stack>
#include <climits>
#include <ctime>
#include <algorithm>
#include <utility>
#include <fstream>
#include <sstream>

#define FR freopen("input.txt", "r", stdin);
#define FW freopen("output.txt", "w", stdout);
#define CIN(n) scanf("%d",&n);
#define COUT(n) printf("%d\n",n);
#define log(x) log10(x)/log10(2)
#define mod 1000000007
const int inf=100000005;

/* BEGIN Timer */
#define CLOCK clock()
#define BEGIN_CLOCK clock_t _bx_ = clock();
#define END_CLOCK clock_t _ex_ = clock();
#define TOTAL_C (double)(_ex_ - _bx_)
#define TOTAL_T (TOTAL_C/CLOCKS_PER_SEC)
#define PRINT_CLOCK (printf("%2.3f\n",TOTAL_T));
/* END Timer */

typedef unsigned long long ULL;
typedef long long LL;
using namespace std;

void seive(int n)
{
    bool primes[n+1]; // + 1 as we are starting from 1
    memset(primes,true,sizeof(primes)); // true : prime by default || memset for fast allocation of values since n can be large
    primes[1] = false;
    for(int i = 2; i <= sqrt(n); i++){
        if(primes[i]){ // all the multiples of prime number will be composite
            for(int j = 2*i; j <= n; j += i)
                primes[j] = false; // making composite
        }
    }
    for(int i = 2; i<=n; i++){
        if(primes[i])
            COUT(i)
    }
}

int main()
{
    //BEGIN_CLOCK
    //FR
    int n;
    CIN(n)
    seive(n);
    //FW
    //END_CLOCK
    //PRINT_CLOCK
    return 0;
}

#include <bitset>
#include <cmath>
#include <vector>
using namespace std;
#define ll long long

vector<bool> primes(6000001, 1);
void sieve_1() { // function to get the prime number
    primes[0] = primes[1] = 0;
    for (ll i = 2; i <= 6000001 / i; i++) {
        if (primes[i]) {
            for (ll j = (i * i); j < 6000001; j += i) primes[j] = 0;
        }
    }
    // the prime number take value 1 (true)
}


/// another way with bitset

bitset<1000006> is_prime;
ll N = 1000006;
void sieve_2() {
    is_prime.set(); // to set all bitset with 1

    is_prime[0] = is_prime[1] = 0;
    for (ll i = 2; i <= N / i; i++) {
        if (is_prime[i]) {
            for (ll j = i * i; j < N; j += i) {
                is_prime[j] = 0;
            }
        }
    }
}
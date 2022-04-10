/*  Write a C++ program to which reads an given integer n and prints a twin prime which has the maximum size among twin primes less than or equals 
to n. According to wikipedia "A twin prime is a prime number that is either 2 less or 2 more than another prime number" for example, 
either member of the twin prime pair (41, 43). In other words, a twin prime is a prime that has a prime gap of two" */

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    const int num_primes = 10005;
    bool primes[num_primes];
    for (int i = 2; i != num_primes; ++i) {
        primes[i] = true;
    }

    for (int i = 2; i != int(sqrt(num_primes)); ++i) {
        if (primes[i]) {        
            for (int j = 2; i * j < num_primes; ++j) {
                primes[i*j] = false;
            }
        }
    }
    int n;
	cout << "Input an integer:\n";
    cin >> n;
	cout << "Twin primes are:\n";
        for (int i = n; i - 2 >= 0; --i) {
            if (primes[i] && primes[i-2]) {
                cout << i-2 << " " << i << endl;
                break;
            }
    }
    return 0;
}

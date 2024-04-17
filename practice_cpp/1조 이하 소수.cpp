#include <iostream>
using namespace std;

bool isPrime(long long n) {
    if (n <= 1) 
        return false; // 1보다 작거나 같은 수는 소수가 아님
    if (n <= 3) 
        return true; // 2와 3은 소수

    if (n % 2 == 0 || n % 3 == 0) 
        return false; // 2 또는 3으로 나누어지면 소수가 아님

    // 6k ± 1 꼴의 수만 확인 (k는 자연수)
    for (long long i = 5; i * i <= n; i += 6) 
    {
        if (n % i == 0 || n % (i + 2) == 0) return false; // 6k ± 1 꼴의 수로 나누어지면 소수가 아님
    }

    return true; // 위의 모든 경우를 만족하지 않으면 소수
}

int main() {
    long long max_prime = 0; // 가장 큰 소수를 저장할 변수

    // 1조까지의 모든 수 중에서 소수를 찾음
    for (long long num = 1000000000000LL; num >= 2; --num) {
        if (isPrime(num)) {
            max_prime = num; // 현재 소수를 가장 큰 소수로 업데이트
            break; // 가장 큰 소수를 찾았으므로 반복 중지
        }
    }

    cout << "1조 이하에서 가장 큰 소수: " << max_prime << endl;

    return 0;
}

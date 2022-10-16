#include <iostream>
int main(){
    uint32_t n, d1, d2, k;
    uint8_t p;
    std::cin >> n >> d1 >> d2 >> k;
    p = ( d1 + d2 ) % 10;
    int answer = ( d1 + d2 ) / 10 == 0 ? p : k == 1 ? 1 : k == n+1 ? p : 1+p;
    std::cout << answer;
    return 0;
}

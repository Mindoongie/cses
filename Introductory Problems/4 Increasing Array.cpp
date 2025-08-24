#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> x(n);
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> x[i];
        if (i) {
            ans += std::max(0, x[i - 1] - x[i]);
            x[i] = std::max(x[i], x[i - 1]);
        }
    }
    std::cout << ans;
    return 0;
}
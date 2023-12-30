#include <iostream>
#include <vector>
#include <string>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        std::string s;
        std::cin >> s;

        int n = s.length();
        std::vector<int> upper, lower;

        for (int i = 0; i < n; ++i) {
            if (s[i] == 'b') {
                s[i] = ' ';
                if (!lower.empty()) {
                    s[lower.back()] = ' ';
                    lower.pop_back();
                }
                continue;
            }

            if (s[i] == 'B') {
                s[i] = ' ';
                if (!upper.empty()) {
                    s[upper.back()] = ' ';
                    upper.pop_back();
                }
                continue;
            }

            if ('a' <= s[i] && s[i] <= 'z') {
                lower.push_back(i);
            } else {
                upper.push_back(i);
            }
        }

        std::cout << s << std::endl;
    }

    return 0;
}

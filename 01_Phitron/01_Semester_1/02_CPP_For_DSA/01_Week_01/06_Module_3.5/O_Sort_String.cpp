#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    std::vector<char> S(N);
    for(int i = 0; i < N; i++) {
        std::cin >> S[i];
    }

    // Counting sort
    std::vector<int> count(26, 0);
    for(char c : S) {
        count[c - 'a']++;
    }

    int index = 0;
    for(int i = 0; i < 26; i++) {
        for(int j = 0; j < count[i]; j++) {
            S[index++] = i + 'a';
        }
    }

    for(char c : S) {
        std::cout << c;
    }
    std::cout << std::endl;

    return 0;
}

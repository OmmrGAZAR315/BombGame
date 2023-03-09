#include <iostream>
#include <vector>

int solution(std::vector<int> &v) {
    int no_expert = 1, takenTime = 5;
    int k = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] < 5 + i) {
            if (v[i] == -1) {
                k++;
                continue;
            } else {
//                std::cout<<"Boooom";
                return -1;
            }
        }
        if (v[i] < takenTime + i - k) {
            no_expert++;
            takenTime = 5;
        } else takenTime += 5;
    }
        std::cout << "We need "
        << (k == v.size() ? no_expert - 1 : no_expert)<<" bomb experts";
}

int main() {
    std::vector<int> v = {5, 6, -1, -1, -1};

    solution(v);

}
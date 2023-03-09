#include <iostream>
#include <vector>
#include <random>

int solution(std::vector<int> &v) {
    int no_expert = 1, takenTime = 5;
    int k = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] < 5 + i) {
            if (v[i] == -1) {
                k++;
                std::cout << "skip door " << i << "\n";
                continue;
            } else {
                std::cout << "door " << i << " Boooom";
                return -1;
            }
        }
        if (v[i] < takenTime + i - k) {
            no_expert++;
            takenTime = 5;
        }
        std::cout << "\ni- " << i << "\n" << no_expert;
        takenTime += 5;
    }
    std::cout << "\nWe need "
              << (k == v.size() ? no_expert - 1 : no_expert) << " bomb experts";
}

int main() {
    std::vector<int> v = {};
//    std::vector<int> v = {13, 21, 21, 12, 24, 10, 15, 21, 17, 20, 26, 20, 27, 20, 31, 34, 32,36, 23, 34};
//    std::vector<int> v = {9, 21, 19, 9, 10, 11, 25, 23, 23};
//    std::vector<int> v = {5, 6, 7, 8, 9};
//    std::vector<int> v = {5, 11, 11, 8, 11};
//    std::vector<int> v = {-1, -1, 6, -1, -1, 10, 11, 12, 13, 14};

//    std::vector<int> v(100000, 0);
    /*std::vector<int> v(20);
   std::random_device rd;
   std::mt19937 gen(rd());
   std::uniform_int_distribution<> dis(1, 20);
   for (int i = 0; i < v.size(); i++) {
       v[i] = dis(gen) + i;
       std::cout << v[i] << std::endl;
   }*/
    solution(v);

}
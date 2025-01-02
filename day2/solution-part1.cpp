// Advent Of Code 2024 - Day #2: Part 1
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <cmath>
#include <chrono>

bool testSafety(const std::vector<int>& list) {
    int direction = (list[0] - list[1] > 0) ? 1 : ((list[0] - list[1] < 0) ? -1 : 0);

    for (size_t i = 1; i < list.size(); ++i) {
        int diff = list[i - 1] - list[i];
        if (std::abs(diff) < 1 || std::abs(diff) > 3 || ((diff > 0) ? 1 : ((diff < 0) ? -1 : 0)) != direction) {
            return false;
        }
    }

    return true;
}

int main() {
    auto start = std::chrono::high_resolution_clock::now();

    std::ifstream file("input.txt");
    std::vector<std::vector<int>> input;
    std::string line;

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::vector<int> report;
        int number;
        while (ss >> number) {
            report.push_back(number);
        }
        input.push_back(report);
    }

    int numSafe = 0;

    for (const auto& report : input) {
        if (testSafety(report)) {
            numSafe++;
        }
    }

    std::cout << "numSafe: " << numSafe << "\n";

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> execution_time = end - start;
    std::cout << "Execution time: " << execution_time.count() << " seconds" << "\n";

    return 0;
}

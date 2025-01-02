// Advent Of Code 2024 - Day #1: Part 2
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <chrono>
#include <algorithm>

int main() {
    auto start = std::chrono::high_resolution_clock::now();
    
    std::string line;
    std::ifstream inputFile("input.txt");
    std::vector<int> leftList, rightList;

    while (std::getline(inputFile, line)) {
        std::stringstream ss(line);
        std::string left, right;
        ss >> left >> right;
        leftList.push_back(std::stoi(left));
        rightList.push_back(std::stoi(right));
    }

    int similarityScore = 0;

    for (int num : leftList) {
        // find the number of matches in the Right list
        int numMatches = std::count(rightList.begin(), rightList.end(), num);
        similarityScore += num * numMatches;
    }

    std::cout << "similarityScore: " << similarityScore << "\n";

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> execution_time = end - start;
    std::cout << "Execution time: " << execution_time.count() << " seconds" << "\n";

    return 0;
}

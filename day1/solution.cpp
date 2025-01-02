// Advent Of Code 2024 - Day #1: Part 1
//
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <sstream>
#include <chrono>

int main()
{
  auto start = std::chrono::high_resolution_clock::now();

  std::string line;
  std::ifstream inputFile ("input.txt");
  std::vector<int> leftList, rightList;

  while (std::getline(inputFile, line)) {
        std::stringstream ss(line);
        std::string left, right;
        ss >> left >> right;
        leftList.push_back(std::stoi(left));
        rightList.push_back(std::stoi(right));
    }

    std::sort(leftList.begin(), leftList.end(), std::greater<int>());
    std::sort(rightList.begin(), rightList.end(), std::greater<int>());

    int total = 0;

    while (!leftList.empty()) {
        int minLeft = leftList.back();
        leftList.pop_back();
        int minRight = rightList.back();
        rightList.pop_back();
        int difference = std::abs(minRight - minLeft);
        total += difference;
    }

    std::cout << "Total: " << total << "\n";

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> execution_time = end - start;
    std::cout << "Execution time: " << execution_time.count() << " seconds" << "\n";

  return 0;
}

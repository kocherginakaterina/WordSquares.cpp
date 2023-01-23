#include <iostream>
#include <string>
#include <vector>
#include <random>

std::vector<std::string> words = { "word1", "word2", "word3", "word4", "word5" };
std::random_device rd;
std::mt19937 rng(rd());

void printSquare(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << words[(i + j) % words.size()] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::cout << "Enter the number of word squares to generate: ";
    int numSquares;
    std::cin >> numSquares;

    std::cout << "Enter the size of each square: ";
    int size;
    std::cin >> size;

    for (int i = 0; i < numSquares; i++) {
        std::cout << "Square " << i + 1 << ": " << std::endl;
        printSquare(size);
        std::cout << std::endl;
    }

    return 0;
}

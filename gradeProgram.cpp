// Grade Program
// Created by: Shem
// Created on: 2025/12/09
// This program calculates the middle percentage for a given level
// Copyright 2025 Shem

#include <iostream>
#include <string>

int calcMark(std::string level) {
    int grade = -1;
    if (level == "4++") {
        grade = 95;
    } else if (level == "4+") {
        grade = 90;
    } else if (level == "4") {
        grade = 85;
    } else if (level == "4-") {
        grade = 80;
    } else if (level == "3+") {
        grade = 79;
    } else if (level == "3") {
        grade = 75;
    } else if (level == "3-") {
        grade = 70;
    } else if (level == "2+") {
        grade = 69;
    } else if (level == "2") {
        grade = 65;
    } else if (level == "2-") {
        grade = 60;
    } else if (level == "1+") {
        grade = 58;
    } else if (level == "1") {
        grade = 55;
    } else if (level == "1-") {
        grade = 50;
    }
    // invalid stays -1
    return grade;
}
int main() {
    std::string level;
    std::cout << "Enter the level (1-, 2, 3+, 4++): ";
    std::cin >> level;
    int mark = calcMark(level);
    if (mark == -1) {
        std::cout << "Invalid level entered." << std::endl;
    } else {
        std::cout << "The middle percentage for " << level << " is " << mark << "%" << std::endl;
    }
}
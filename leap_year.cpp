// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on May 12, 2021
// Determines if a year is leap or common

#include <iostream>
#include <string>

const int case_one = 4;
const int case_two = 100;
const int case_three = 400;

main() {
    std::string user_input;
    int user_year, operation1, operation2, operation3;
    // Input
    std::cout << "Enter a year: ";
    std::cin >> user_input;
    try {
        user_year = std::stoi(user_input);

        // Process
        operation1 = user_year % case_one;
        operation2 = user_year % case_two;
        operation3 = user_year % case_three;

        if (operation1 == 1) {
            std::cout << user_year;
            std::cout << " is a common year";
            return 0;
            if (operation2 == 1) {
                std::cout << user_year;
                std::cout << " is a leap year";
                return 0;
                if (operation3 == 1) {
                    std::cout << user_year;
                    std::cout << " is a common year";
                    return 0;
                } else {
                    std::cout << user_year;
                    std::cout << " is a leap year";
                }
            } else {
                std::cout << user_year;
                std::cout << " is a leap year";
            }
        } else {
            std::cout << user_year;
            std::cout << " is a leap year";
        }
    } catch (std::invalid_argument) {
        std::cout << user_input;
        std::cout << " is a not a year";
    }
    std::cout << "\nDone.";
}

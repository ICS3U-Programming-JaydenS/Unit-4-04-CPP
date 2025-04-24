// Copyright (c) 2024 Jayden Smith All rights reserved.
// Created by: Jayden Smith
// Date: April 16, 2024
// This program tells gives user multiple guesses for a random number
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>

int main() {
    int randomNumber, userGuess;

    // Initialize the random seed
    srand(time(NULL));

    // Generate a random number between 0 and 9 (inclusive)
    randomNumber = rand() % 9 + 0;
    int counter = 0;
    std::string userNum;

    // While loop that loops the code if your wrong
    while (true) {
        try {
            std::cout << "Pick a number between 0 and 9:";
            std ::cin >> userNum;
            int userNumAsInt = stoi(userNum);

            // Converts user num to integer
            float userNumAsFloat = std::stof(userNum);

            // Checks if user num is a decimal
            if (userNumAsInt != userNumAsFloat) {
                std::cout << userNumAsFloat << " is not a valid guess! \n";

                // Checks if user num is negative
            } else if (userNumAsInt < 0) {
                std::cout << userNumAsInt << " is not a valid guess!\n";
            } else if (userNumAsInt > 9) {
                std::cout << userNumAsInt << " is not a valid guess!\n";

            // If the user num is not equal to random num this happens
            } else if (userNumAsInt != randomNumber) {
                std::cout << "Your wrong it is not " << userNumAsInt<< "\n";
            } else {
                std::cout << "Your right! It is " << randomNumber << "\n";
                break;
            }
            // What happens if it is not a integer or float
        }catch (std::invalid_argument) {
                std::cout << userNum << " is not a valid integer.\n";
            }
        }
    }


// Copyright (c) 2026 Alex OBrien All rights reserved
// .
// Created by : Alex OBrien
// Created on : October 10, 2026
// This program uses an  if..then..elseif..else statement to
// tell the user in they should share, keep, or take
// cookies depending how many they have
#include <iostream>

int main() {
    int cookies = 0;

    // Prompt user for the number of cookies
    std::cout << "How many cookies do you have? : ";
    std::cin >> cookies;

    // Print response to user depending on number given
    if (cookies == 3) {
        std::cout << ">> Keep your cookies for yourself!" << std::endl;
    } else if (cookies > 3) {
        std::cout << ">> " << std::endl;

    } else if (cookies < 3) {
        std::cout << ">> Find someone willing to share cookies!" << std::endl;
}
}
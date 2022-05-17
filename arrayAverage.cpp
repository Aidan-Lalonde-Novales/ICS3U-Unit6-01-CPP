// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved

// Created by Aidan Lalonde-Novales
// Created on 2022-05-17
// This program generates random numbers using arrays and finds the average.

#include <iostream>
#include <random>

int main() {
    // this function finds the average of 10 random numbers

    int numArray[10];
    int randomNum;
    float average;

    // random seed
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne twister
    std::uniform_int_distribution<int> idist(0, 100);  // random from 0 - 100

    std::cout <<
    "This program generates 10 random numbers and finds the average.\n"
    << std::endl;

    // process and output
    for (int counter = 0; counter < 10; counter++) {
        randomNum = idist(rgen);
        numArray[counter] = randomNum;
        std::cout << "Random number generated: " << randomNum << std::endl;
    }

    average = std::accumulate(std::begin(numArray), std::end(numArray),
        0, std::plus<int>());
    average /= 10;

    std::cout << "\nThe average is " << average << "." << std::endl;

    std::cout << "\nDone." << std::endl;
}

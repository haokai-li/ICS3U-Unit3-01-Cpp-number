// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Sept 2021
// This Program calculate 2 number

#include <iostream>

int main() {
  // This Program calculate 2 number

  int firstNumber;
  int secondNumber;
  int answer;

  // input
  std::cout << "Enter the first number(integer): ";
  std::cin >> firstNumber;

  std::cout << "Enter the second number(integer): ";
  std::cin >> secondNumber;

  // process
  answer = firstNumber + secondNumber;

  // putput
  std::cout << "" << std::endl;
  std::cout << "The answer: " << firstNumber << " + "
  << secondNumber << " = " << answer << std::endl;
  std::cout << "\nDone" << std::endl;
}

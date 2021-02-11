//
// Created by kode.zhong on 2020/11/9.
//
#include <iostream>
#include <gtest/gtest.h>
#include "lox/lox.h"

int main(int argc, char* argv[]){
//  testing::InitGoogleTest(&argc, argv);
//  return RUN_ALL_TESTS();
//  if (argc > 2) {
//    std::cout << "Usage: zlox [script]" << std::endl;
//    exit(64);
//  }
  lox::Lox lox;
  if (argc == 2) {
    lox.RunFile(argv[1]);
  } else {
    lox.RunPrompt();
  }
}


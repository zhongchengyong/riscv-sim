//
// Created by kode.zhong on 2021/1/9.
//

#ifndef LOX_INTERPRETER_TEST_TESTLOX_TEST_LOX_H_
#define LOX_INTERPRETER_TEST_TESTLOX_TEST_LOX_H_
#include "gtest/gtest.h"

// The fixture for testing class Foo.
class LoxTest : public ::testing::Test {

 protected:

  // You can do set-up work for each test here.
  LoxTest();

  // You can do clean-up work that doesn't throw exceptions here.
  virtual ~LoxTest();

  // If the constructor and destructor are not enough for setting up
  // and cleaning up each test, you can define the following methods:

  // Code here will be called immediately after the constructor (right
  // before each test).
  virtual void SetUp();

  // Code here will be called immediately after each test (right
  // before the destructor).
  virtual void TearDown();
};
#endif
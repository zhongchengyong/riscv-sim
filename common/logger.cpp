//
// Created by kode.zhong on 2020/11/14.
//

#include "logger.h"

void Error(size_t line, const std::string &msg) {
  std::cerr << "[line " << line << "] Error: " << msg;
}

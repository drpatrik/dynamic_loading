#pragma once

#include <string>

class Interface {
 public:
  virtual ~Interface() {}
  virtual void Print() = 0;
  virtual std::string GetMessage() = 0;
};

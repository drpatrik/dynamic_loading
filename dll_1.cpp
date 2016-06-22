#include "interface.h"
#include <iostream>

class DLL_1 : public Interface {
 public:
  ~DLL_1() {}
  virtual void Print() override { std::cout << message_ << std::endl; }
  virtual std::string GetMessage() override { return message_; }

 private:
  const std::string message_ = "This is DLL_1";
};

extern "C" Interface* GetImplementation() { return new DLL_1; }

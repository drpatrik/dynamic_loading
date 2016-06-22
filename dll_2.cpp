#include "interface.h"
#include <iostream>

class DLL_2 : public Interface {
 public:
  ~DLL_2() {}
  virtual void Print() override { std::cout << message_ << std::endl; }
  virtual std::string GetMessage() override { return message_; }

 private:
  const std::string message_ = "This is DLL_2";
};

extern "C" Interface* GetImplementation() { return new DLL_2; }

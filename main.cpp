#include <iostream>
#include <dlfcn.h>
#include "interface.h"

extern "C" typedef Interface* (*PGetImplementation)();


int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << "dll_name" << std::endl;
    return 0;
  }
  std::string dll_name = argv[1];

  std::cout << "loading " << dll_name << std::endl;


  auto lib_ptr = dlopen(dll_name.c_str(), RTLD_LAZY);

  if (nullptr == lib_ptr) {
    std::cout << "Load failed" << std::endl;
    return 0;
  }
  PGetImplementation GetImplementation = reinterpret_cast<PGetImplementation>(dlsym(lib_ptr, "GetImplementation"));

  if (nullptr == GetImplementation) {
    std::cout << "Failed to load symbol" << std::endl;
  } else {
    auto interface = GetImplementation();

    interface->Print();
    std::cout << interface->GetMessage() << std::endl;
  }

  dlclose(lib_ptr);
  return 0;
}

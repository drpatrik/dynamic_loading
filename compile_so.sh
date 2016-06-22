clang -std=c++11 -shared -undefined dynamic_lookup -o libdll_1.so dll_1.cpp -lc++
clang -std=c++11 -shared -undefined dynamic_lookup -o libdll_2.so dll_2.cpp -lc++

# dynamic_loading
Demonstrates dynamic loading of shared libraries under Linux/OSX

        Example input / output

        ./main libdll_1.so

        output:

        loading libdll_1.so
        This is DLL_1 # Calling Print on interface
        This is DLL_1 # Calling GetMessage on interface

        ./main libdll_2.so

        output:

        loading libdll_2.so
        This is DLL_2 # Calling Print on interface
        This is DLL_2 # Calling GetMessage on interface

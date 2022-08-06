//---------------------------------------------------------------------------
#pragma hdrstop

#include <iostream>
#include "rot64.h"

namespace rot64
{
   using namespace std;

   void show_help(void)
   {
      cout << "Simple character substitution cipher that replaces a character with the 64th character after it in the ASCII table." << endl;
      cout << "\n";
      cout << "echo64 [-s <string>] [-f <source_file> > <target_file> | <source_file> >> <append_target_file>] [-v] [-h]" <<endl;
   }
}

//---------------------------------------------------------------------------
#pragma package(smart_init)

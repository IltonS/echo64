//---------------------------------------------------------------------------
#include <iostream>
#include "rot64.h"

#pragma hdrstop

using namespace std;
using namespace rot64;

//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
   if (argc==1) {
      //cout << (char *)argv[0] << endl;
      show_help();
   };

   #ifdef _DEBUG
      cin.get();
   #endif
   
   return 0;
}
//---------------------------------------------------------------------------
 

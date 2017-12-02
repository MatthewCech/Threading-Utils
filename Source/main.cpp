/*!***************************************************************************
@file    main.cpp
@author  <author>
@par     <email/contact info>
@date    <date here>

@brief 
<you can put a multiline description of your application here...>

@copyright See LICENSE.md
*****************************************************************************/
#include <iostream>               // std::cout
#include <RUtils/RTimekeeper.hpp>  // Rutils::RException


// Application entry point
int main(int argc, char** argv)
{
  // Timing start ///////////
  RUtils::Timekeeper t;
  t.StartFrame();   
  ///////////////////////////




  // Timing end /////////////
  t.EndFrame(); 
  std::cout << "Took " << t.GetLastTimeMS() << "ms\n";
  ///////////////////////////

  // Normal termination
  return 0;
}

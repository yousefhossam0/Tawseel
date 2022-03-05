#include <iostream>
#include<string>
#include"Payment.h"
#include"login.h"
#include"order.h"
using namespace std;

int main()
{
  
  login L1;
   L1.MN();
    order r1;
    r1.add_order();
   Payment p;
   p.select_payment();

    return 0;
}


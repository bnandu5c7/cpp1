#include "Account.h"
int main()
{
    Account aobj;
    aobj.showAccountDetails();
    Account aobj1(502,"nandini reddy",56700);
    aobj1.showAccountDetails();
    Account *accptr=new Account;
    accptr->showAccountDetails();
    Account accarr[2] = {{503,"nimmu",45000},{504,"harsha",35400}};
    for(int k=0;k<2;k++)
    {
        accarr[k].showAccountDetails();
    }
    delete accptr;
}
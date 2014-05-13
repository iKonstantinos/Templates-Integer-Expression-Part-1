/*
 * main.cpp
 *
 *  Created on: 10 May 2014
 *      Author: KonstantinosChalkias
 */


#include <iostream>
#include "IntExprPart1.hpp"

int main (int argc, const char * argv[])
{

    //typedef NOT<IMP<P, OR<NOT<AND<LIT<true>, P > >, NOT<P> > > > FORM;
    typedef DIVISION<X,LIT<0> > FORM;
    FORM X;


    int input1 = 2;
    printf("Result is %d\n", (X.eval(input1)));



    return 0;

}







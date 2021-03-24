#include "Mage.h"

Mage::Mage() : Personnage(300,200,0.5)
{
    cout<<"je suis un Mage"<<endl;
}

Mage::Mage(int hp) : Personnage(5000,200,0.5)
{
    cout<<"je suis un Mage"<<endl;
}

void Mage::test()
{
    cout<<"Mage"<<endl;
}
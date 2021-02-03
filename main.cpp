#include "Personnage.h"

int main() {
    srand(time(NULL));
	Personnage p1;
	p1.setNom("Jean");
	p1.setAttack(50);
	p1.setDefense(20);
	p1.setPercentCrit(0.2);
	p1.showInfos();
	cout << endl;

	Arme a1;
	a1.setDegats (100);
	a1.setPortee (10);
    a1.setType = "Bob";
	a1.setNiveauRequis = 10;
	a1.setPrix = 0.9f;
	a1.showInfos();

	Arme a2(50,2,"tranchante",5,500);
	cout << "Degats de l'arme = " << a2.getArme().getDegats() << endl;
	p1.setArme(a2);
	p1.getArme().setDegats(75);
	cout << "Degats de l'arme = " << a2.getArme().getDegats() << endl;

	cout << "	personnage 2  " << endl;
	Personnage p2(p1);
	p2.setNom("Richard");
	p2.setAttack(600);
	p2.showInfos();
	cout << endl;

	p1.~Personnage();

	cout << "	personnage 3  " << endl;
	Personnage p3(200,50,0.2);
    p3.showInfos();
	cout << endl;

	cout << "	personnage 4 " << endl;
	Personnage p4("Romain");
    p4.showInfos();
	cout << endl;

	cout << "Attack de p4 = "<<p4.getAttack()<<endl;
	cout << "PV de P3 = "<<p3.getPv()<<endl;

    cout <<"ATTACK"<<endl;
	p4.attackPlayer(&p3);

	cout << "Attack de p4 = "<<p4.getAttack()<<endl;
	cout << "PV de P3 = "<<p3.getPv()<<endl;

	cout << "heal de p2 = "<<p2.getHeal()<<endl;
	cout << "PV de P3 = "<<p3.getPv()<<endl;

    cout <<"HEAL"<<endl;
	p2.healPlayer(&p3);

	cout << "heal de p2 = "<<p2.getHeal()<<endl;
	cout << "PV de P3 = "<<p3.getPv()<<endl;

	if(p1 == p2){
        cout<<p1.getNom()<< " est egal a "<<p2.getNom()<<endl;
	}else{
        cout<<p1.getNom()<< " pas egal a "<<p2.getNom()<<endl;
	}

	Personnage fusion;
	fusion = p2 + p3;
    fusion.showInfos();

    fusion += p4;
    fusion.showInfos();
    return 0;
}

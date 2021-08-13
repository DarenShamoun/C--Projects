#include <iostream>
using namespace std;

class Enemy
{
protected:
	int attackPower;
public:
	void setAttackPower(int a)
	{
		attackPower = a;
	}
};

class Ninja : public Enemy
{
public:
	void attack()
	{
		cout << "i am a ninja, ninja chop! -" << attackPower << endl;
	}
};

class Monster : public Enemy
{
public:
	void attack()
	{
		cout << "i am a monster, monster eats you! -" << attackPower << endl;
	}
};

int main()
{
	Ninja n;
	Monster m;
	Enemy *enemy1 = &n;                  //because ninja is a type of enemy, this is valid
	Enemy* enemy2 = &m;					 //anything that an enemy can do, a monster can do
	enemy1->setAttackPower(29);		//ninja is just a more specific type of enemy
	enemy2->setAttackPower(500);	//every enemy has setAttackPower
	n.attack();							 //cant use enemy1 because its type Enemy
	m.attack();							 //Enemy class does not have attack
}
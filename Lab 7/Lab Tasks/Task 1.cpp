#include<iostream>
using namespace std;

class Players
{
public:
	int no_of_players;
	int get_player();
	Players(const int& x) :no_of_players(x) 
	{
	}
};
int Players::get_player()
{
	return no_of_players;
}

class Team
{
private:
	const Players& Obj_Players;
	int a;

public:

	Team(const  Players&);
	int getNoPlayers();
};

Team::Team(const Players& x) :Obj_Players{ x }
{
}

int Team::getNoPlayers()
{
	return Obj_Players.no_of_players;
}

int main()
{
	Players y(11);
	cout << "Accessing through the class of Players obj Before teams class : " << y.get_player() << endl;

	Team b(y);

	cout << "Accessing through Players class obj : " << b.getNoPlayers() << endl;
	cout << "Accessing through class of Players obj After teams class  : " << y.get_player() << endl;

	return 0;
}



#include <iostream>
#include <string>
using namespace std;
#pragma once
class Player;
class Board;

class Piece  //Piece Class
{
	string num;
	COORD location;
	COORD spawn;
	bool isAlive = false;
	bool isWon = false;
public:
	friend class Player;  //friend class of Player
	friend class Board;   //friend class of Board aswell
	friend void updateBoard(Piece&, int, int); //friend function for updating Board
	Piece()
	{
		num = " ";
		location.X = 0;
		location.Y = 0;
	}
	Piece(string num, int x, int y)
	{
		this->num = num;
		location.X = x;
		location.Y = y;
		spawn.X = x;
		spawn.Y = y;
	}
	void setLocation(int x, int y) 
	{
		location.X = x;
		location.Y = y;
	}
	void setLocation(COORD l)
	{
		location = l;
	}
	void setNum(string num)
	{
		this->num = num;
	}
	void setX(int x) //seting x co-ordinate
	{
		location.X = x;
	}
	void setY(int y) //setting Y co-ordinate
	{
		location.Y = y;
	}
	void setSpawn(int x, int y) //Setting the piece's spawn
	{
		spawn.X = x;
		spawn.Y = y;
	}
	string getNum() //returns what no of piece it is
	{
		return num;
	}
	COORD getLocation()  //returns location of piece as COORD
	{
		return location;
	}
	COORD getSpawn()  //Getting each Piece Spawn
	{
		return spawn;
	}
	int getX() //Returning X-co-ordinate
	{
		return location.X;
	}
	int getY() //Returning Y-co-ordinate
	{
		return location.Y;
	}
	const Piece& operator=(const Piece& p) //Assigninment Operator for Piece Class
	{
		num = p.num;
		location.X = p.location.X;
		location.Y = p.location.Y;
		spawn = p.spawn;
		return *this;
	}

};
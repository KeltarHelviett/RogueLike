#pragma once

#include "GameObject.h"

enum ObstacleAtribute
{
	oaInvis, oaDim, oaNormal
};

class Obstacle : public GameObject
{
public:
	Obstacle();
protected:
	ObstacleAtribute atribute;
};

class Floor : public Obstacle
{
public:
	void Collide(GameObject *go) override;
	void Collide(Knight *k) override;
	void Collide(Zombie *z) override;
	void Collide(Floor *f) override;
	void Collide(HardWall *hw) override;
	void Collide(Dragon *d) override;
	void Collide(Arrow *a) override;
	void Collide(Fireball *fb) override;
	void Collide(HealthPotion *hp) override;
	void Collide(Princess *p) override;

	Floor(int x, int y);
	char Tile() override;
};

class HardWall : public Obstacle
{
public:
	void Collide(GameObject *go) override;
	void Collide(Knight *k) override;
	void Collide(Zombie *z) override;
	void Collide(Floor *f) override;
	void Collide(HardWall *hw) override;
	void Collide(Dragon *d) override;
	void Collide(Arrow *a) override;
	void Collide(Fireball *fb) override;
	void Collide(HealthPotion *hp) override;
	void Collide(Princess *p) override;

	HardWall(int x, int y);
	char Tile();
};

#pragma once
class Enemy
{
public:
	Enemy();
	~Enemy();

	void Approach();
	void shot();
	void GetAway();

	void Update();
	void Draw();

private:
	static void(Enemy::* pFuncTable[])();

	int phase_;

};


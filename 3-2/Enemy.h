#pragma once
class Enemy
{
public:
	Enemy();
	~Enemy();

	bool IsAlive();
	void SetDeath();

	void Update();
	void Draw();

public:
	// ‘S‘Ì
	static bool isAllAlive;

private:
	// ŒÂ•Ê
	bool isAlive;
};


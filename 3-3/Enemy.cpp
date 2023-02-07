#include "Enemy.h"
#include<stdio.h>

void (Enemy::* Enemy::pFuncTable[])() = {
	&Enemy::Approach,  //0
	&Enemy::shot,         //1
	&Enemy::GetAway,  //2
};

Enemy::Enemy() {
	phase_ = 0;
}
Enemy::~Enemy() {
}

void Enemy::Approach() {
	printf("‹ß‚Ã‚­\n");
}

void Enemy::shot() {
	printf("Œ‚‚Â\n");
}

void Enemy::GetAway() {
	printf("—£’E\n");
}

void Enemy::Update() {
	(this->*pFuncTable[phase_])();
	phase_++;
	if (phase_ >= 3) {
		phase_ = 0;
	}
}

void Enemy::Draw() {
	printf("(enemy draw)\n");
}

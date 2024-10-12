#include "World.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"



World::World() {
	StaticObject* statobj = new StaticObject(4,3);
	ent.push_back(statobj);
	BreakableObject* breakobj = new BreakableObject(3,3,1,1);
	ent.push_back(breakobj);
	Mob* mob = new Mob(-2, -2, 20, 20, Vector2(1, 1));
	ent.push_back(mob);
	Player* player = new Player(0, 0, 10, 10, Vector2(-1, -1));
	ent.push_back(player);

}


bool World::IsMobAlive() {
	for (int i = 0; i < ent.size(); i++) {
		if (typeid(*ent.at(i)) == typeid(Mob)) {
			return true;
		}
	}
	return false;
}

bool World::IsBOAlive() {
	for (int i = 0; i < ent.size(); i++) {
		if (typeid(*ent.at(i)) == typeid(BreakableObject)) {
			return true;
		}
	}
	return false;
}

void World::Step() {
	while (1) {
		if (IsBOAlive() == false and IsMobAlive() == false) {
			std::cout << "Simulation Finished" << std::endl;
			break;
		}
		else {

			for (int i = 0; i < ent.size(); i++) {

				if (typeid(*ent.at(i)) == typeid(Mob)) {

					for (int j = 0; j < ent.size(); j++) {
						if (typeid(BreakableObject) == typeid(*ent.at(j))) {

							Entity* breakobj = ent.at(j);
							ent.at(i)->MoveTo(breakobj);
							std::cout << std::endl;
							if (ent.at(i)->DistanceBetween(breakobj) <= 1) {
								ent.erase(ent.begin() + j);
								ent.shrink_to_fit();
							}
						}

					}

				}

				else if (typeid(*ent.at(i)) == typeid(Player)) {
					Player* player = (Player*)ent[i];
					for (int j = 0; j < ent.size(); j++) {
						if (IsMobAlive()) {
							if (typeid(*ent.at(j)) == typeid(Mob)) {
								Mob* mob = (Mob*)ent[j];
								ent.at(i)->MoveTo(mob);
								std::cout << std::endl;
								if (player->DistanceBetween(mob) <= 1) {
									player->Attack(mob);

									if (mob->GetLife() <= 0) {
										std::cout << "The mob is dead" << std::endl;
										std::cout << std::endl;
										ent.erase(ent.begin() + j);
										ent.shrink_to_fit();
									}

								}
							}

						}

						else {
							if (typeid(*ent.at(j)) == typeid(BreakableObject)) {
								Entity* breakobj = ent[j];
								ent.at(i)->MoveTo(breakobj);
								std::cout << std::endl;
								if (ent.at(i)->DistanceBetween(breakobj) <= 1) {
									ent.erase(ent.begin() + j);
									std::cout << "The BO is dead" << std::endl;
									std::cout << std::endl;
									ent.shrink_to_fit();
								}
							}
						}

					}
				}
			}
		}
	}
	
	

}


#include <iostream>

#include "Integer.h"
#include "Player.h"
#include "World.h"


int main()
{

    /*
    * Exercice 1 
    *
    Vector2* Vecteur = new Vector2(2,5);
    Vecteur->SetX(-52);
    Vecteur->SetY(200);
    std::cout << Vecteur->GetX() << std::endl;
    std::cout << Vecteur->GetY() << std::endl;

    */


    /*
    * EXERCICE 2
    * 
    Entity* Ent = new Entity(-1,1);

    Ent->SetPos(-1.2, 5);

    std::cout << Ent->GetPos();
    */

    /*
    * EXERCICE 3
    * 
    AMovable* amov = new AMovable(Vector2(2, 4), 3);
    amov->SetDir(Vector2(1, 2));
    amov->SetSpeed(10);

    std::cout << amov->Move();
    */

    /*
    * EXERCICE 4
    * 
    Alive* aliv = new Alive(2);
    aliv->max_life = 5;

    std::cout << aliv->GetLife();
    std::cout <<  aliv->GetMaxLife();

    aliv->TakeDamage(4);

    std::cout << aliv->GetLife();
    */

    //StaticObject* statobj = new StaticObject(0, -5);


    /*
    * 
    * EXERCICE 7
    BreakableObject* breakobj = new BreakableObject(2, 4, 5, 5);

    breakobj->TakeDamage(1);
    */


    
    // EXERCICE 8
    
    //Mob* mob = new Mob(2, 4, 7, 7, Vector2(2, 2));
    //mob->Move();
   
    //EXERCICE 9
    //Player* player = new Player(0, 0, 5, 5, Vector2(1, 1));
    //player->Move();

    //player->Attack(mob)


    World* world = new World();

    std::cout << std::endl;
    std::cout << std::endl;

    world->Step();



    return 0;
}


#include "Room.hpp"
#include <iostream>

Room::Room(string title)
{
    this->title = title;
    this->currentNumberOfDoors = 0;
}
void Room::addDoor(Door* portal)
{
    for(int i = 0; i < 10; i++)
    {
        if(this->collectionOfDoors[i] == 0)
        {
            this->collectionOfDoors[i] = portal;
            i = 10;
        }
    }
}
void Room::doorDisplay()
{
    for(int i = 0; i < 10; i++)
    {
        cout << this->collectionOfDoors[i] << "\n";
    }
}
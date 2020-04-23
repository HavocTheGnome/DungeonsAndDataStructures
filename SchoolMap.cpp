#include "SchoolMap.hpp"
#include "Door.hpp"
#include "Room.hpp"
#include "LinkedListOfStudents.hpp"
#include "Student.hpp"
#include <iostream>

SchoolMap::SchoolMap()
{
    this->Hallway1 = new Room("Hallway 1");
    this->Hallway2 = new Room("Hallway 2");
    this->HallwayNorth = new Room("Hallway North");
    this->HallwaySouth1 = new Room("Hallway South 1");
    this->HallwaySouth2 = new Room("Hallway South 2");
    this->Lobby = new Room("Lobby");
    this->ServerRoom = new Room("Server Room");
    this->LockLairsOffice = new Room("Lock Lairs Office");
    this->Esports = new Room("Esports");
    this->OneHundredTwenty = new Room("120");
    this->MacLab1 = new Room("Mac Lab 1");
    this->MacLab2 = new Room("Mac Lab 2");
    this->OneHundredEighteen = new Room("118");
    this->AdvLab1 = new Room("Adv Lab 1");
    this->AdvLab2 = new Room("Adv Lab 2");
    Door* Door1 = new Door("Hallway 1", Hallway1, "Hallway 2", Hallway2);
    this->Hallway1->addDoor(Door1);
    this->Hallway2->addDoor(Door1);
    Door* Door2 = new Door("Hallway North", HallwayNorth, "Hallway 2", Hallway2);
    this->HallwayNorth->addDoor(Door2);
    this->Hallway2->addDoor(Door2);
    Door* Door3 = new Door("Hallway South 1", HallwaySouth1, "Hallway 2", Hallway2);
    this->HallwaySouth1->addDoor(Door3);
    this->Hallway2->addDoor(Door3);
    Door* Door4 = new Door("Hallway 1", HallwaySouth1, "Hallway South 2", HallwaySouth2);
    this->HallwaySouth1->addDoor(Door4);
    this->HallwaySouth2->addDoor(Door4);
    Door* Door5 = new Door("Hallway South 2", HallwaySouth2, "120", OneHundredTwenty);
    this->HallwaySouth2->addDoor(Door5);
    this->OneHundredTwenty->addDoor(Door5);
    Door* Door6 = new Door("Hallway South 2", HallwaySouth2, "Lobby", Lobby);
    this->HallwaySouth2->addDoor(Door6);
    this->Lobby->addDoor(Door6);
    Door* Door7 = new Door("Lobby", Lobby, "Server Room", ServerRoom);
    this->Lobby->addDoor(Door7);
    this->ServerRoom->addDoor(Door7);
    Door* Door8 = new Door("Lobby", Lobby, "Lock Lairs Office", LockLairsOffice);
    this->Lobby->addDoor(Door8);
    this->LockLairsOffice->addDoor(Door8);
    Door* Door9 = new Door("Lobby", Lobby, "Esports", Esports);
    this->Lobby->addDoor(Door9);
    this->Esports->addDoor(Door9);
    Door* Door10 = new Door("Hallway North", HallwayNorth, "Adv Lab 1", AdvLab1);
    this->HallwayNorth->addDoor(Door10);
    this->AdvLab1->addDoor(Door10);
    Door* Door11 = new Door("Hallway North", HallwayNorth, "118", OneHundredEighteen);
    this->HallwayNorth->addDoor(Door11);
    this->OneHundredEighteen->addDoor(Door11);
    Door* Door12 = new Door("Hallway North", HallwayNorth, "Mac Lab 1", MacLab1);
    this->HallwayNorth->addDoor(Door12);
    this->MacLab1->addDoor(Door12);
    Door* Door13 = new Door("Adv Lab 1", AdvLab1, "Adv Lab 2", AdvLab2);
    this->AdvLab1->addDoor(Door13);
    this->AdvLab2->addDoor(Door13);
    Door* Door14 = new Door("Mac Lab 2", MacLab2, "Mac Lab 1", MacLab1);
    this->MacLab2->addDoor(Door14);
    this->MacLab1->addDoor(Door14);
    Door* Door15 = new Door("Mac Lab 2", MacLab2, "118", OneHundredEighteen);
    this->OneHundredEighteen->addDoor(Door15);
    this->MacLab2->addDoor(Door15);
    this->StartRoom = this->Hallway1;
}
void SchoolMap::addStudent(string name, Room* occupy)
{
    Student* Stud = new Student(name);
    Stud->assignRoom(occupy);
    this->Registry->addFront(Stud);
}

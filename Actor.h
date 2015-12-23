/*
  Actor.h - Class for collection of points to be controlled in single room.
  Created by Piotr Kaminski, 2015/07/12.
*/


#ifndef Actor_h
#define Actor_h

#include "Arduino.h"

#include "ObjectRemotlyControlled.h"
#include "Point.h"
#include "Room.h"

#define ACTOR_MAX_ROOMS 20

class Actor: public ObjectRemotlyControlled {
  private:
    int rooms;
    
  protected:
    Room *roomsTable[ACTOR_MAX_ROOMS];
 
  public:
    Actor(String name);
    ~Actor();
    void addRoom(Room* point);
    virtual void verifyControlPoints();
    virtual void initialize();   
    virtual String createCommand();
    virtual String createCommand(int state);
    virtual void executeCommand(String queue, String command);
    virtual String getFullRemoteName();
};

#endif

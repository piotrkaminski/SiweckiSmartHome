#ifndef Point_h
#define Point_h

#include "ObjectRemotelyControlled.h"

/**
	Defines single point in installation. Points can be:
	<ol>
		<li>active - execute commands like light (on/off), blind (open, close)</li>
		<li>passive - do not execute commands but obly pass data like thermometer (read temperature)</li>
	</ol>

  Created by Piotr Kaminski, 2015/07/12.
*/
class Point: public ObjectRemotelyControlled {
 
  public:
    Point(char* name):ObjectRemotelyControlled(name){};
    virtual ~Point(){};
    virtual void initialize() = 0;
    virtual boolean isControlButtonPressed() = 0;
    virtual void verifyControlPoint() = 0;
};

#endif

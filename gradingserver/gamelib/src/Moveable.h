#ifndef MOVEABLE_H
#define MOVEABLE_H

#include "Interactable.h"

class Moveable : public Interactable {
	
public:
	Moveable();
	virtual ~Moveable();
	

	/*
	 * All of these functions return true if the move was
	 * successful, and false if not
	 */
	virtual bool moveUp();
	virtual bool moveDown();
	virtual bool moveLeft();
	virtual bool moveRight();
	virtual bool move(Direction direction);
	
protected:

private:

}


#endif // MOVEABLE_H

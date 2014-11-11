#ifndef MOVEABLE_H
#define MOVEABLE_H

#include <memory>

#include "MoveObserver.h"

#include "json/json.h"
#include "MoveLogEntry.h"
#include "Rotatable.h"
#include "Position.h"
#include "Util.h"

class Moveable : public Rotatable {
    
public:
    virtual ~Moveable();
    
    void registerMoveObserver(weak_ptr<MoveObserver> obs);

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
    Moveable(Json::Value value);
    
    /*
     * Prohibit default construction
     */
    Moveable() = delete;

private:

    weak_ptr<MoveObserver> m_moveObserver;
};


#endif // MOVEABLE_H

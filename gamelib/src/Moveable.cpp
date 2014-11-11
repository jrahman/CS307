#include "Moveable.h"

Moveable::Moveable(Json::Value value)
    : Rotatable(value)
{}


Moveable::~Moveable() 
{}

void Moveable::registerMoveObserver(weak_ptr<MoveObserver> obs) {
    m_moveObserver = obs;
}

bool Moveable::moveUp() {
    return move(Direction::UP);
}

bool Moveable::moveDown() {
    return move(Direction::DOWN);
}

bool Moveable::moveLeft() {
    return move(Direction::LEFT);
}

bool Moveable::moveRight() {
    return move(Direction::RIGHT);
}

bool Moveable::move(Direction direction) {
    auto observer = m_moveObserver.lock();
    if (observer == nullptr) {
        return false;
    }

    int dx = 0, dy = 0;
    Rotation r;
    switch (direction) {
        case Direction::UP:
            dy = -1;
            r = Rotation::R90;
            break;
        case Direction::DOWN:
            dy = 1;
            r = Rotation::R270;
            break;
        case Direction::LEFT:
            dx = -1;
            r = Rotation::R180;
            break;
        case Direction::RIGHT:
            dx = 1;
            r = Rotation::R0;
            break;
    }

    /*
     * We are always able to perform the rotation
     */
    rotate(r);

    int x = m_position.getX() + dx;
    int y = m_position.getY() + dy;

    Position next(x, y);
    if (observer->onPreMove(*this, m_position, next)) {
        m_position = next;

        shared_ptr<MoveLogEntry> logEntry(new MoveLogEntry(getID(), m_position));
        log(logEntry);
        observer->onPostMove(*this, m_position);
        return true;
    }
    return false;
}


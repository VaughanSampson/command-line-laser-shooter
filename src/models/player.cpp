#include "player.h" 

Player::Player(int id, float x, float y) : Body(id, x, y, 0.1) {

}

Player::Player(int id, float x, float y, float velocityX, float velocityY) : 
    Body(id, x, y, velocityX, velocityY, 0.1) {

}

void Player::update() { 
    Body::addVelocity((float)input_handler::getHorizontalAxisInput()/10, (float)input_handler::getVerticalAxisInput()/10);
    Body::update(); 

    /* cr osshair
    // Create torque
    torque += input_handler::getHorizontalAxisInput();

    if(-0.5f > torque || torque > 0.5f) {
        // Add angle
        angle += torque/2;
    
        // Create drag
        torque -= torque/20;

        // Enforce boundaries
        if(angle < -180){
            angle = -180;
            torque = 0;
        }
        else
        if(angle > 0){
            angle = 0;
            torque = 0;
        }
        rendered = false;
    }
    */
}

float Player::getAngle() const { return angle; }

bool Player::getRendered() const { return rendered; }

Entity::icon Player::getIcon() { 
    Entity::icon icon;
    icon.c1 = 'W';
    icon.c2 = 'W';
    return icon;
}
//
//  Dots.h
//  name
//
//  Created by Quincy Bock on 10/24/12.
//
//

#ifndef name_Dots_h
#define name_Dots_h

class Dots  {
public:
    
    void setup(){
        
        
    }
    void move(){
        diff.x = finalPos.x - pos.x;
        diff.y = finalPos.y - pos.y;
        velocity.x = diff.x/speed;
        velocity.y = diff.y/speed;
        
        pos.x += velocity.x;
        pos.y += velocity.y;
    }
    
    void display(){
        ofSetColor(color);
        ofCircle(pos, 2);
    }
    
    float speed;
    ofPoint velocity;
    ofPoint diff;
    ofPoint pos;
    ofPoint finalPos;
    ofColor color;
};


#endif

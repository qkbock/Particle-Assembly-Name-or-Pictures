#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    name.loadImage("name.png");
    ofSetFrameRate(100);
    ofSetCircleResolution(100);
    ofBackground(255);
}

//--------------------------------------------------------------
void testApp::update(){
    for(int i=0; i<dots.size(); i++){
        dots[i].move();
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    ofEnableAlphaBlending();
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
//    name.draw(-name.getWidth()/2, -name.getHeight()/2);
    ofPopMatrix();
    
    ofPushMatrix();
//    ofTranslate(, ofGetHeight()/2-name.getHeight()/2);
    for(int i=0; i<dots.size(); i++){
        dots[i].display();
    }
    ofPopMatrix();
    ofDisableAlphaBlending();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    for(int j = 0; j< 11; j++){
        for(int i = 0; i < dots.size(); i++){
            dots.erase(dots.begin()+i);
        }
    }
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    
    for(int y=0; y<name.getHeight(); y+=2){
        for(int x=0; x<name.getWidth(); x+=3){
            Dots dot;
            dot.finalPos.set(x, y);
            dot.finalPos.x += ofGetWidth()/2-name.getWidth()/2;
            dot.finalPos.y += ofGetHeight()/2-name.getHeight()/2;
            dot.pos.x = ofRandom(-ofGetWidth(), ofGetWidth()*2);
            dot.pos.y = ofRandom(-ofGetHeight(), ofGetHeight()*2);
            dot.color = name.getPixelsRef().getColor(x, y);
            dot.speed = ofRandom(30, 60);
            dots.push_back( dot );
        }
    }
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
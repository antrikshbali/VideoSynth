#include "ofApp.h"
#include <math.h>

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowTitle("Video Synth!");
    ofSetWindowShape(1280, 720);
    ofSetFrameRate(60);
    ofBackground(ofColor::white);
    gui.setup("Parameters", "settings.xml");
    gui.add(countX.setup("countX",50,0,200));
    gui.add(stepX.setup("stepX",20,0,200));
    gui.add(twistX.setup("twistX",5,-45,45));

}

//--------------------------------------------------------------
void ofApp::update(){
    

}

void ofApp::stripePattern() {
    ofSetColor(ofColor::black);
    ofSetLineWidth(3.0);
    ofNoFill();
    for(int i=-countX;i<countX;i++) {
        ofPushMatrix();
        ofTranslate(i*stepX, 0);
        ofRotate(i*twistX);
        ofScale(6,6);
        ofDrawTriangle(0,0,-50,100,50,100);
        //ofDrawLine(0,-100,0,100);
        ofPopMatrix();
        ofSetColor(abs((i*20)%255), abs((i*7)%255), abs((i*39)%255));
    }
}
//--------------------------------------------------------------
void ofApp::draw(){
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
    //CODE COMES HERE!
    /*ofSetColor(ofColor::black);
    ofSetLineWidth(3.0);
    ofDrawLine(0,-100,0,100);
    ofDrawRectangle(40,40,100,50);
    ofDrawTriangle(-200, 200, -400, -35, -70, -125);
    ofSetCircleResolution(40);
    ofDrawCircle(200, -100, 30);*/
    stripePattern();
    ofPopMatrix();
    gui.draw();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

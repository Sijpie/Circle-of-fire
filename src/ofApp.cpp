#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	radius = 0;
	colour = 150;

	ofSetBackgroundColor(ofColor::white);
	ofSetFullscreen(true);

}

//--------------------------------------------------------------
void ofApp::update() {
	if (drawit) {
		if (radius < 100) {
			radius += 1.5;
			colour -= 1.5;
		}
	}
}

//--------------------------------------------------------------
void ofApp::draw() {
	if (drawit) {
		ofSetColor(colour);
		ofDrawCircle(ofGetWidth() / 2, ofGetHeight() / 2, radius);

	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	if (key == ' ') {
		drawit = true;
	}
	else {
		drawit = false;
	}
}


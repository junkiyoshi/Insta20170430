#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		const int box_size = 128;
		const int x_len = 9;
		const int y_len = 9;
		const int z_len = 9;
		ofVec3f locations[9][9][9];
		ofColor colors[9][9][9];

		ofEasyCam cam;

		float x_noise;
		float y_noise;
		float z_noise;
		
};

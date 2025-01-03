#pragma once

#include "ofMain.h"

class PlySequence {

	public:
		PlySequence();
		virtual ~PlySequence() {};
		void setup();
		void writePointCloudsAsImages();
		void loadBasePly(string filename);
		void draw();
		void compressAndSave(string fileName);

		int index, ix, w, h, start, frameNum, block, d, place;
		
		ofShader shader;
		ofPixels pixels;
		ofCamera camera;
		ofPlanePrimitive plane;
		ofVboMesh mesh;
		ofDirectory dir;
		ofImage floatImage;

		ofTexture *texture;
		ofImage *images;
		ofVboMesh *meshes;

};

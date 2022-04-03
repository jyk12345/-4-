#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/objdetect.hpp>
#include<iostream>
using namespace cv;
using namespace std;

/// ////////////�沿ʶ��///////////////////

void main() {

	string path = "resources/dingzhen.jpg";
	Mat img = imread(path);

	CascadeClassifier faceCascade;
	faceCascade.load("resources/haarcascade_frontalface_default.xml");

	if (faceCascade.empty()) { cout << "XML file not loaded" << endl; }

	vector<Rect> faces;
	faceCascade.detectMultiScale(img, faces, 1.1, 10);

	for (int i = 0; i < faces.size(); i++)
	{
		rectangle(img, faces[i].tl(), faces[i].br(), Scalar(255, 150, 55), 3);
	}

	imshow("Image", img);
	waitKey(0);
}
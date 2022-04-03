#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>
using namespace cv;
using namespace std;

////////////////����ͼ��///////////////////


float w = 250, h = 350;
Mat matrix, imgWarp;
void main()
{

	string path = "resources/cards.jpg";
	Mat img = imread(path);
	Point2f src[4] = { {740,380} ,{1027,438},{645,710},{967,783} };
	Point2f dst[4] = { {0.0f,0.0f},{w,0.0f},{0.0f,h},{w,h} };

	for (int i = 0; i < 4; i++)
	{
		circle(img, src[i], 10, Scalar(0, 69, 255), FILLED);
	}

	matrix = getPerspectiveTransform(src, dst);
	warpPerspective(img, imgWarp, matrix, Point(w, h));


	imshow("Image", img);
	imshow("Image Warp", imgWarp);
	waitKey(0);


}


#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>
using namespace cv;
using namespace std;

/// ////////////5个基本功能///////////////////

void main()
{
	string path = "resources/test.png";
	Mat img = imread(path);
	Mat imgGray, imgBlur,imgCanny,imgDil,imgErode;

	cvtColor(img, imgGray, COLOR_BGR2GRAY);
	GaussianBlur(imgGray, imgBlur, Size(3, 3), 3, 0);
	Canny(imgBlur, imgCanny, 25, 75);
	 
	Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
	dilate(imgCanny, imgDil,kernel );
	erode(imgDil, imgErode, kernel);


	imshow("Image", img);//原图
	imshow("Image Gray", imgGray);//灰度图
	imshow("Image Blur", imgBlur);//模糊图
	imshow("Image Canny", imgCanny);//糖果图
	imshow("Image Dilation", imgDil);//膨胀图
	imshow("Image Erode", imgErode);//侵蚀图
	waitKey(0);


}
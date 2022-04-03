#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>
using namespace cv;
using namespace std;

/// ////////////5����������///////////////////

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


	imshow("Image", img);//ԭͼ
	imshow("Image Gray", imgGray);//�Ҷ�ͼ
	imshow("Image Blur", imgBlur);//ģ��ͼ
	imshow("Image Canny", imgCanny);//�ǹ�ͼ
	imshow("Image Dilation", imgDil);//����ͼ
	imshow("Image Erode", imgErode);//��ʴͼ
	waitKey(0);


}
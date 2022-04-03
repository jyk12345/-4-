#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>
using namespace cv;
using namespace std;

/// ////////////绘制图形///////////////////

void main()
{
	//Blank Image
	Mat img(512, 512, CV_8UC3, Scalar(255, 255, 255));

	circle(img, Point(256, 256), 155, Scalar(0, 69, 255),FILLED);//圆心，半径，颜色，厚度
	rectangle(img, Point(130, 226), Point(382, 286), Scalar(255, 255, 255), FILLED);//定义矩形，两对角点确定矩阵轮廓
    line(img, Point(130, 296), Point(382, 296), Scalar(255, 255, 255), 2);

	putText(img, "123456", Point(137, 262), FONT_HERSHEY_COMPLEX,1,Scalar(0,69,255),5);

	imshow("Image", img);
	


	waitKey(0);


}
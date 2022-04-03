#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>
using namespace cv;
using namespace std;

/// ////////////调整大小和裁剪///////////////////

void main()
{
	string path = "resources/test.png";
	Mat img = imread(path);
	Mat imgResize,imgCrop;
	////尺寸调整  图像裁剪
	
	//cout << img.size() << endl;
	//resize(img, imgResize, Size(640,480));//像素缩小

	resize(img, imgResize, Size(),0.5,0.5);//长宽比例缩小

	Rect roi(200, 100, 300, 300);
	imgCrop = img(roi);


	imshow("Image", img);//原图
	imshow("Image Resize", imgResize);
	imshow("Image Crop", imgCrop);


	waitKey(0);


}
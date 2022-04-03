#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>
using namespace cv;
using namespace std;

/// ////////////������С�Ͳü�///////////////////

void main()
{
	string path = "resources/test.png";
	Mat img = imread(path);
	Mat imgResize,imgCrop;
	////�ߴ����  ͼ��ü�
	
	//cout << img.size() << endl;
	//resize(img, imgResize, Size(640,480));//������С

	resize(img, imgResize, Size(),0.5,0.5);//���������С

	Rect roi(200, 100, 300, 300);
	imgCrop = img(roi);


	imshow("Image", img);//ԭͼ
	imshow("Image Resize", imgResize);
	imshow("Image Crop", imgCrop);


	waitKey(0);


}
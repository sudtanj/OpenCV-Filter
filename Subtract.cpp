#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

void main() {
	Mat lenna = imread("Lenna.png", CV_LOAD_IMAGE_GRAYSCALE);
	Mat img = imread("putih.png",CV_LOAD_IMAGE_GRAYSCALE);
	imshow("putih", img);
	Mat imgTemp = img.clone();
	subtract(img, lenna, imgTemp);
	imshow("Subtract", imgTemp);
	/**
	for (int i = 0; i < img.rows; i++) {
		for (int j = 0; j < img.cols; j++) {
			if (img.at<uchar>(i, j) < thres)
				img.at<uchar>(i, j) = 255;
			else
				img.at<uchar>(i, j) = 0;
		}
	}
	imshow("After", img);
	*/
	waitKey(0);
}
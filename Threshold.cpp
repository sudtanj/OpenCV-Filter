#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

void main() {
	Mat img = imread("Lenna.png",CV_LOAD_IMAGE_GRAYSCALE);
	int thres = 128;
	imshow("Before", img);
	for (int i = 0; i < img.rows; i++) {
		for (int j = 0; j < img.cols; j++) {
			if (img.at<uchar>(i, j) < thres)
				img.at<uchar>(i, j) = 255;
			else
				img.at<uchar>(i, j) = 0;
		}
	}
	imshow("After", img);
	waitKey(0);
}
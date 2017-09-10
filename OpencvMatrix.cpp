#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

void main() {
	Mat img = imread("Lenna.png",CV_LOAD_IMAGE_GRAYSCALE);
	imshow("Before", img);
	for (int i = 0; i < img.rows; i++) {
		for (int j = 0; j < img.cols; j++) {
			img.at<uchar>(i, j) = 255 - img.at<uchar>(i, j);
		}
	}
	imshow("After", img);
	waitKey(0);
}
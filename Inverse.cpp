#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

void main() {
	Mat img = imread("Lenna.png", CV_LOAD_IMAGE_GRAYSCALE);
	Mat fg;
	//int gamma=120;
	img.convertTo(fg, CV_32F);
	//fg = fg + 1;
	//log(fg, fg);
	exp(fg, fg);
	pow(fg, (log(256) / (255)),fg);
	//fg = fg - 1;
	convertScaleAbs(fg, fg);
	normalize(fg, fg, 0, 255, NORM_MINMAX);
	fg.convertTo(fg, CV_8U);
	/**
	for (int i = 0; i < img.rows; i++) {
	for (int j = 0; j < img.cols; j++) {
	img.at<uchar>(i, j) = 1*pow(img.at<uchar>(i, j),10);
	//cout << 1 * log(1 + img.at<uchar>(i, j)) << endl;
	}
	}
	*/
	imshow("After", fg);
	waitKey(0);
}
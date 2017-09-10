#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

void main() {
	Mat img = imread("Lenna.png", 0);
	Mat fg;
	float gamma=1.0;
	img.convertTo(fg, CV_32FC1);
	fg = fg * (.003921);
	pow(fg, gamma, fg);
	fg = fg * 2;
	fg = fg * 255;
	fg.convertTo(fg, CV_8U);

	imshow("After", fg);
	waitKey(0);
}
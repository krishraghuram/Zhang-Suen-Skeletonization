#include <iostream>
#include <opencv2/opencv.hpp>
#include "skeletonization.hpp"

using namespace std;
using namespace cv;

int main(int argc, char** argv)
{

    if(argc!=2)
    {
        cout<<"Need 2 arguments"<<endl;
        return -1;
    }

    Mat im = imread(argv[1]);
    Mat skel = skeletonization(im);

    namedWindow("Original Image", CV_WINDOW_NORMAL);
    namedWindow("Skeleton Image", CV_WINDOW_NORMAL);
    imshow("Original Image", im);
    imshow("Skeleton Image", skel);
    waitKey(0);

    return 0;

}
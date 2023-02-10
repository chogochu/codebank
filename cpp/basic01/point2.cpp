#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
    cv::Point_<int> pt1(100, 200);
    cv::Point_<float> pt2(92.3f, 125.23f);
    cv::Point_<double> pt3(100.2, 300.9);

    std::cout << pt1 << std::endl;
    std::cout << pt3 << std::endl;

    cv::Point2i pt4(120, 69);
    cv::Point2f pt5(0.3f, 0.f);
    cv::Point2d pt6(0.25, 0.6);

    std::cout << pt4 << std::endl;
    std::cout << pt6 << std::endl;

    return 0;
}
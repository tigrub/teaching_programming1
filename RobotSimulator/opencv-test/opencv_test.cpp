/// opencv_test.cpp
///
/// Simple example for testing whether your
/// installation of the OpenCV library worked
///
/// Install the OpenCV library with:
///
///     sudo apt install libopencv-dev
///
/// then compile this program with:
///
///   g++ opencv_test.cpp -o opencv_test `pkg-config --cflags --libs opencv4`
///
/// Note:
/// -----
/// If you have any problems to install OpenCV, you can also build it by your
/// own from source code:
///
/// First you need to download, build and install OpenCV for C++ development:
/// See e.g. https://askubuntu.com/questions/1123955/install-opencv4-in-ubuntu-16
///
/// My commands to build OpenCV under Ubuntu 20.04:
/// - go to your source code directory: cd src
/// - get the newest OpenCV code: git clone https://github.com/opencv/opencv.git
/// - prepare a build directory with the OpenCV directory:
///   cd opencv
///   mkdir build
///   cd build
/// - prepare the build: cmake ../
/// - start the build: make (this will take a long time, ca. 60 minutes)
/// - install the binaries just built: sudo make install
///
/// ---
/// by Prof. Dr.-Ing. Juergen Brauer, www.juergenbrauer.org

#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main( int argc, char** argv )
{    
    Mat image;
    image = imread( "test_image.jpg" );
    imshow( "Display window", image );
    waitKey(0);    
}
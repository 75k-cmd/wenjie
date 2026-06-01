#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

// 函数1：加载人脸检测器
CascadeClassifier loadDetector(string path) {
    CascadeClassifier face_cascade;
    face_cascade.load(path);
    return face_cascade;
}

// 函数2：检测人脸
vector<Rect> detectFaces(Mat img, CascadeClassifier detector) {
    vector<Rect> faces;
    Mat gray;
    cvtColor(img, gray, COLOR_BGR2GRAY);
    detector.detectMultiScale(gray, faces, 1.1, 3);
    return faces;
}

// 函数3：绘制人脸框
Mat drawFaces(Mat img, vector<Rect> faces) {
    Mat result = img.clone();
    for (Rect face : faces) {
        rectangle(result, face, Scalar(0, 255, 0), 2);
        putText(result, "Face", Point(face.x, face.y-10), 
                FONT_HERSHEY_SIMPLEX, 0.5, Scalar(0,255,0), 1);
    }
    return result;
}

// 函数4：保存结果
void saveResult(Mat img, string filename) {
    imwrite(filename, img);
    cout << "结果已保存到 " << filename << endl;
}

int main() {
    // 1. 加载模型和图像
    CascadeClassifier detector = loadDetector("haarcascade_frontalface_default.xml");
    Mat img = imread("group_photo.jpg");
    
    // 2. 检测
    vector<Rect> faces = detectFaces(img, detector);
    
    // 3. 可视化
    Mat result = drawFaces(img, faces);
    
    // 4. 输出结果（在main里统一处理）
    cout << "检测到 " << faces.size() << " 张人脸" << endl;
    imshow("人脸检测", result);
    imwrite("result.jpg", result);
    waitKey(0);
    
    return 0;
}
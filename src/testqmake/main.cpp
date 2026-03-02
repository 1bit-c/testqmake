#include "widget.h"
#include <QApplication>
#include <opencv2/opencv.hpp>
#include <QString>

void showChineseWindow(const QString& titleQStr)
{
    // 转成系统 ANSI（Windows 下一般是 GBK）
    std::string ansiTitle = titleQStr.toLocal8Bit().constData();
    cv::namedWindow(ansiTitle.c_str(), cv::WINDOW_NORMAL);
    //cv::imshow(ansiTitle.c_str(), img);  // img 是你的 cv::Mat
    //cv::waitKey(0);
}

int main(int argc, char *argv[])
{
    showChineseWindow(QString::fromUtf8("opencv中文测试窗口"));
    //cv::namedWindow("opencv");
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}

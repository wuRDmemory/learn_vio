/*
 * @Author: your name
 * @Date: 2020-05-24 21:31:12
 * @LastEditTime: 2020-05-25 23:01:37
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Editin
 * @FilePath: /LearnVIO/include/feature_track.h
 */ 
#pragma once

#include <ros/ros.h>

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

#include "opencv2/opencv.hpp"
#include "eigen3/Eigen/Core"
#include "eigen3/Eigen/Dense"


using namespace std;
using namespace cv;

class FeatureTrack {
public:
    static int id;

public:
    double curr_timestamp_;

    cv::Mat mask_;
    cv::Mat fisheye_mask_;
    cv::Mat prev_image_;
    cv::Mat curr_image_;

    vector<Point2f> curr_pts_;
    vector<Point2f> prev_pts_;

    vector<Point2f> curr_un_pts_;
    vector<Point2f> prev_un_pts_;
    
    vector<Point2f> pts_velocity_;
    
    vector<int> ids_;
    vector<int> track_cnt_;

public:
    FeatureTrack();
    ~FeatureTrack();

    void readImage(const cv::Mat& image, double timestamp);

    void readInstrinsicParameter(const string file_path);

    
private:
    bool isVisable(const cv::Point2f& pt);

    template<typename T>
    void reduceVector(vector<T>& vec, vector<uchar>& status);

    void rejectWithF();
};
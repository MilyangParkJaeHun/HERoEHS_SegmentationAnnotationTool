#pragma once
#include <QLabel>
#include <QPainter>
#include <map>
#include "utils.h"

struct ColorMask
{
    QColor  id;
    QColor  color;
    QString class_name;
};

struct ImageMask 
{
    QImage  id;
    QImage  color;

    ImageMask();
    ImageMask(QSize s);

    void drawFillCircle(int x, int y, int pen_size, ColorMask cm, QImage& image);
    void drawPixel(int x, int y, ColorMask cm, QImage& image);
    void drawHSVFilter(cv::Mat filter, ColorMask cm, QImage& image);
};

class ISAT : public QLabel
{
    Q_OBJECT

public:
    ISAT(QWidget *parent = nullptr);
    
    QString                 _imgFile;
    QStringList             _imgList;
    int                     _imgIndex;
    QStringList             _classList;
    int                     _pen_size;
    bool                    _mouse_is_pressed;
    QPoint                  _mouse_pos;
    bool                    _display_manual_mask;
    bool                    _display_watershed_mask;
    bool                    _draw_manual_mask;

    QImage                  _inputImg;
    cv::Size                _inputImg_size;
    ColorMask               _color;
    ImageMask               _mask;
    ImageMask               _watershed;
    bool                    _is_watershed;

    ImageMask               _init_watershed;

    QImage                  _inputImg_display;
    std::vector<ColorMask>  _id_storage;
    std::vector<int>        _effective_id;
    
    int                     _undo_idx;
    std::vector<ImageMask>  _undo_mask;
    std::vector<ImageMask>  _undo_watershed;

    std::map<std::string, int> _hsv_filter;
    std::map<std::string, int> _default_hsv;
    std::map<std::string, std::map<std::string, int> > _hsv_storage;

    int _mouse_offset_x;
    int _mouse_offset_y;
    
    void readImage();
    bool checkDuplication(int id, QColor color);
    void createID(int& id, QColor& color, QString class_name);
    void createID(int id, QString class_name);
    bool changeID(int id);
    void changeBackgroundID();
    void checkID();
    void draw(QMouseEvent *e, QRect size);
    void run_bfs(int y, int x, cv::Mat id_mat, ColorMask cm);
    void fill_color(QRect size);
    void update_mask();
    void run_watershed();
    void idToColor(ImageMask& mask);
    void save();
    void read();
    cv::Mat get_hsv_filter(cv::Mat origin_display);
    void update_hsv_filter();
    void draw_hsv_mask();
    void resetImage();
    std::map<std::string, int> load_hsv(std::string class_name);
    void set_hsv(std::string class_name);
    void clear_hsv();
};
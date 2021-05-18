#pragma once
#ifndef GLOBAL_H
#define GLOBAL_H
#include <Qt>
#include <QDebug>
#define TRUE 1
#define FALSE 0

#define SUCCESS 1
#define ERROR 0

// 空白的值
#define BLANK -1

// 最大数据元素的个数
#define MAX_VERTEX_NUM 256

// 连连看默认地图大小
#define DEFAULT_MAP_COL 6
//#define DEFAULT_MAP_COL 16

#define DEFAULT_MAP_ROW 6
//#define DEFAULT_MAP_ROW 10
// TODO 恢复至上述格式

// 连连看可用图片数目
#define ITEM_NUM 8

// 连连看方块的宽带
#define MAP_ITEM_WIDTH 40

// 游戏可以用的时间，单位：秒
#define GAME_TOTAL_TIME 300

// 每次随机刷新的次数
#define DEFAULT_RANDOM_TIMES 100

typedef struct tagVertex{
    int row;
    int col;
    int info;
}Vertex;


#endif // GLOBAL_H

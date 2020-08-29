//
//  RenderShaderTypes.h
//  MetalTriangleDemo
//
//  Created by 徐鹏飞 on 2020/8/25.
//  Copyright © 2020 徐鹏飞. All rights reserved.
//

/*
 介绍:
 头文件包含了 Metal shaders 与C/OBJC 源之间共享的类型和枚举常数
*/

#ifndef RenderShaderTypes_h
#define RenderShaderTypes_h

#include <simd/simd.h>

//顶点数据结构
typedef struct
{
    //顶点坐标(x,y,z,w)
    vector_float4 position;
    //纹理坐标(s,t)
    vector_float2 textureCoordinate;
} CCVertex;

//转换矩阵
typedef struct {
    //三维矩阵
    matrix_float3x3 matrix;
    //偏移量
    vector_float3 offset;
} CCConvertMatrix;

//顶点函数输入索引
typedef enum CCVertexInputIndex
{
    CCVertexInputIndexVertices     = 0,
} CCVertexInputIndex;

//片元函数缓存区索引
typedef enum CCFragmentBufferIndex
{
    CCFragmentInputIndexMatrix     = 0,
} CCFragmentBufferIndex;

//片元函数纹理索引
typedef enum CCFragmentTextureIndex
{
    //Y纹理
    CCFragmentTextureIndexTextureY     = 0,
    //UV纹理
    CCFragmentTextureIndexTextureUV     = 1,
} CCFragmentTextureIndex;

#endif /* RenderShaderTypes_h */

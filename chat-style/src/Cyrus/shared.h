#pragma once
#include <Windows.h>
#include <fstream>
#include <iostream>
#include <mutex>
#include <ostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>

struct Vector3D {
  float x;
  float z;
  float y;
};

struct VectorI2D {
  float x;
  float y;
};

struct Vector2D {
  float x;
  float y;
};

struct Rect {
  int left;
  int top;
  int right;
  int bottom;
};

#ifdef __INTELLISENSE__
#define STATIC_ASSERT(cond, msg)                                               \
  void x__COUNTER__() {                                                        \
    do {                                                                       \
    } while (0);                                                               \
  }
#else
#define STATIC_ASSERT(cond, msg) static_assert(cond, msg)
#endif

#define DEFINE_OFFSET_AND_STATIC_ASSERT(classname, member, offset)             \
  static const std::size_t offset_##member = offsetof(classname, member);      \
  STATIC_ASSERT(offset_##member == offset,                                     \
                #classname " " #member " alignment is incorrect")

#ifdef EXPORTING_DLL
#define CYRUS __declspec(dllexport)
#else
#define CYRUS __declspec(dllimport)
#endif

#ifdef __INTELLISENSE__
#define CYRUS __declspec(dllexport)
#endif
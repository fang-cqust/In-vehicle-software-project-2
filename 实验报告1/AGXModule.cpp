#include "AGXModule.h"

// 定义 AGXModule 的构造函数
AGXModule::AGXModule() :
    model("AGX Xavier"),
    ai(32),
    cudaCores(512),
    tensorCores(64),
    memory(32),
    storage(32) {
    // 构造函数可以在这里进行一些初始化操作
}
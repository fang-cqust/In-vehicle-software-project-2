#include "AGXModule.h"

// ���� AGXModule �Ĺ��캯��
AGXModule::AGXModule() :
    model("AGX Xavier"),
    ai(32),
    cudaCores(512),
    tensorCores(64),
    memory(32),
    storage(32) {
    // ���캯���������������һЩ��ʼ������
}
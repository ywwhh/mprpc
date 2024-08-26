#ifndef CE068169_F081_41F4_B5F9_08B1B0FBFACA
#define CE068169_F081_41F4_B5F9_08B1B0FBFACA
#ifndef E2A41182_9DFD_4830_93B6_0F76A7130021
#define E2A41182_9DFD_4830_93B6_0F76A7130021

#include "mprpcconfig.h"
#include "mprpcchannel.h"
#include "mprpccontroller.h"

// mprpc框架的基础类，负责框架的一些初始化操作
class MprpcApplication
{
public:
    static void Init(int argc, char **argv);
    static MprpcApplication& GetInstance();
    static MprpcConfig& GetConfig();
private:
    static MprpcConfig m_config;

    MprpcApplication(){}
     MprpcApplication(const MprpcApplication&) = delete;
    MprpcApplication(MprpcApplication&&) = delete;
};


#endif /* E2A41182_9DFD_4830_93B6_0F76A7130021 */


#endif /* CE068169_F081_41F4_B5F9_08B1B0FBFACA */

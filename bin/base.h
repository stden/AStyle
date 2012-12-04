#ifndef BPOSCONFIG_H_
#define BPOSCONFIG_H_

#ifdef __cplusplus
extern "C" {
#endif

    const char* getWorkingDir();
    const char* getStateFile();
    const char* getConfigFile();
    const char* getProtocolVersion();
    const char* getServerAddr();
    const char* getServerAltAddr();

#ifdef __cplusplus
}
#endif

#endif /* BPOSCONFIG_H_ */

// This is a generated source file for Chilkat version 9.4.1.34
#ifndef _C_CkUpload_W_H
#define _C_CkUpload_W_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkUploadW CkUploadW_Create(void);
HCkUploadW CkUploadW_Create2(BOOL bForDso);
void CkUploadW_Dispose(HCkUploadW handle);
int CkUploadW_getChunkSize(HCkUploadW cHandle);
void CkUploadW_putChunkSize(HCkUploadW cHandle, int newVal);
void CkUploadW_getDebugLogFilePath(HCkUploadW cHandle, HCkStringW retval);
void CkUploadW_putDebugLogFilePath(HCkUploadW cHandle, const wchar_t *newVal);
int CkUploadW_getHeartbeatMs(HCkUploadW cHandle);
void CkUploadW_putHeartbeatMs(HCkUploadW cHandle, int newVal);
void CkUploadW_getHostname(HCkUploadW cHandle, HCkStringW retval);
void CkUploadW_putHostname(HCkUploadW cHandle, const wchar_t *newVal);
int CkUploadW_getIdleTimeoutMs(HCkUploadW cHandle);
void CkUploadW_putIdleTimeoutMs(HCkUploadW cHandle, int newVal);
void CkUploadW_getLastErrorHtml(HCkUploadW cHandle, HCkStringW retval);
void CkUploadW_getLastErrorText(HCkUploadW cHandle, HCkStringW retval);
void CkUploadW_getLastErrorXml(HCkUploadW cHandle, HCkStringW retval);
void CkUploadW_getLogin(HCkUploadW cHandle, HCkStringW retval);
void CkUploadW_putLogin(HCkUploadW cHandle, const wchar_t *newVal);
unsigned long CkUploadW_getNumBytesSent(HCkUploadW cHandle);
void CkUploadW_getPassword(HCkUploadW cHandle, HCkStringW retval);
void CkUploadW_putPassword(HCkUploadW cHandle, const wchar_t *newVal);
void CkUploadW_getPath(HCkUploadW cHandle, HCkStringW retval);
void CkUploadW_putPath(HCkUploadW cHandle, const wchar_t *newVal);
unsigned long CkUploadW_getPercentUploaded(HCkUploadW cHandle);
int CkUploadW_getPort(HCkUploadW cHandle);
void CkUploadW_putPort(HCkUploadW cHandle, int newVal);
void CkUploadW_getProxyDomain(HCkUploadW cHandle, HCkStringW retval);
void CkUploadW_putProxyDomain(HCkUploadW cHandle, const wchar_t *newVal);
void CkUploadW_getProxyLogin(HCkUploadW cHandle, HCkStringW retval);
void CkUploadW_putProxyLogin(HCkUploadW cHandle, const wchar_t *newVal);
void CkUploadW_getProxyPassword(HCkUploadW cHandle, HCkStringW retval);
void CkUploadW_putProxyPassword(HCkUploadW cHandle, const wchar_t *newVal);
int CkUploadW_getProxyPort(HCkUploadW cHandle);
void CkUploadW_putProxyPort(HCkUploadW cHandle, int newVal);
void CkUploadW_getResponseBody(HCkUploadW cHandle, HCkByteDataW retval);
void CkUploadW_getResponseHeader(HCkUploadW cHandle, HCkStringW retval);
int CkUploadW_getResponseStatus(HCkUploadW cHandle);
BOOL CkUploadW_getSsl(HCkUploadW cHandle);
void CkUploadW_putSsl(HCkUploadW cHandle, BOOL newVal);
unsigned long CkUploadW_getTotalUploadSize(HCkUploadW cHandle);
BOOL CkUploadW_getUploadInProgress(HCkUploadW cHandle);
BOOL CkUploadW_getUploadSuccess(HCkUploadW cHandle);
BOOL CkUploadW_getVerboseLogging(HCkUploadW cHandle);
void CkUploadW_putVerboseLogging(HCkUploadW cHandle, BOOL newVal);
void CkUploadW_getVersion(HCkUploadW cHandle, HCkStringW retval);
void CkUploadW_AddCustomHeader(HCkUploadW cHandle, const wchar_t *name, const wchar_t *value);
void CkUploadW_AddFileReference(HCkUploadW cHandle, const wchar_t *name, const wchar_t *path);
void CkUploadW_AddParam(HCkUploadW cHandle, const wchar_t *name, const wchar_t *value);
BOOL CkUploadW_BlockingUpload(HCkUploadW cHandle);
void CkUploadW_ClearFileReferences(HCkUploadW cHandle);
void CkUploadW_ClearParams(HCkUploadW cHandle);
BOOL CkUploadW_SaveLastError(HCkUploadW cHandle, const wchar_t *path);
void CkUploadW_SleepMs(HCkUploadW cHandle, int millisec);
BOOL CkUploadW_UploadToMemory(HCkUploadW cHandle, HCkByteDataW outData);
const wchar_t *CkUploadW__debugLogFilePath(HCkUploadW cHandle);
const wchar_t *CkUploadW__hostname(HCkUploadW cHandle);
const wchar_t *CkUploadW__lastErrorHtml(HCkUploadW cHandle);
const wchar_t *CkUploadW__lastErrorText(HCkUploadW cHandle);
const wchar_t *CkUploadW__lastErrorXml(HCkUploadW cHandle);
const wchar_t *CkUploadW__login(HCkUploadW cHandle);
const wchar_t *CkUploadW__password(HCkUploadW cHandle);
const wchar_t *CkUploadW__path(HCkUploadW cHandle);
const wchar_t *CkUploadW__proxyDomain(HCkUploadW cHandle);
const wchar_t *CkUploadW__proxyLogin(HCkUploadW cHandle);
const wchar_t *CkUploadW__proxyPassword(HCkUploadW cHandle);
const wchar_t *CkUploadW__responseHeader(HCkUploadW cHandle);
const wchar_t *CkUploadW__version(HCkUploadW cHandle);
#endif

// This is a generated source file for Chilkat version 9.4.1.34
#ifndef _C_CkHttpRequest_H
#define _C_CkHttpRequest_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkHttpRequest CkHttpRequest_Create(void);
void CkHttpRequest_Dispose(HCkHttpRequest handle);
void CkHttpRequest_getCharset(HCkHttpRequest cHandle, HCkString retval);
void CkHttpRequest_putCharset(HCkHttpRequest cHandle, const char *newVal);
void CkHttpRequest_getContentType(HCkHttpRequest cHandle, HCkString retval);
void CkHttpRequest_putContentType(HCkHttpRequest cHandle, const char *newVal);
void CkHttpRequest_getDebugLogFilePath(HCkHttpRequest cHandle, HCkString retval);
void CkHttpRequest_putDebugLogFilePath(HCkHttpRequest cHandle, const char *newVal);
void CkHttpRequest_getEntireHeader(HCkHttpRequest cHandle, HCkString retval);
void CkHttpRequest_putEntireHeader(HCkHttpRequest cHandle, const char *newVal);
void CkHttpRequest_getHttpVerb(HCkHttpRequest cHandle, HCkString retval);
void CkHttpRequest_putHttpVerb(HCkHttpRequest cHandle, const char *newVal);
void CkHttpRequest_getHttpVersion(HCkHttpRequest cHandle, HCkString retval);
void CkHttpRequest_putHttpVersion(HCkHttpRequest cHandle, const char *newVal);
void CkHttpRequest_getLastErrorHtml(HCkHttpRequest cHandle, HCkString retval);
void CkHttpRequest_getLastErrorText(HCkHttpRequest cHandle, HCkString retval);
void CkHttpRequest_getLastErrorXml(HCkHttpRequest cHandle, HCkString retval);
int CkHttpRequest_getNumHeaderFields(HCkHttpRequest cHandle);
int CkHttpRequest_getNumParams(HCkHttpRequest cHandle);
void CkHttpRequest_getPath(HCkHttpRequest cHandle, HCkString retval);
void CkHttpRequest_putPath(HCkHttpRequest cHandle, const char *newVal);
BOOL CkHttpRequest_getSendCharset(HCkHttpRequest cHandle);
void CkHttpRequest_putSendCharset(HCkHttpRequest cHandle, BOOL newVal);
BOOL CkHttpRequest_getUtf8(HCkHttpRequest cHandle);
void CkHttpRequest_putUtf8(HCkHttpRequest cHandle, BOOL newVal);
BOOL CkHttpRequest_getVerboseLogging(HCkHttpRequest cHandle);
void CkHttpRequest_putVerboseLogging(HCkHttpRequest cHandle, BOOL newVal);
void CkHttpRequest_getVersion(HCkHttpRequest cHandle, HCkString retval);
BOOL CkHttpRequest_AddBytesForUpload(HCkHttpRequest cHandle, const char *name, const char *filename, HCkByteData byteData);
BOOL CkHttpRequest_AddBytesForUpload2(HCkHttpRequest cHandle, const char *name, const char *filename, HCkByteData byteData, const char *contentType);
BOOL CkHttpRequest_AddFileForUpload(HCkHttpRequest cHandle, const char *name, const char *path);
BOOL CkHttpRequest_AddFileForUpload2(HCkHttpRequest cHandle, const char *name, const char *path, const char *contentType);
void CkHttpRequest_AddHeader(HCkHttpRequest cHandle, const char *name, const char *value);
void CkHttpRequest_AddParam(HCkHttpRequest cHandle, const char *name, const char *value);
BOOL CkHttpRequest_AddStringForUpload(HCkHttpRequest cHandle, const char *name, const char *filename, const char *strData, const char *charset);
BOOL CkHttpRequest_AddStringForUpload2(HCkHttpRequest cHandle, const char *name, const char *filename, const char *strData, const char *charset, const char *contentType);
BOOL CkHttpRequest_GenerateRequestText(HCkHttpRequest cHandle, HCkString outStr);
BOOL CkHttpRequest_GetHeaderField(HCkHttpRequest cHandle, const char *name, HCkString outStr);
BOOL CkHttpRequest_GetHeaderName(HCkHttpRequest cHandle, int index, HCkString outStr);
BOOL CkHttpRequest_GetHeaderValue(HCkHttpRequest cHandle, int index, HCkString outStr);
BOOL CkHttpRequest_GetParam(HCkHttpRequest cHandle, const char *name, HCkString outStr);
BOOL CkHttpRequest_GetParamName(HCkHttpRequest cHandle, int index, HCkString outStr);
BOOL CkHttpRequest_GetParamValue(HCkHttpRequest cHandle, int index, HCkString outStr);
BOOL CkHttpRequest_GetUrlEncodedParams(HCkHttpRequest cHandle, HCkString outStr);
BOOL CkHttpRequest_LoadBodyFromBytes(HCkHttpRequest cHandle, HCkByteData binaryData);
BOOL CkHttpRequest_LoadBodyFromFile(HCkHttpRequest cHandle, const char *path);
BOOL CkHttpRequest_LoadBodyFromString(HCkHttpRequest cHandle, const char *bodyStr, const char *charset);
void CkHttpRequest_RemoveAllParams(HCkHttpRequest cHandle);
BOOL CkHttpRequest_RemoveHeader(HCkHttpRequest cHandle, const char *name);
void CkHttpRequest_RemoveParam(HCkHttpRequest cHandle, const char *name);
BOOL CkHttpRequest_SaveLastError(HCkHttpRequest cHandle, const char *path);
void CkHttpRequest_SetFromUrl(HCkHttpRequest cHandle, const char *url);
BOOL CkHttpRequest_StreamBodyFromFile(HCkHttpRequest cHandle, const char *path);
void CkHttpRequest_UseGet(HCkHttpRequest cHandle);
void CkHttpRequest_UseHead(HCkHttpRequest cHandle);
void CkHttpRequest_UsePost(HCkHttpRequest cHandle);
void CkHttpRequest_UsePostMultipartForm(HCkHttpRequest cHandle);
void CkHttpRequest_UsePut(HCkHttpRequest cHandle);
void CkHttpRequest_UseUpload(HCkHttpRequest cHandle);
void CkHttpRequest_UseUploadPut(HCkHttpRequest cHandle);
void CkHttpRequest_UseXmlHttp(HCkHttpRequest cHandle, const char *xmlBody);
const char *CkHttpRequest_charset(HCkHttpRequest cHandle);
const char *CkHttpRequest_contentType(HCkHttpRequest cHandle);
const char *CkHttpRequest_debugLogFilePath(HCkHttpRequest cHandle);
const char *CkHttpRequest_entireHeader(HCkHttpRequest cHandle);
const char *CkHttpRequest_generateRequestText(HCkHttpRequest cHandle);
const char *CkHttpRequest_getHeaderField(HCkHttpRequest cHandle, const char *name);
const char *CkHttpRequest_getHeaderName(HCkHttpRequest cHandle, int index);
const char *CkHttpRequest_getHeaderValue(HCkHttpRequest cHandle, int index);
const char *CkHttpRequest_getParam(HCkHttpRequest cHandle, const char *name);
const char *CkHttpRequest_getParamName(HCkHttpRequest cHandle, int index);
const char *CkHttpRequest_getParamValue(HCkHttpRequest cHandle, int index);
const char *CkHttpRequest_getUrlEncodedParams(HCkHttpRequest cHandle);
const char *CkHttpRequest_headerField(HCkHttpRequest cHandle, const char *name);
const char *CkHttpRequest_headerName(HCkHttpRequest cHandle, int index);
const char *CkHttpRequest_headerValue(HCkHttpRequest cHandle, int index);
const char *CkHttpRequest_httpVerb(HCkHttpRequest cHandle);
const char *CkHttpRequest_httpVersion(HCkHttpRequest cHandle);
const char *CkHttpRequest_lastErrorHtml(HCkHttpRequest cHandle);
const char *CkHttpRequest_lastErrorText(HCkHttpRequest cHandle);
const char *CkHttpRequest_lastErrorXml(HCkHttpRequest cHandle);
const char *CkHttpRequest_param(HCkHttpRequest cHandle, const char *name);
const char *CkHttpRequest_paramName(HCkHttpRequest cHandle, int index);
const char *CkHttpRequest_paramValue(HCkHttpRequest cHandle, int index);
const char *CkHttpRequest_path(HCkHttpRequest cHandle);
const char *CkHttpRequest_urlEncodedParams(HCkHttpRequest cHandle);
const char *CkHttpRequest_version(HCkHttpRequest cHandle);
#endif

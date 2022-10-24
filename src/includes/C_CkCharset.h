// This is a generated source file for Chilkat version 9.4.1.34
#ifndef _C_CkCharset_H
#define _C_CkCharset_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkCharset CkCharset_Create(void);
void CkCharset_Dispose(HCkCharset handle);
void CkCharset_getAltToCharset(HCkCharset cHandle, HCkString retval);
void CkCharset_putAltToCharset(HCkCharset cHandle, const char *newVal);
void CkCharset_getDebugLogFilePath(HCkCharset cHandle, HCkString retval);
void CkCharset_putDebugLogFilePath(HCkCharset cHandle, const char *newVal);
int CkCharset_getErrorAction(HCkCharset cHandle);
void CkCharset_putErrorAction(HCkCharset cHandle, int newVal);
void CkCharset_getFromCharset(HCkCharset cHandle, HCkString retval);
void CkCharset_putFromCharset(HCkCharset cHandle, const char *newVal);
void CkCharset_getLastErrorHtml(HCkCharset cHandle, HCkString retval);
void CkCharset_getLastErrorText(HCkCharset cHandle, HCkString retval);
void CkCharset_getLastErrorXml(HCkCharset cHandle, HCkString retval);
void CkCharset_getLastInputAsHex(HCkCharset cHandle, HCkString retval);
void CkCharset_getLastInputAsQP(HCkCharset cHandle, HCkString retval);
void CkCharset_getLastOutputAsHex(HCkCharset cHandle, HCkString retval);
void CkCharset_getLastOutputAsQP(HCkCharset cHandle, HCkString retval);
BOOL CkCharset_getSaveLast(HCkCharset cHandle);
void CkCharset_putSaveLast(HCkCharset cHandle, BOOL newVal);
void CkCharset_getToCharset(HCkCharset cHandle, HCkString retval);
void CkCharset_putToCharset(HCkCharset cHandle, const char *newVal);
BOOL CkCharset_getUtf8(HCkCharset cHandle);
void CkCharset_putUtf8(HCkCharset cHandle, BOOL newVal);
BOOL CkCharset_getVerboseLogging(HCkCharset cHandle);
void CkCharset_putVerboseLogging(HCkCharset cHandle, BOOL newVal);
void CkCharset_getVersion(HCkCharset cHandle, HCkString retval);
int CkCharset_CharsetToCodePage(HCkCharset cHandle, const char *charsetName);
BOOL CkCharset_CodePageToCharset(HCkCharset cHandle, int codePage, HCkString outCharset);
BOOL CkCharset_ConvertData(HCkCharset cHandle, HCkByteData inData, HCkByteData outData);
BOOL CkCharset_ConvertFile(HCkCharset cHandle, const char *srcPath, const char *destPath);
BOOL CkCharset_ConvertFileNoPreamble(HCkCharset cHandle, const char *srcPath, const char *destPath);
BOOL CkCharset_ConvertFromUtf16(HCkCharset cHandle, HCkByteData uniData, HCkByteData outMbData);
BOOL CkCharset_ConvertHtml(HCkCharset cHandle, HCkByteData htmlIn, HCkByteData outHtml);
BOOL CkCharset_ConvertHtmlFile(HCkCharset cHandle, const char *srcPath, const char *destPath);
BOOL CkCharset_ConvertToUtf16(HCkCharset cHandle, HCkByteData mbData, HCkByteData outUniData);
BOOL CkCharset_EntityEncodeDec(HCkCharset cHandle, const char *inStr, HCkString outStr);
BOOL CkCharset_EntityEncodeHex(HCkCharset cHandle, const char *inStr, HCkString outStr);
BOOL CkCharset_GetHtmlCharset(HCkCharset cHandle, HCkByteData htmlData, HCkString outCharset);
BOOL CkCharset_GetHtmlFileCharset(HCkCharset cHandle, const char *htmlPath, HCkString outCharset);
BOOL CkCharset_HtmlDecodeToStr(HCkCharset cHandle, const char *str, HCkString outStr);
BOOL CkCharset_HtmlEntityDecode(HCkCharset cHandle, HCkByteData inData, HCkByteData outData);
BOOL CkCharset_HtmlEntityDecodeFile(HCkCharset cHandle, const char *srcPath, const char *destPath);
BOOL CkCharset_IsUnlocked(HCkCharset cHandle);
BOOL CkCharset_LowerCase(HCkCharset cHandle, const char *inStr, HCkString outStr);
BOOL CkCharset_ReadFile(HCkCharset cHandle, const char *path, HCkByteData outData);
BOOL CkCharset_ReadFileToString(HCkCharset cHandle, const char *path, const char *srcCharset, HCkString outStr);
BOOL CkCharset_SaveLastError(HCkCharset cHandle, const char *path);
void CkCharset_SetErrorBytes(HCkCharset cHandle, const unsigned char *pByteData, unsigned long szByteData);
void CkCharset_SetErrorString(HCkCharset cHandle, const char *str, const char *charset);
BOOL CkCharset_UnlockComponent(HCkCharset cHandle, const char *unlockCode);
BOOL CkCharset_UpperCase(HCkCharset cHandle, const char *inStr, HCkString outStr);
BOOL CkCharset_UrlDecodeStr(HCkCharset cHandle, const char *inStr, HCkString outStr);
BOOL CkCharset_VerifyData(HCkCharset cHandle, const char *charset, HCkByteData charData);
BOOL CkCharset_VerifyFile(HCkCharset cHandle, const char *charset, const char *path);
BOOL CkCharset_WriteFile(HCkCharset cHandle, const char *path, HCkByteData dataBuf);
BOOL CkCharset_WriteStringToFile(HCkCharset cHandle, const char *str, const char *path, const char *charset);
const char *CkCharset_altToCharset(HCkCharset cHandle);
const char *CkCharset_codePageToCharset(HCkCharset cHandle, int codePage);
const char *CkCharset_debugLogFilePath(HCkCharset cHandle);
const char *CkCharset_entityEncodeDec(HCkCharset cHandle, const char *inStr);
const char *CkCharset_entityEncodeHex(HCkCharset cHandle, const char *inStr);
const char *CkCharset_fromCharset(HCkCharset cHandle);
const char *CkCharset_getHtmlCharset(HCkCharset cHandle, HCkByteData htmlData);
const char *CkCharset_getHtmlFileCharset(HCkCharset cHandle, const char *htmlPath);
const char *CkCharset_htmlCharset(HCkCharset cHandle, HCkByteData htmlData);
const char *CkCharset_htmlDecodeToStr(HCkCharset cHandle, const char *str);
const char *CkCharset_htmlFileCharset(HCkCharset cHandle, const char *htmlPath);
const char *CkCharset_lastErrorHtml(HCkCharset cHandle);
const char *CkCharset_lastErrorText(HCkCharset cHandle);
const char *CkCharset_lastErrorXml(HCkCharset cHandle);
const char *CkCharset_lastInputAsHex(HCkCharset cHandle);
const char *CkCharset_lastInputAsQP(HCkCharset cHandle);
const char *CkCharset_lastOutputAsHex(HCkCharset cHandle);
const char *CkCharset_lastOutputAsQP(HCkCharset cHandle);
const char *CkCharset_lowerCase(HCkCharset cHandle, const char *inStr);
const char *CkCharset_readFileToString(HCkCharset cHandle, const char *path, const char *srcCharset);
const char *CkCharset_toCharset(HCkCharset cHandle);
const char *CkCharset_upperCase(HCkCharset cHandle, const char *inStr);
const char *CkCharset_urlDecodeStr(HCkCharset cHandle, const char *inStr);
const char *CkCharset_version(HCkCharset cHandle);
#endif

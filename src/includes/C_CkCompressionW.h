// This is a generated source file for Chilkat version 9.4.1.34
#ifndef _C_CkCompression_W_H
#define _C_CkCompression_W_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkCompressionW CkCompressionW_Create(void);
HCkCompressionW CkCompressionW_Create2(BOOL bForDso);
void CkCompressionW_Dispose(HCkCompressionW handle);
void CkCompressionW_getAlgorithm(HCkCompressionW cHandle, HCkStringW retval);
void CkCompressionW_putAlgorithm(HCkCompressionW cHandle, const wchar_t *newVal);
void CkCompressionW_getCharset(HCkCompressionW cHandle, HCkStringW retval);
void CkCompressionW_putCharset(HCkCompressionW cHandle, const wchar_t *newVal);
void CkCompressionW_getDebugLogFilePath(HCkCompressionW cHandle, HCkStringW retval);
void CkCompressionW_putDebugLogFilePath(HCkCompressionW cHandle, const wchar_t *newVal);
void CkCompressionW_getEncodingMode(HCkCompressionW cHandle, HCkStringW retval);
void CkCompressionW_putEncodingMode(HCkCompressionW cHandle, const wchar_t *newVal);
int CkCompressionW_getHeartbeatMs(HCkCompressionW cHandle);
void CkCompressionW_putHeartbeatMs(HCkCompressionW cHandle, int newVal);
void CkCompressionW_getLastErrorHtml(HCkCompressionW cHandle, HCkStringW retval);
void CkCompressionW_getLastErrorText(HCkCompressionW cHandle, HCkStringW retval);
void CkCompressionW_getLastErrorXml(HCkCompressionW cHandle, HCkStringW retval);
BOOL CkCompressionW_getVerboseLogging(HCkCompressionW cHandle);
void CkCompressionW_putVerboseLogging(HCkCompressionW cHandle, BOOL newVal);
void CkCompressionW_getVersion(HCkCompressionW cHandle, HCkStringW retval);
BOOL CkCompressionW_BeginCompressBytes(HCkCompressionW cHandle, HCkByteDataW bData, HCkByteDataW outData);
BOOL CkCompressionW_BeginCompressBytesENC(HCkCompressionW cHandle, HCkByteDataW bData, HCkStringW outStr);
BOOL CkCompressionW_BeginCompressString(HCkCompressionW cHandle, const wchar_t *str, HCkByteDataW outData);
BOOL CkCompressionW_BeginCompressStringENC(HCkCompressionW cHandle, const wchar_t *str, HCkStringW outStr);
BOOL CkCompressionW_BeginDecompressBytes(HCkCompressionW cHandle, HCkByteDataW bData, HCkByteDataW outData);
BOOL CkCompressionW_BeginDecompressBytesENC(HCkCompressionW cHandle, const wchar_t *str, HCkByteDataW outData);
BOOL CkCompressionW_BeginDecompressString(HCkCompressionW cHandle, HCkByteDataW bData, HCkStringW outStr);
BOOL CkCompressionW_BeginDecompressStringENC(HCkCompressionW cHandle, const wchar_t *str, HCkStringW outStr);
BOOL CkCompressionW_CompressBytes(HCkCompressionW cHandle, HCkByteDataW bData, HCkByteDataW outData);
BOOL CkCompressionW_CompressBytesENC(HCkCompressionW cHandle, HCkByteDataW bData, HCkStringW outStr);
BOOL CkCompressionW_CompressFile(HCkCompressionW cHandle, const wchar_t *srcPath, const wchar_t *destPath);
BOOL CkCompressionW_CompressString(HCkCompressionW cHandle, const wchar_t *str, HCkByteDataW outData);
BOOL CkCompressionW_CompressStringENC(HCkCompressionW cHandle, const wchar_t *str, HCkStringW outStr);
BOOL CkCompressionW_DecompressBytes(HCkCompressionW cHandle, HCkByteDataW bData, HCkByteDataW outData);
BOOL CkCompressionW_DecompressBytesENC(HCkCompressionW cHandle, const wchar_t *str, HCkByteDataW outData);
BOOL CkCompressionW_DecompressFile(HCkCompressionW cHandle, const wchar_t *srcPath, const wchar_t *destPath);
BOOL CkCompressionW_DecompressString(HCkCompressionW cHandle, HCkByteDataW bData, HCkStringW outStr);
BOOL CkCompressionW_DecompressStringENC(HCkCompressionW cHandle, const wchar_t *str, HCkStringW outStr);
BOOL CkCompressionW_EndCompressBytes(HCkCompressionW cHandle, HCkByteDataW outData);
BOOL CkCompressionW_EndCompressBytesENC(HCkCompressionW cHandle, HCkStringW outStr);
BOOL CkCompressionW_EndCompressString(HCkCompressionW cHandle, HCkByteDataW outData);
BOOL CkCompressionW_EndCompressStringENC(HCkCompressionW cHandle, HCkStringW outStr);
BOOL CkCompressionW_EndDecompressBytes(HCkCompressionW cHandle, HCkByteDataW outData);
BOOL CkCompressionW_EndDecompressBytesENC(HCkCompressionW cHandle, HCkByteDataW outData);
BOOL CkCompressionW_EndDecompressString(HCkCompressionW cHandle, HCkStringW outStr);
BOOL CkCompressionW_EndDecompressStringENC(HCkCompressionW cHandle, HCkStringW outStr);
BOOL CkCompressionW_MoreCompressBytes(HCkCompressionW cHandle, HCkByteDataW bData, HCkByteDataW outData);
BOOL CkCompressionW_MoreCompressBytesENC(HCkCompressionW cHandle, HCkByteDataW bData, HCkStringW outStr);
BOOL CkCompressionW_MoreCompressString(HCkCompressionW cHandle, const wchar_t *str, HCkByteDataW outData);
BOOL CkCompressionW_MoreCompressStringENC(HCkCompressionW cHandle, const wchar_t *str, HCkStringW outStr);
BOOL CkCompressionW_MoreDecompressBytes(HCkCompressionW cHandle, HCkByteDataW bData, HCkByteDataW outData);
BOOL CkCompressionW_MoreDecompressBytesENC(HCkCompressionW cHandle, const wchar_t *str, HCkByteDataW outData);
BOOL CkCompressionW_MoreDecompressString(HCkCompressionW cHandle, HCkByteDataW bData, HCkStringW outStr);
BOOL CkCompressionW_MoreDecompressStringENC(HCkCompressionW cHandle, const wchar_t *str, HCkStringW outStr);
BOOL CkCompressionW_SaveLastError(HCkCompressionW cHandle, const wchar_t *path);
BOOL CkCompressionW_UnlockComponent(HCkCompressionW cHandle, const wchar_t *unlockCode);
const wchar_t *CkCompressionW__algorithm(HCkCompressionW cHandle);
const wchar_t *CkCompressionW__beginCompressBytesENC(HCkCompressionW cHandle, HCkByteDataW bData);
const wchar_t *CkCompressionW__beginCompressStringENC(HCkCompressionW cHandle, const wchar_t *str);
const wchar_t *CkCompressionW__beginDecompressString(HCkCompressionW cHandle, HCkByteDataW bData);
const wchar_t *CkCompressionW__beginDecompressStringENC(HCkCompressionW cHandle, const wchar_t *str);
const wchar_t *CkCompressionW__charset(HCkCompressionW cHandle);
const wchar_t *CkCompressionW__compressBytesENC(HCkCompressionW cHandle, HCkByteDataW bData);
const wchar_t *CkCompressionW__compressStringENC(HCkCompressionW cHandle, const wchar_t *str);
const wchar_t *CkCompressionW__debugLogFilePath(HCkCompressionW cHandle);
const wchar_t *CkCompressionW__decompressString(HCkCompressionW cHandle, HCkByteDataW bData);
const wchar_t *CkCompressionW__decompressStringENC(HCkCompressionW cHandle, const wchar_t *str);
const wchar_t *CkCompressionW__encodingMode(HCkCompressionW cHandle);
const wchar_t *CkCompressionW__endCompressBytesENC(HCkCompressionW cHandle);
const wchar_t *CkCompressionW__endCompressStringENC(HCkCompressionW cHandle);
const wchar_t *CkCompressionW__endDecompressString(HCkCompressionW cHandle);
const wchar_t *CkCompressionW__endDecompressStringENC(HCkCompressionW cHandle);
const wchar_t *CkCompressionW__lastErrorHtml(HCkCompressionW cHandle);
const wchar_t *CkCompressionW__lastErrorText(HCkCompressionW cHandle);
const wchar_t *CkCompressionW__lastErrorXml(HCkCompressionW cHandle);
const wchar_t *CkCompressionW__moreCompressBytesENC(HCkCompressionW cHandle, HCkByteDataW bData);
const wchar_t *CkCompressionW__moreCompressStringENC(HCkCompressionW cHandle, const wchar_t *str);
const wchar_t *CkCompressionW__moreDecompressString(HCkCompressionW cHandle, HCkByteDataW bData);
const wchar_t *CkCompressionW__moreDecompressStringENC(HCkCompressionW cHandle, const wchar_t *str);
const wchar_t *CkCompressionW__version(HCkCompressionW cHandle);
#endif

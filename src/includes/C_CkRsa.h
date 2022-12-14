// This is a generated source file for Chilkat version 9.4.1.34
#ifndef _C_CkRsa_H
#define _C_CkRsa_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkRsa CkRsa_Create(void);
void CkRsa_Dispose(HCkRsa handle);
void CkRsa_getCharset(HCkRsa cHandle, HCkString retval);
void CkRsa_putCharset(HCkRsa cHandle, const char *newVal);
void CkRsa_getDebugLogFilePath(HCkRsa cHandle, HCkString retval);
void CkRsa_putDebugLogFilePath(HCkRsa cHandle, const char *newVal);
void CkRsa_getEncodingMode(HCkRsa cHandle, HCkString retval);
void CkRsa_putEncodingMode(HCkRsa cHandle, const char *newVal);
void CkRsa_getLastErrorHtml(HCkRsa cHandle, HCkString retval);
void CkRsa_getLastErrorText(HCkRsa cHandle, HCkString retval);
void CkRsa_getLastErrorXml(HCkRsa cHandle, HCkString retval);
BOOL CkRsa_getLittleEndian(HCkRsa cHandle);
void CkRsa_putLittleEndian(HCkRsa cHandle, BOOL newVal);
BOOL CkRsa_getNoUnpad(HCkRsa cHandle);
void CkRsa_putNoUnpad(HCkRsa cHandle, BOOL newVal);
int CkRsa_getNumBits(HCkRsa cHandle);
BOOL CkRsa_getOaepPadding(HCkRsa cHandle);
void CkRsa_putOaepPadding(HCkRsa cHandle, BOOL newVal);
BOOL CkRsa_getUtf8(HCkRsa cHandle);
void CkRsa_putUtf8(HCkRsa cHandle, BOOL newVal);
BOOL CkRsa_getVerboseLogging(HCkRsa cHandle);
void CkRsa_putVerboseLogging(HCkRsa cHandle, BOOL newVal);
void CkRsa_getVersion(HCkRsa cHandle, HCkString retval);
BOOL CkRsa_DecryptBytes(HCkRsa cHandle, HCkByteData bData, BOOL bUsePrivateKey, HCkByteData outData);
BOOL CkRsa_DecryptBytesENC(HCkRsa cHandle, const char *str, BOOL bUsePrivateKey, HCkByteData outData);
BOOL CkRsa_DecryptString(HCkRsa cHandle, HCkByteData bData, BOOL bUsePrivateKey, HCkString outStr);
BOOL CkRsa_DecryptStringENC(HCkRsa cHandle, const char *str, BOOL bUsePrivateKey, HCkString outStr);
BOOL CkRsa_EncryptBytes(HCkRsa cHandle, HCkByteData bData, BOOL bUsePrivateKey, HCkByteData outData);
BOOL CkRsa_EncryptBytesENC(HCkRsa cHandle, HCkByteData bData, BOOL bUsePrivateKey, HCkString outStr);
BOOL CkRsa_EncryptString(HCkRsa cHandle, const char *str, BOOL bUsePrivateKey, HCkByteData outData);
BOOL CkRsa_EncryptStringENC(HCkRsa cHandle, const char *str, BOOL bUsePrivateKey, HCkString outStr);
BOOL CkRsa_ExportPrivateKey(HCkRsa cHandle, HCkString outStr);
BOOL CkRsa_ExportPublicKey(HCkRsa cHandle, HCkString outStr);
BOOL CkRsa_GenerateKey(HCkRsa cHandle, int numBits);
BOOL CkRsa_ImportPrivateKey(HCkRsa cHandle, const char *strXml);
BOOL CkRsa_ImportPublicKey(HCkRsa cHandle, const char *strXml);
BOOL CkRsa_OpenSslSignBytes(HCkRsa cHandle, HCkByteData data, HCkByteData outBytes);
BOOL CkRsa_OpenSslSignBytesENC(HCkRsa cHandle, HCkByteData data, HCkString outStr);
BOOL CkRsa_OpenSslSignString(HCkRsa cHandle, const char *str, HCkByteData outBytes);
BOOL CkRsa_OpenSslSignStringENC(HCkRsa cHandle, const char *str, HCkString outStr);
BOOL CkRsa_OpenSslVerifyBytes(HCkRsa cHandle, HCkByteData signature, HCkByteData outBytes);
BOOL CkRsa_OpenSslVerifyBytesENC(HCkRsa cHandle, const char *str, HCkByteData outBytes);
BOOL CkRsa_OpenSslVerifyString(HCkRsa cHandle, HCkByteData data, HCkString outStr);
BOOL CkRsa_OpenSslVerifyStringENC(HCkRsa cHandle, const char *str, HCkString outStr);
BOOL CkRsa_SaveLastError(HCkRsa cHandle, const char *path);
BOOL CkRsa_SignBytes(HCkRsa cHandle, HCkByteData bData, const char *hashAlg, HCkByteData outData);
BOOL CkRsa_SignBytesENC(HCkRsa cHandle, HCkByteData bData, const char *hashAlg, HCkString outStr);
BOOL CkRsa_SignHash(HCkRsa cHandle, HCkByteData hashBytes, const char *hashAlg, HCkByteData outBytes);
BOOL CkRsa_SignHashENC(HCkRsa cHandle, const char *encodedHash, const char *hashAlg, HCkString outStr);
BOOL CkRsa_SignString(HCkRsa cHandle, const char *str, const char *hashAlg, HCkByteData outData);
BOOL CkRsa_SignStringENC(HCkRsa cHandle, const char *str, const char *hashAlg, HCkString outStr);
BOOL CkRsa_SnkToXml(HCkRsa cHandle, const char *snkPath, HCkString outStr);
BOOL CkRsa_UnlockComponent(HCkRsa cHandle, const char *unlockCode);
BOOL CkRsa_VerifyBytes(HCkRsa cHandle, HCkByteData bData, const char *hashAlg, HCkByteData sigData);
BOOL CkRsa_VerifyBytesENC(HCkRsa cHandle, HCkByteData bData, const char *hashAlg, const char *encodedSig);
BOOL CkRsa_VerifyHash(HCkRsa cHandle, HCkByteData hashBytes, const char *hashAlg, HCkByteData sigBytes);
BOOL CkRsa_VerifyHashENC(HCkRsa cHandle, const char *encodedHash, const char *hashAlg, const char *encodedSig);
BOOL CkRsa_VerifyPrivateKey(HCkRsa cHandle, const char *xml);
BOOL CkRsa_VerifyString(HCkRsa cHandle, const char *str, const char *hashAlg, HCkByteData sigData);
BOOL CkRsa_VerifyStringENC(HCkRsa cHandle, const char *str, const char *hashAlg, const char *sig);
const char *CkRsa_charset(HCkRsa cHandle);
const char *CkRsa_debugLogFilePath(HCkRsa cHandle);
const char *CkRsa_decryptString(HCkRsa cHandle, HCkByteData bData, BOOL bUsePrivateKey);
const char *CkRsa_decryptStringENC(HCkRsa cHandle, const char *str, BOOL bUsePrivateKey);
const char *CkRsa_encodingMode(HCkRsa cHandle);
const char *CkRsa_encryptBytesENC(HCkRsa cHandle, HCkByteData bData, BOOL bUsePrivateKey);
const char *CkRsa_encryptStringENC(HCkRsa cHandle, const char *str, BOOL bUsePrivateKey);
const char *CkRsa_exportPrivateKey(HCkRsa cHandle);
const char *CkRsa_exportPublicKey(HCkRsa cHandle);
const char *CkRsa_lastErrorHtml(HCkRsa cHandle);
const char *CkRsa_lastErrorText(HCkRsa cHandle);
const char *CkRsa_lastErrorXml(HCkRsa cHandle);
const char *CkRsa_openSslSignBytesENC(HCkRsa cHandle, HCkByteData data);
const char *CkRsa_openSslSignStringENC(HCkRsa cHandle, const char *str);
const char *CkRsa_openSslVerifyString(HCkRsa cHandle, HCkByteData data);
const char *CkRsa_openSslVerifyStringENC(HCkRsa cHandle, const char *str);
const char *CkRsa_signBytesENC(HCkRsa cHandle, HCkByteData bData, const char *hashAlg);
const char *CkRsa_signHashENC(HCkRsa cHandle, const char *encodedHash, const char *hashAlg);
const char *CkRsa_signStringENC(HCkRsa cHandle, const char *str, const char *hashAlg);
const char *CkRsa_snkToXml(HCkRsa cHandle, const char *snkPath);
const char *CkRsa_version(HCkRsa cHandle);
#endif

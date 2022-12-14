// This header is NOT generated.
#ifndef _CkCreateCS_H
#define _CkCreateCS_H

#include "chilkatDefs.h"

#if defined(CK_WINCERTSTORE_INCLUDED)

#include "Chilkat_C.h"

HCkCreateCS CkCreateCS_Create(void);
void CkCreateCS_Dispose(HCkCreateCS handle);

void CkCreateCS_getLastErrorHtml(HCkCreateCS cHandle, HCkString retval);
void CkCreateCS_getLastErrorText(HCkCreateCS cHandle, HCkString retval);
void CkCreateCS_getLastErrorXml(HCkCreateCS cHandle, HCkString retval);

BOOL CkCreateCS_getReadOnly(HCkCreateCS cHandle);
void CkCreateCS_putReadOnly(HCkCreateCS cHandle, BOOL newVal);
BOOL CkCreateCS_getUtf8(HCkCreateCS cHandle);
void CkCreateCS_putUtf8(HCkCreateCS cHandle, BOOL newVal);
void CkCreateCS_getVersion(HCkCreateCS cHandle, HCkString retval);

HCkCertStore CkCreateCS_CreateFileStore(HCkCreateCS cHandle, const char *filename);
HCkCertStore CkCreateCS_CreateMemoryStore(HCkCreateCS cHandle);
HCkCertStore CkCreateCS_CreateRegistryStore(HCkCreateCS cHandle, const char *regRoot, const char *regPath);
HCkCertStore CkCreateCS_OpenChilkatStore(HCkCreateCS cHandle);
HCkCertStore CkCreateCS_OpenCurrentUserStore(HCkCreateCS cHandle);
HCkCertStore CkCreateCS_OpenFileStore(HCkCreateCS cHandle, const char *filename);
HCkCertStore CkCreateCS_OpenLocalSystemStore(HCkCreateCS cHandle);
HCkCertStore CkCreateCS_OpenOutlookStore(HCkCreateCS cHandle);
HCkCertStore CkCreateCS_OpenRegistryStore(HCkCreateCS cHandle, const char *regRoot, const char *regPath);

BOOL CkCreateCS_SaveLastError(HCkCreateCS cHandle, const char *filename);
const char *CkCreateCS_lastErrorHtml(HCkCreateCS cHandle);
const char *CkCreateCS_lastErrorText(HCkCreateCS cHandle);
const char *CkCreateCS_lastErrorXml(HCkCreateCS cHandle);

#endif // CK_WINCERTSTORE_INCLUDED

#endif // _CkCreateCS_H

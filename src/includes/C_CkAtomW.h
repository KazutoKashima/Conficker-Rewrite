// This is a generated source file for Chilkat version 9.4.1.34
#ifndef _C_CkAtom_W_H
#define _C_CkAtom_W_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkAtomW CkAtomW_Create(void);
HCkAtomW CkAtomW_Create2(BOOL bForDso);
void CkAtomW_Dispose(HCkAtomW handle);
void CkAtomW_getDebugLogFilePath(HCkAtomW cHandle, HCkStringW retval);
void CkAtomW_putDebugLogFilePath(HCkAtomW cHandle, const wchar_t *newVal);
void CkAtomW_getLastErrorHtml(HCkAtomW cHandle, HCkStringW retval);
void CkAtomW_getLastErrorText(HCkAtomW cHandle, HCkStringW retval);
void CkAtomW_getLastErrorXml(HCkAtomW cHandle, HCkStringW retval);
int CkAtomW_getNumEntries(HCkAtomW cHandle);
BOOL CkAtomW_getVerboseLogging(HCkAtomW cHandle);
void CkAtomW_putVerboseLogging(HCkAtomW cHandle, BOOL newVal);
void CkAtomW_getVersion(HCkAtomW cHandle, HCkStringW retval);
int CkAtomW_AddElement(HCkAtomW cHandle, const wchar_t *tag, const wchar_t *value);
int CkAtomW_AddElementDate(HCkAtomW cHandle, const wchar_t *tag, SYSTEMTIME *dateTime);
int CkAtomW_AddElementDateStr(HCkAtomW cHandle, const wchar_t *tag, const wchar_t *dateTimeStr);
int CkAtomW_AddElementDt(HCkAtomW cHandle, const wchar_t *tag, HCkDateTimeW dateTime);
int CkAtomW_AddElementHtml(HCkAtomW cHandle, const wchar_t *tag, const wchar_t *htmlStr);
int CkAtomW_AddElementXHtml(HCkAtomW cHandle, const wchar_t *tag, const wchar_t *xmlStr);
int CkAtomW_AddElementXml(HCkAtomW cHandle, const wchar_t *tag, const wchar_t *xmlStr);
void CkAtomW_AddEntry(HCkAtomW cHandle, const wchar_t *xmlStr);
void CkAtomW_AddLink(HCkAtomW cHandle, const wchar_t *rel, const wchar_t *href, const wchar_t *title, const wchar_t *typ);
void CkAtomW_AddPerson(HCkAtomW cHandle, const wchar_t *tag, const wchar_t *name, const wchar_t *uri, const wchar_t *email);
void CkAtomW_DeleteElement(HCkAtomW cHandle, const wchar_t *tag, int index);
void CkAtomW_DeleteElementAttr(HCkAtomW cHandle, const wchar_t *tag, int index, const wchar_t *attrName);
void CkAtomW_DeletePerson(HCkAtomW cHandle, const wchar_t *tag, int index);
BOOL CkAtomW_DownloadAtom(HCkAtomW cHandle, const wchar_t *url);
BOOL CkAtomW_GetElement(HCkAtomW cHandle, const wchar_t *tag, int index, HCkStringW outStr);
BOOL CkAtomW_GetElementAttr(HCkAtomW cHandle, const wchar_t *tag, int index, const wchar_t *attrName, HCkStringW outStr);
int CkAtomW_GetElementCount(HCkAtomW cHandle, const wchar_t *tag);
BOOL CkAtomW_GetElementDate(HCkAtomW cHandle, const wchar_t *tag, int index, SYSTEMTIME *outSysTime);
BOOL CkAtomW_GetElementDateStr(HCkAtomW cHandle, const wchar_t *tag, int index, HCkStringW outStr);
HCkDateTimeW CkAtomW_GetElementDt(HCkAtomW cHandle, const wchar_t *tag, int index);
HCkAtomW CkAtomW_GetEntry(HCkAtomW cHandle, int index);
BOOL CkAtomW_GetLinkHref(HCkAtomW cHandle, const wchar_t *relName, HCkStringW outStr);
BOOL CkAtomW_GetPersonInfo(HCkAtomW cHandle, const wchar_t *tag, int index, const wchar_t *tag2, HCkStringW outStr);
BOOL CkAtomW_GetTopAttr(HCkAtomW cHandle, const wchar_t *attrName, HCkStringW outStr);
BOOL CkAtomW_HasElement(HCkAtomW cHandle, const wchar_t *tag);
BOOL CkAtomW_LoadXml(HCkAtomW cHandle, const wchar_t *xmlStr);
void CkAtomW_NewEntry(HCkAtomW cHandle);
void CkAtomW_NewFeed(HCkAtomW cHandle);
BOOL CkAtomW_SaveLastError(HCkAtomW cHandle, const wchar_t *path);
void CkAtomW_SetElementAttr(HCkAtomW cHandle, const wchar_t *tag, int index, const wchar_t *attrName, const wchar_t *attrValue);
void CkAtomW_SetTopAttr(HCkAtomW cHandle, const wchar_t *attrName, const wchar_t *value);
BOOL CkAtomW_ToXmlString(HCkAtomW cHandle, HCkStringW outStr);
void CkAtomW_UpdateElement(HCkAtomW cHandle, const wchar_t *tag, int index, const wchar_t *value);
void CkAtomW_UpdateElementDate(HCkAtomW cHandle, const wchar_t *tag, int index, SYSTEMTIME *dateTime);
void CkAtomW_UpdateElementDateStr(HCkAtomW cHandle, const wchar_t *tag, int index, const wchar_t *dateTimeStr);
void CkAtomW_UpdateElementDt(HCkAtomW cHandle, const wchar_t *tag, int index, HCkDateTimeW dateTime);
void CkAtomW_UpdateElementHtml(HCkAtomW cHandle, const wchar_t *tag, int index, const wchar_t *htmlStr);
void CkAtomW_UpdateElementXHtml(HCkAtomW cHandle, const wchar_t *tag, int index, const wchar_t *xmlStr);
void CkAtomW_UpdateElementXml(HCkAtomW cHandle, const wchar_t *tag, int index, const wchar_t *xmlStr);
void CkAtomW_UpdatePerson(HCkAtomW cHandle, const wchar_t *tag, int index, const wchar_t *name, const wchar_t *uri, const wchar_t *email);
const wchar_t *CkAtomW__debugLogFilePath(HCkAtomW cHandle);
const wchar_t *CkAtomW__element(HCkAtomW cHandle, const wchar_t *tag, int index);
const wchar_t *CkAtomW__elementAttr(HCkAtomW cHandle, const wchar_t *tag, int index, const wchar_t *attrName);
const wchar_t *CkAtomW__elementDateStr(HCkAtomW cHandle, const wchar_t *tag, int index);
const wchar_t *CkAtomW__getElement(HCkAtomW cHandle, const wchar_t *tag, int index);
const wchar_t *CkAtomW__getElementAttr(HCkAtomW cHandle, const wchar_t *tag, int index, const wchar_t *attrName);
const wchar_t *CkAtomW__getElementDateStr(HCkAtomW cHandle, const wchar_t *tag, int index);
const wchar_t *CkAtomW__getLinkHref(HCkAtomW cHandle, const wchar_t *relName);
const wchar_t *CkAtomW__getPersonInfo(HCkAtomW cHandle, const wchar_t *tag, int index, const wchar_t *tag2);
const wchar_t *CkAtomW__getTopAttr(HCkAtomW cHandle, const wchar_t *attrName);
const wchar_t *CkAtomW__lastErrorHtml(HCkAtomW cHandle);
const wchar_t *CkAtomW__lastErrorText(HCkAtomW cHandle);
const wchar_t *CkAtomW__lastErrorXml(HCkAtomW cHandle);
const wchar_t *CkAtomW__linkHref(HCkAtomW cHandle, const wchar_t *relName);
const wchar_t *CkAtomW__personInfo(HCkAtomW cHandle, const wchar_t *tag, int index, const wchar_t *tag2);
const wchar_t *CkAtomW__toXmlString(HCkAtomW cHandle);
const wchar_t *CkAtomW__topAttr(HCkAtomW cHandle, const wchar_t *attrName);
const wchar_t *CkAtomW__version(HCkAtomW cHandle);
#endif

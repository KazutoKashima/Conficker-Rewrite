// This is a generated source file for Chilkat version 9.4.1.34
#ifndef _C_CkXml_W_H
#define _C_CkXml_W_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkXmlW CkXmlW_Create(void);
HCkXmlW CkXmlW_Create2(BOOL bForDso);
void CkXmlW_Dispose(HCkXmlW handle);
BOOL CkXmlW_getCdata(HCkXmlW cHandle);
void CkXmlW_putCdata(HCkXmlW cHandle, BOOL newVal);
void CkXmlW_getContent(HCkXmlW cHandle, HCkStringW retval);
void CkXmlW_putContent(HCkXmlW cHandle, const wchar_t *newVal);
int CkXmlW_getContentInt(HCkXmlW cHandle);
void CkXmlW_putContentInt(HCkXmlW cHandle, int newVal);
void CkXmlW_getDebugLogFilePath(HCkXmlW cHandle, HCkStringW retval);
void CkXmlW_putDebugLogFilePath(HCkXmlW cHandle, const wchar_t *newVal);
void CkXmlW_getDocType(HCkXmlW cHandle, HCkStringW retval);
void CkXmlW_putDocType(HCkXmlW cHandle, const wchar_t *newVal);
BOOL CkXmlW_getEmitXmlDecl(HCkXmlW cHandle);
void CkXmlW_putEmitXmlDecl(HCkXmlW cHandle, BOOL newVal);
void CkXmlW_getEncoding(HCkXmlW cHandle, HCkStringW retval);
void CkXmlW_putEncoding(HCkXmlW cHandle, const wchar_t *newVal);
void CkXmlW_getLastErrorHtml(HCkXmlW cHandle, HCkStringW retval);
void CkXmlW_getLastErrorText(HCkXmlW cHandle, HCkStringW retval);
void CkXmlW_getLastErrorXml(HCkXmlW cHandle, HCkStringW retval);
int CkXmlW_getNumAttributes(HCkXmlW cHandle);
int CkXmlW_getNumChildren(HCkXmlW cHandle);
BOOL CkXmlW_getSortCaseInsensitive(HCkXmlW cHandle);
void CkXmlW_putSortCaseInsensitive(HCkXmlW cHandle, BOOL newVal);
BOOL CkXmlW_getStandalone(HCkXmlW cHandle);
void CkXmlW_putStandalone(HCkXmlW cHandle, BOOL newVal);
void CkXmlW_getTag(HCkXmlW cHandle, HCkStringW retval);
void CkXmlW_putTag(HCkXmlW cHandle, const wchar_t *newVal);
int CkXmlW_getTreeId(HCkXmlW cHandle);
BOOL CkXmlW_getVerboseLogging(HCkXmlW cHandle);
void CkXmlW_putVerboseLogging(HCkXmlW cHandle, BOOL newVal);
void CkXmlW_getVersion(HCkXmlW cHandle, HCkStringW retval);
BOOL CkXmlW_AccumulateTagContent(HCkXmlW cHandle, const wchar_t *tag, const wchar_t *skipTags, HCkStringW outStr);
BOOL CkXmlW_AddAttribute(HCkXmlW cHandle, const wchar_t *name, const wchar_t *value);
BOOL CkXmlW_AddAttributeInt(HCkXmlW cHandle, const wchar_t *name, int value);
BOOL CkXmlW_AddChildTree(HCkXmlW cHandle, HCkXmlW tree);
void CkXmlW_AddOrUpdateAttribute(HCkXmlW cHandle, const wchar_t *name, const wchar_t *value);
void CkXmlW_AddOrUpdateAttributeI(HCkXmlW cHandle, const wchar_t *name, int value);
void CkXmlW_AddStyleSheet(HCkXmlW cHandle, const wchar_t *styleSheet);
void CkXmlW_AddToAttribute(HCkXmlW cHandle, const wchar_t *name, int amount);
void CkXmlW_AddToChildContent(HCkXmlW cHandle, const wchar_t *tag, int amount);
void CkXmlW_AddToContent(HCkXmlW cHandle, int amount);
BOOL CkXmlW_AppendToContent(HCkXmlW cHandle, const wchar_t *str);
BOOL CkXmlW_BEncodeContent(HCkXmlW cHandle, const wchar_t *charset, HCkByteDataW db);
BOOL CkXmlW_ChildContentMatches(HCkXmlW cHandle, const wchar_t *tag, const wchar_t *pattern, BOOL caseSensitive);
BOOL CkXmlW_ChilkatPath(HCkXmlW cHandle, const wchar_t *cmd, HCkStringW outStr);
BOOL CkXmlW_Clear(HCkXmlW cHandle);
BOOL CkXmlW_ContentMatches(HCkXmlW cHandle, const wchar_t *pattern, BOOL caseSensitive);
void CkXmlW_Copy(HCkXmlW cHandle, HCkXmlW node);
void CkXmlW_CopyRef(HCkXmlW cHandle, HCkXmlW node);
BOOL CkXmlW_DecodeContent(HCkXmlW cHandle, HCkByteDataW outData);
BOOL CkXmlW_DecodeEntities(HCkXmlW cHandle, const wchar_t *str, HCkStringW outStr);
BOOL CkXmlW_DecryptContent(HCkXmlW cHandle, const wchar_t *password);
BOOL CkXmlW_EncryptContent(HCkXmlW cHandle, const wchar_t *password);
HCkXmlW CkXmlW_ExtractChildByIndex(HCkXmlW cHandle, int index);
HCkXmlW CkXmlW_ExtractChildByName(HCkXmlW cHandle, const wchar_t *tag, const wchar_t *attrName, const wchar_t *attrValue);
HCkXmlW CkXmlW_FindChild(HCkXmlW cHandle, const wchar_t *tag);
BOOL CkXmlW_FindChild2(HCkXmlW cHandle, const wchar_t *tag);
HCkXmlW CkXmlW_FindNextRecord(HCkXmlW cHandle, const wchar_t *tag, const wchar_t *contentPattern);
HCkXmlW CkXmlW_FindOrAddNewChild(HCkXmlW cHandle, const wchar_t *tag);
HCkXmlW CkXmlW_FirstChild(HCkXmlW cHandle);
BOOL CkXmlW_FirstChild2(HCkXmlW cHandle);
BOOL CkXmlW_GetAttrValue(HCkXmlW cHandle, const wchar_t *name, HCkStringW outStr);
int CkXmlW_GetAttrValueInt(HCkXmlW cHandle, const wchar_t *name);
BOOL CkXmlW_GetAttributeName(HCkXmlW cHandle, int index, HCkStringW outStr);
BOOL CkXmlW_GetAttributeValue(HCkXmlW cHandle, int index, HCkStringW outStr);
int CkXmlW_GetAttributeValueInt(HCkXmlW cHandle, int index);
BOOL CkXmlW_GetBinaryContent(HCkXmlW cHandle, BOOL unzipFlag, BOOL decryptFlag, const wchar_t *password, HCkByteDataW outData);
HCkXmlW CkXmlW_GetChild(HCkXmlW cHandle, int index);
BOOL CkXmlW_GetChild2(HCkXmlW cHandle, int index);
BOOL CkXmlW_GetChildBoolValue(HCkXmlW cHandle, const wchar_t *tag);
BOOL CkXmlW_GetChildContent(HCkXmlW cHandle, const wchar_t *tag, HCkStringW outStr);
BOOL CkXmlW_GetChildContentByIndex(HCkXmlW cHandle, int index, HCkStringW outStr);
HCkXmlW CkXmlW_GetChildExact(HCkXmlW cHandle, const wchar_t *tag, const wchar_t *content);
int CkXmlW_GetChildIntValue(HCkXmlW cHandle, const wchar_t *tag);
BOOL CkXmlW_GetChildTag(HCkXmlW cHandle, int index, HCkStringW outStr);
BOOL CkXmlW_GetChildTagByIndex(HCkXmlW cHandle, int index, HCkStringW outStr);
HCkXmlW CkXmlW_GetChildWithAttr(HCkXmlW cHandle, const wchar_t *tag, const wchar_t *attrName, const wchar_t *attrValue);
HCkXmlW CkXmlW_GetChildWithContent(HCkXmlW cHandle, const wchar_t *content);
HCkXmlW CkXmlW_GetChildWithTag(HCkXmlW cHandle, const wchar_t *tag);
HCkXmlW CkXmlW_GetNthChildWithTag(HCkXmlW cHandle, const wchar_t *tag, int n);
BOOL CkXmlW_GetNthChildWithTag2(HCkXmlW cHandle, const wchar_t *tag, int n);
HCkXmlW CkXmlW_GetParent(HCkXmlW cHandle);
BOOL CkXmlW_GetParent2(HCkXmlW cHandle);
HCkXmlW CkXmlW_GetRoot(HCkXmlW cHandle);
void CkXmlW_GetRoot2(HCkXmlW cHandle);
HCkXmlW CkXmlW_GetSelf(HCkXmlW cHandle);
BOOL CkXmlW_GetXml(HCkXmlW cHandle, HCkStringW outStr);
BOOL CkXmlW_HasAttrWithValue(HCkXmlW cHandle, const wchar_t *name, const wchar_t *value);
BOOL CkXmlW_HasAttribute(HCkXmlW cHandle, const wchar_t *name);
BOOL CkXmlW_HasChildWithContent(HCkXmlW cHandle, const wchar_t *content);
BOOL CkXmlW_HasChildWithTag(HCkXmlW cHandle, const wchar_t *tag);
BOOL CkXmlW_HasChildWithTagAndContent(HCkXmlW cHandle, const wchar_t *tag, const wchar_t *content);
BOOL CkXmlW_InsertChildTreeAfter(HCkXmlW cHandle, int index, HCkXmlW tree);
BOOL CkXmlW_InsertChildTreeBefore(HCkXmlW cHandle, int index, HCkXmlW tree);
HCkXmlW CkXmlW_LastChild(HCkXmlW cHandle);
BOOL CkXmlW_LastChild2(HCkXmlW cHandle);
BOOL CkXmlW_LoadXml(HCkXmlW cHandle, const wchar_t *xmlData);
BOOL CkXmlW_LoadXml2(HCkXmlW cHandle, const wchar_t *xmlData, BOOL autoTrim);
BOOL CkXmlW_LoadXmlFile(HCkXmlW cHandle, const wchar_t *path);
BOOL CkXmlW_LoadXmlFile2(HCkXmlW cHandle, const wchar_t *path, BOOL autoTrim);
HCkXmlW CkXmlW_NewChild(HCkXmlW cHandle, const wchar_t *tag, const wchar_t *content);
void CkXmlW_NewChild2(HCkXmlW cHandle, const wchar_t *tag, const wchar_t *content);
HCkXmlW CkXmlW_NewChildAfter(HCkXmlW cHandle, int index, const wchar_t *tag, const wchar_t *content);
HCkXmlW CkXmlW_NewChildBefore(HCkXmlW cHandle, int index, const wchar_t *tag, const wchar_t *content);
void CkXmlW_NewChildInt2(HCkXmlW cHandle, const wchar_t *tag, int value);
HCkXmlW CkXmlW_NextSibling(HCkXmlW cHandle);
BOOL CkXmlW_NextSibling2(HCkXmlW cHandle);
int CkXmlW_NumChildrenHavingTag(HCkXmlW cHandle, const wchar_t *tag);
HCkXmlW CkXmlW_PreviousSibling(HCkXmlW cHandle);
BOOL CkXmlW_PreviousSibling2(HCkXmlW cHandle);
BOOL CkXmlW_QEncodeContent(HCkXmlW cHandle, const wchar_t *charset, HCkByteDataW db);
BOOL CkXmlW_RemoveAllAttributes(HCkXmlW cHandle);
void CkXmlW_RemoveAllChildren(HCkXmlW cHandle);
BOOL CkXmlW_RemoveAttribute(HCkXmlW cHandle, const wchar_t *name);
void CkXmlW_RemoveChild(HCkXmlW cHandle, const wchar_t *tag);
void CkXmlW_RemoveChildByIndex(HCkXmlW cHandle, int index);
void CkXmlW_RemoveChildWithContent(HCkXmlW cHandle, const wchar_t *content);
void CkXmlW_RemoveFromTree(HCkXmlW cHandle);
BOOL CkXmlW_SaveBinaryContent(HCkXmlW cHandle, const wchar_t *path, BOOL unzipFlag, BOOL decryptFlag, const wchar_t *password);
BOOL CkXmlW_SaveLastError(HCkXmlW cHandle, const wchar_t *path);
BOOL CkXmlW_SaveXml(HCkXmlW cHandle, const wchar_t *path);
HCkXmlW CkXmlW_SearchAllForContent(HCkXmlW cHandle, HCkXmlW after, const wchar_t *contentPattern);
BOOL CkXmlW_SearchAllForContent2(HCkXmlW cHandle, HCkXmlW after, const wchar_t *contentPattern);
HCkXmlW CkXmlW_SearchForAttribute(HCkXmlW cHandle, HCkXmlW after, const wchar_t *tag, const wchar_t *attr, const wchar_t *valuePattern);
BOOL CkXmlW_SearchForAttribute2(HCkXmlW cHandle, HCkXmlW after, const wchar_t *tag, const wchar_t *attr, const wchar_t *valuePattern);
HCkXmlW CkXmlW_SearchForContent(HCkXmlW cHandle, HCkXmlW after, const wchar_t *tag, const wchar_t *contentPattern);
BOOL CkXmlW_SearchForContent2(HCkXmlW cHandle, HCkXmlW after, const wchar_t *tag, const wchar_t *contentPattern);
HCkXmlW CkXmlW_SearchForTag(HCkXmlW cHandle, HCkXmlW after, const wchar_t *tag);
BOOL CkXmlW_SearchForTag2(HCkXmlW cHandle, HCkXmlW after, const wchar_t *tag);
BOOL CkXmlW_SetBinaryContent(HCkXmlW cHandle, HCkByteDataW data, BOOL zipFlag, BOOL encryptFlag, const wchar_t *password);
#if !defined(CHILKAT_MONO)
BOOL CkXmlW_SetBinaryContent2(HCkXmlW cHandle, const unsigned char *pByteData, unsigned long szByteData, BOOL zipFlag, BOOL encryptFlag, const wchar_t *password);
#endif
BOOL CkXmlW_SetBinaryContentFromFile(HCkXmlW cHandle, const wchar_t *path, BOOL zipFlag, BOOL encryptFlag, const wchar_t *password);
void CkXmlW_SortByAttribute(HCkXmlW cHandle, const wchar_t *attrName, BOOL ascending);
void CkXmlW_SortByAttributeInt(HCkXmlW cHandle, const wchar_t *attrName, BOOL ascending);
void CkXmlW_SortByContent(HCkXmlW cHandle, BOOL ascending);
void CkXmlW_SortByTag(HCkXmlW cHandle, BOOL ascending);
void CkXmlW_SortRecordsByAttribute(HCkXmlW cHandle, const wchar_t *sortTag, const wchar_t *attrName, BOOL ascending);
void CkXmlW_SortRecordsByContent(HCkXmlW cHandle, const wchar_t *sortTag, BOOL ascending);
void CkXmlW_SortRecordsByContentInt(HCkXmlW cHandle, const wchar_t *sortTag, BOOL ascending);
BOOL CkXmlW_SwapNode(HCkXmlW cHandle, HCkXmlW node);
BOOL CkXmlW_SwapTree(HCkXmlW cHandle, HCkXmlW tree);
BOOL CkXmlW_TagContent(HCkXmlW cHandle, const wchar_t *tag, HCkStringW outStr);
BOOL CkXmlW_TagEquals(HCkXmlW cHandle, const wchar_t *tag);
BOOL CkXmlW_UnzipContent(HCkXmlW cHandle);
BOOL CkXmlW_UnzipTree(HCkXmlW cHandle);
BOOL CkXmlW_UpdateAttribute(HCkXmlW cHandle, const wchar_t *attrName, const wchar_t *attrValue);
BOOL CkXmlW_UpdateAttributeInt(HCkXmlW cHandle, const wchar_t *attrName, int value);
void CkXmlW_UpdateChildContent(HCkXmlW cHandle, const wchar_t *tag, const wchar_t *value);
void CkXmlW_UpdateChildContentInt(HCkXmlW cHandle, const wchar_t *tag, int value);
BOOL CkXmlW_ZipContent(HCkXmlW cHandle);
BOOL CkXmlW_ZipTree(HCkXmlW cHandle);
const wchar_t *CkXmlW__accumulateTagContent(HCkXmlW cHandle, const wchar_t *tag, const wchar_t *skipTags);
const wchar_t *CkXmlW__attrValue(HCkXmlW cHandle, const wchar_t *name);
const wchar_t *CkXmlW__attributeName(HCkXmlW cHandle, int index);
const wchar_t *CkXmlW__attributeValue(HCkXmlW cHandle, int index);
const wchar_t *CkXmlW__childContent(HCkXmlW cHandle, const wchar_t *tag);
const wchar_t *CkXmlW__childContentByIndex(HCkXmlW cHandle, int index);
const wchar_t *CkXmlW__childTag(HCkXmlW cHandle, int index);
const wchar_t *CkXmlW__childTagByIndex(HCkXmlW cHandle, int index);
const wchar_t *CkXmlW__chilkatPath(HCkXmlW cHandle, const wchar_t *cmd);
const wchar_t *CkXmlW__content(HCkXmlW cHandle);
const wchar_t *CkXmlW__debugLogFilePath(HCkXmlW cHandle);
const wchar_t *CkXmlW__decodeEntities(HCkXmlW cHandle, const wchar_t *str);
const wchar_t *CkXmlW__docType(HCkXmlW cHandle);
const wchar_t *CkXmlW__encoding(HCkXmlW cHandle);
const wchar_t *CkXmlW__getAttrValue(HCkXmlW cHandle, const wchar_t *name);
const wchar_t *CkXmlW__getAttributeName(HCkXmlW cHandle, int index);
const wchar_t *CkXmlW__getAttributeValue(HCkXmlW cHandle, int index);
const wchar_t *CkXmlW__getChildContent(HCkXmlW cHandle, const wchar_t *tag);
const wchar_t *CkXmlW__getChildContentByIndex(HCkXmlW cHandle, int index);
const wchar_t *CkXmlW__getChildTag(HCkXmlW cHandle, int index);
const wchar_t *CkXmlW__getChildTagByIndex(HCkXmlW cHandle, int index);
const wchar_t *CkXmlW__getXml(HCkXmlW cHandle);
const wchar_t *CkXmlW__lastErrorHtml(HCkXmlW cHandle);
const wchar_t *CkXmlW__lastErrorText(HCkXmlW cHandle);
const wchar_t *CkXmlW__lastErrorXml(HCkXmlW cHandle);
const wchar_t *CkXmlW__tag(HCkXmlW cHandle);
const wchar_t *CkXmlW__tagContent(HCkXmlW cHandle, const wchar_t *tag);
const wchar_t *CkXmlW__version(HCkXmlW cHandle);
const wchar_t *CkXmlW__xml(HCkXmlW cHandle);
#endif

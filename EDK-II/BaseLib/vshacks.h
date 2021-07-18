#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>

extern UINT32 _PCD_GET_MODE_32_PcdMaximumLinkedListLength;
extern UINT32 _PCD_GET_MODE_32_PcdMaximumAsciiStringLength;
extern UINT32 _PCD_GET_MODE_32_PcdMaximumUnicodeStringLength;
extern UINT32 _PCD_GET_MODE_32_PcdUefiLibMaxPrintBufferSize;
extern UINT32 _PCD_GET_MODE_32_PcdFixedDebugPrintErrorLevel;
extern UINT32 _PCD_GET_MODE_32_PcdDebugPrintErrorLevel;
extern UINT32 _PCD_GET_MODE_32_PcdMaximumDevicePathNodeCount;
extern UINT32 _PCD_GET_MODE_32_PcdSpinLockTimeout;

extern UINT16 _PCD_GET_MODE_16_PcdUefiFileHandleLibPrintBufferSize;

extern BOOLEAN _PCD_GET_MODE_BOOL_PcdVerifyNodeInList;
extern BOOLEAN _PCD_GET_MODE_BOOL_PcdDriverDiagnosticsDisable;
extern BOOLEAN _PCD_GET_MODE_BOOL_PcdComponentNameDisable;
extern BOOLEAN _PCD_GET_MODE_BOOL_PcdComponentName2Disable;
extern BOOLEAN _PCD_GET_MODE_BOOL_PcdUgaConsumeSupport;
extern BOOLEAN _PCD_GET_MODE_BOOL_PcdDriverDiagnostics2Disable;

extern UINT8 _PCD_GET_MODE_8_PcdDebugPropertyMask;
extern UINT8 _PCD_GET_MODE_8_PcdDebugClearMemoryValue;

extern BOOLEAN _PCD_GET_MODE_BOOL_PcdShellLibAutoInitialize;
extern UINT16 _PCD_GET_MODE_16_PcdShellPrintBufferSize;

extern CHAR8 *gEfiCallerBaseName;

#ifdef __cplusplus
}
#endif
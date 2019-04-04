# WARNING: Please don't edit this file. It was generated by Python/WinRT

import typing, winrt
import enum

_ns_module = winrt._import_ns_module("Windows.Foundation")

try:
    import winrt.windows.foundation.collections
except:
    pass

class AsyncStatus(enum.IntEnum):
    CANCELED = 2
    COMPLETED = 1
    ERROR = 3
    STARTED = 0

class PropertyType(enum.IntEnum):
    EMPTY = 0
    UINT8 = 1
    INT16 = 2
    UINT16 = 3
    INT32 = 4
    UINT32 = 5
    INT64 = 6
    UINT64 = 7
    SINGLE = 8
    DOUBLE = 9
    CHAR16 = 10
    BOOLEAN = 11
    STRING = 12
    INSPECTABLE = 13
    DATE_TIME = 14
    TIME_SPAN = 15
    GUID = 16
    POINT = 17
    SIZE = 18
    RECT = 19
    OTHER_TYPE = 20
    UINT8_ARRAY = 1025
    INT16_ARRAY = 1026
    UINT16_ARRAY = 1027
    INT32_ARRAY = 1028
    UINT32_ARRAY = 1029
    INT64_ARRAY = 1030
    UINT64_ARRAY = 1031
    SINGLE_ARRAY = 1032
    DOUBLE_ARRAY = 1033
    CHAR16_ARRAY = 1034
    BOOLEAN_ARRAY = 1035
    STRING_ARRAY = 1036
    INSPECTABLE_ARRAY = 1037
    DATE_TIME_ARRAY = 1038
    TIME_SPAN_ARRAY = 1039
    GUID_ARRAY = 1040
    POINT_ARRAY = 1041
    SIZE_ARRAY = 1042
    RECT_ARRAY = 1043
    OTHER_TYPE_ARRAY = 1044

DateTime = _ns_module.DateTime
EventRegistrationToken = _ns_module.EventRegistrationToken
HResult = _ns_module.HResult
Point = _ns_module.Point
Rect = _ns_module.Rect
Size = _ns_module.Size
TimeSpan = _ns_module.TimeSpan
Deferral = _ns_module.Deferral
GuidHelper = _ns_module.GuidHelper
MemoryBuffer = _ns_module.MemoryBuffer
PropertyValue = _ns_module.PropertyValue
Uri = _ns_module.Uri
WwwFormUrlDecoder = _ns_module.WwwFormUrlDecoder
WwwFormUrlDecoderEntry = _ns_module.WwwFormUrlDecoderEntry
IAsyncAction = _ns_module.IAsyncAction
IAsyncActionWithProgress = _ns_module.IAsyncActionWithProgress
IAsyncInfo = _ns_module.IAsyncInfo
IAsyncOperationWithProgress = _ns_module.IAsyncOperationWithProgress
IAsyncOperation = _ns_module.IAsyncOperation
IClosable = _ns_module.IClosable
IGetActivationFactory = _ns_module.IGetActivationFactory
IMemoryBuffer = _ns_module.IMemoryBuffer
IMemoryBufferReference = _ns_module.IMemoryBufferReference
IPropertyValue = _ns_module.IPropertyValue
IReferenceArray = _ns_module.IReferenceArray
IReference = _ns_module.IReference
IStringable = _ns_module.IStringable
IWwwFormUrlDecoderEntry = _ns_module.IWwwFormUrlDecoderEntry

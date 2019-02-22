﻿# WARNING: Please don't edit this file. It was generated by Python/WinRT

from pyrt import _import_ns
import typing
import enum

__ns__ = _import_ns("Windows.Foundation")

try:
    import pyrt.windows.foundation.collections
except:
    pass

class AsyncStatus(enum.IntEnum):
    Canceled = 2
    Completed = 1
    Error = 3
    Started = 0

class PropertyType(enum.IntEnum):
    Empty = 0
    UInt8 = 1
    Int16 = 2
    UInt16 = 3
    Int32 = 4
    UInt32 = 5
    Int64 = 6
    UInt64 = 7
    Single = 8
    Double = 9
    Char16 = 10
    Boolean = 11
    String = 12
    Inspectable = 13
    DateTime = 14
    TimeSpan = 15
    Guid = 16
    Point = 17
    Size = 18
    Rect = 19
    OtherType = 20
    UInt8Array = 1025
    Int16Array = 1026
    UInt16Array = 1027
    Int32Array = 1028
    UInt32Array = 1029
    Int64Array = 1030
    UInt64Array = 1031
    SingleArray = 1032
    DoubleArray = 1033
    Char16Array = 1034
    BooleanArray = 1035
    StringArray = 1036
    InspectableArray = 1037
    DateTimeArray = 1038
    TimeSpanArray = 1039
    GuidArray = 1040
    PointArray = 1041
    SizeArray = 1042
    RectArray = 1043
    OtherTypeArray = 1044

Deferral = __ns__.Deferral
GuidHelper = __ns__.GuidHelper
MemoryBuffer = __ns__.MemoryBuffer
PropertyValue = __ns__.PropertyValue
Uri = __ns__.Uri
WwwFormUrlDecoder = __ns__.WwwFormUrlDecoder
WwwFormUrlDecoderEntry = __ns__.WwwFormUrlDecoderEntry
IAsyncAction = __ns__.IAsyncAction
IAsyncActionWithProgress = __ns__.IAsyncActionWithProgress
IAsyncInfo = __ns__.IAsyncInfo
IAsyncOperationWithProgress = __ns__.IAsyncOperationWithProgress
IAsyncOperation = __ns__.IAsyncOperation
IClosable = __ns__.IClosable
IGetActivationFactory = __ns__.IGetActivationFactory
IMemoryBuffer = __ns__.IMemoryBuffer
IMemoryBufferReference = __ns__.IMemoryBufferReference
IPropertyValue = __ns__.IPropertyValue
IReferenceArray = __ns__.IReferenceArray
IReference = __ns__.IReference
IStringable = __ns__.IStringable
IWwwFormUrlDecoderEntry = __ns__.IWwwFormUrlDecoderEntry
DateTime = __ns__.DateTime
EventRegistrationToken = __ns__.EventRegistrationToken
HResult = __ns__.HResult
Point = __ns__.Point
Rect = __ns__.Rect
Size = __ns__.Size
TimeSpan = __ns__.TimeSpan

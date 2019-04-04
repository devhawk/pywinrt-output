# WARNING: Please don't edit this file. It was generated by Python/WinRT

import typing, winrt
import enum

_ns_module = winrt._import_ns_module("Windows.Devices.Geolocation.Geofencing")

try:
    import winrt.windows.devices.geolocation
except:
    pass

try:
    import winrt.windows.foundation
except:
    pass

try:
    import winrt.windows.foundation.collections
except:
    pass

class GeofenceMonitorStatus(enum.IntEnum):
    READY = 0
    INITIALIZING = 1
    NO_DATA = 2
    DISABLED = 3
    NOT_INITIALIZED = 4
    NOT_AVAILABLE = 5

class GeofenceRemovalReason(enum.IntEnum):
    USED = 0
    EXPIRED = 1

class GeofenceState(enum.IntFlag):
    NONE = 0
    ENTERED = 0x1
    EXITED = 0x2
    REMOVED = 0x4

class MonitoredGeofenceStates(enum.IntFlag):
    NONE = 0
    ENTERED = 0x1
    EXITED = 0x2
    REMOVED = 0x4

Geofence = _ns_module.Geofence
GeofenceMonitor = _ns_module.GeofenceMonitor
GeofenceStateChangeReport = _ns_module.GeofenceStateChangeReport

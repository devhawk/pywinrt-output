﻿// WARNING: Please don't edit this file. It was generated by Python/WinRT

#include "py.Windows.Devices.Geolocation.Geofencing.h"

// ----- Geofence class --------------------
PyTypeObject* py::winrt_type<winrt::Windows::Devices::Geolocation::Geofencing::Geofence>::python_type;


PyObject* Geofence_new(PyTypeObject* type, PyObject* args, PyObject* kwds)
{
    if (kwds != nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "keyword arguments not supported");
        return nullptr;
    }

    Py_ssize_t arg_count = PyTuple_Size(args);

    if (arg_count == 2)
    {
        try
        {
            auto param0 = py::convert_to<winrt::hstring>(args, 0);
            auto param1 = py::convert_to<winrt::Windows::Devices::Geolocation::IGeoshape>(args, 1);
            winrt::Windows::Devices::Geolocation::Geofencing::Geofence instance{ param0, param1 };
            return py::wrap(instance, type);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
    }
    else if (arg_count == 4)
    {
        try
        {
            auto param0 = py::convert_to<winrt::hstring>(args, 0);
            auto param1 = py::convert_to<winrt::Windows::Devices::Geolocation::IGeoshape>(args, 1);
            auto param2 = py::convert_to<winrt::Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates>(args, 2);
            auto param3 = py::convert_to<bool>(args, 3);
            winrt::Windows::Devices::Geolocation::Geofencing::Geofence instance{ param0, param1, param2, param3 };
            return py::wrap(instance, type);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
    }
    else if (arg_count == 5)
    {
        try
        {
            auto param0 = py::convert_to<winrt::hstring>(args, 0);
            auto param1 = py::convert_to<winrt::Windows::Devices::Geolocation::IGeoshape>(args, 1);
            auto param2 = py::convert_to<winrt::Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates>(args, 2);
            auto param3 = py::convert_to<bool>(args, 3);
            auto param4 = py::convert_to<winrt::Windows::Foundation::TimeSpan>(args, 4);
            winrt::Windows::Devices::Geolocation::Geofencing::Geofence instance{ param0, param1, param2, param3, param4 };
            return py::wrap(instance, type);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
    }
    else if (arg_count == 7)
    {
        try
        {
            auto param0 = py::convert_to<winrt::hstring>(args, 0);
            auto param1 = py::convert_to<winrt::Windows::Devices::Geolocation::IGeoshape>(args, 1);
            auto param2 = py::convert_to<winrt::Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates>(args, 2);
            auto param3 = py::convert_to<bool>(args, 3);
            auto param4 = py::convert_to<winrt::Windows::Foundation::TimeSpan>(args, 4);
            auto param5 = py::convert_to<winrt::Windows::Foundation::DateTime>(args, 5);
            auto param6 = py::convert_to<winrt::Windows::Foundation::TimeSpan>(args, 6);
            winrt::Windows::Devices::Geolocation::Geofencing::Geofence instance{ param0, param1, param2, param3, param4, param5, param6 };
            return py::wrap(instance, type);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
    }
    else if (arg_count == -1)
    {
        return nullptr; 
    }

    PyErr_SetString(PyExc_TypeError, "Invalid parameter count");
    return nullptr;
}

static void Geofence_dealloc(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::Geofence>* self)
{
    auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
    py::wrapped_instance(hash_value, nullptr);
    self->obj = nullptr;
}

static PyObject* Geofence__from(PyObject* /*unused*/, PyObject* arg)
{
    try
    {
        auto instance = py::converter<winrt::Windows::Foundation::IInspectable>::convert_to(arg);
        return py::converter<winrt::Windows::Devices::Geolocation::Geofencing::Geofence>::convert(instance.as<winrt::Windows::Devices::Geolocation::Geofencing::Geofence>());
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyObject* Geofence_get_Duration(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::Geofence>* self, PyObject* args)
{ 
    if (args != nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "arguments not supported for get methods");
        return nullptr;
    }
        try
        {
            winrt::Windows::Foundation::TimeSpan return_value = self->obj.Duration();

            return py::converter<decltype(return_value)>::convert(return_value);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
}

static PyObject* Geofence_get_DwellTime(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::Geofence>* self, PyObject* args)
{ 
    if (args != nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "arguments not supported for get methods");
        return nullptr;
    }
        try
        {
            winrt::Windows::Foundation::TimeSpan return_value = self->obj.DwellTime();

            return py::converter<decltype(return_value)>::convert(return_value);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
}

static PyObject* Geofence_get_Geoshape(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::Geofence>* self, PyObject* args)
{ 
    if (args != nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "arguments not supported for get methods");
        return nullptr;
    }
        try
        {
            winrt::Windows::Devices::Geolocation::IGeoshape return_value = self->obj.Geoshape();

            return py::converter<decltype(return_value)>::convert(return_value);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
}

static PyObject* Geofence_get_Id(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::Geofence>* self, PyObject* args)
{ 
    if (args != nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "arguments not supported for get methods");
        return nullptr;
    }
        try
        {
            winrt::hstring return_value = self->obj.Id();

            return py::converter<decltype(return_value)>::convert(return_value);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
}

static PyObject* Geofence_get_MonitoredStates(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::Geofence>* self, PyObject* args)
{ 
    if (args != nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "arguments not supported for get methods");
        return nullptr;
    }
        try
        {
            winrt::Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates return_value = self->obj.MonitoredStates();

            return py::converter<decltype(return_value)>::convert(return_value);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
}

static PyObject* Geofence_get_SingleUse(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::Geofence>* self, PyObject* args)
{ 
    if (args != nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "arguments not supported for get methods");
        return nullptr;
    }
        try
        {
            bool return_value = self->obj.SingleUse();

            return py::converter<decltype(return_value)>::convert(return_value);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
}

static PyObject* Geofence_get_StartTime(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::Geofence>* self, PyObject* args)
{ 
    if (args != nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "arguments not supported for get methods");
        return nullptr;
    }
        try
        {
            winrt::Windows::Foundation::DateTime return_value = self->obj.StartTime();

            return py::converter<decltype(return_value)>::convert(return_value);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
}

static PyMethodDef Geofence_methods[] = {
    { "get_Duration", (PyCFunction)Geofence_get_Duration, METH_NOARGS, nullptr },
    { "get_DwellTime", (PyCFunction)Geofence_get_DwellTime, METH_NOARGS, nullptr },
    { "get_Geoshape", (PyCFunction)Geofence_get_Geoshape, METH_NOARGS, nullptr },
    { "get_Id", (PyCFunction)Geofence_get_Id, METH_NOARGS, nullptr },
    { "get_MonitoredStates", (PyCFunction)Geofence_get_MonitoredStates, METH_NOARGS, nullptr },
    { "get_SingleUse", (PyCFunction)Geofence_get_SingleUse, METH_NOARGS, nullptr },
    { "get_StartTime", (PyCFunction)Geofence_get_StartTime, METH_NOARGS, nullptr },
    { "_from", (PyCFunction)Geofence__from, METH_O | METH_STATIC, nullptr },
    { nullptr }
};

static PyType_Slot Geofence_Type_slots[] = 
{
    { Py_tp_base, nullptr }, // filled out in module init
    { Py_tp_dealloc, Geofence_dealloc },
    { Py_tp_new, Geofence_new },
    { Py_tp_methods, Geofence_methods },
    { 0, nullptr },
};

static PyType_Spec Geofence_Type_spec =
{
    "Geofence",
    sizeof(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::Geofence>),
    0,
    Py_TPFLAGS_DEFAULT,
    Geofence_Type_slots
};

// ----- GeofenceMonitor class --------------------
PyTypeObject* py::winrt_type<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>::python_type;


PyObject* GeofenceMonitor_new(PyTypeObject* type, PyObject* args, PyObject* kwds)
{
    PyErr_SetString(PyExc_TypeError, "GeofenceMonitor is not activatable");
    return nullptr;
}

static void GeofenceMonitor_dealloc(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>* self)
{
    auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
    py::wrapped_instance(hash_value, nullptr);
    self->obj = nullptr;
}

static PyObject* GeofenceMonitor__from(PyObject* /*unused*/, PyObject* arg)
{
    try
    {
        auto instance = py::converter<winrt::Windows::Foundation::IInspectable>::convert_to(arg);
        return py::converter<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>::convert(instance.as<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>());
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyObject* GeofenceMonitor_ReadReports(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>* self, PyObject* args)
{ 
    Py_ssize_t arg_count = PyTuple_Size(args);

    if (arg_count == 0)
    {
        try
        {
            winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport> return_value = self->obj.ReadReports();

            return py::converter<decltype(return_value)>::convert(return_value);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
    }
    else if (arg_count == -1)
    {
        return nullptr; 
    }

    PyErr_SetString(PyExc_TypeError, "Invalid parameter count");
    return nullptr;
}

static PyObject* GeofenceMonitor_add_GeofenceStateChanged(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>* self, PyObject* args)
{ 
        try
        {
            auto param0 = py::converter<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, winrt::Windows::Foundation::IInspectable>>::convert_to(args);

            winrt::event_token return_value = self->obj.GeofenceStateChanged(param0);

            return py::converter<decltype(return_value)>::convert(return_value);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
}

static PyObject* GeofenceMonitor_add_StatusChanged(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>* self, PyObject* args)
{ 
        try
        {
            auto param0 = py::converter<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, winrt::Windows::Foundation::IInspectable>>::convert_to(args);

            winrt::event_token return_value = self->obj.StatusChanged(param0);

            return py::converter<decltype(return_value)>::convert(return_value);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
}

static PyObject* GeofenceMonitor_get_Current(PyObject* /*unused*/, PyObject* args)
{ 
    if (args != nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "arguments not supported for get methods");
        return nullptr;
    }
        try
        {
            winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor return_value = winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor::Current();

            return py::converter<decltype(return_value)>::convert(return_value);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
}

static PyObject* GeofenceMonitor_get_Geofences(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>* self, PyObject* args)
{ 
    if (args != nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "arguments not supported for get methods");
        return nullptr;
    }
        try
        {
            winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Devices::Geolocation::Geofencing::Geofence> return_value = self->obj.Geofences();

            return py::converter<decltype(return_value)>::convert(return_value);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
}

static PyObject* GeofenceMonitor_get_LastKnownGeoposition(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>* self, PyObject* args)
{ 
    if (args != nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "arguments not supported for get methods");
        return nullptr;
    }
        try
        {
            winrt::Windows::Devices::Geolocation::Geoposition return_value = self->obj.LastKnownGeoposition();

            return py::converter<decltype(return_value)>::convert(return_value);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
}

static PyObject* GeofenceMonitor_get_Status(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>* self, PyObject* args)
{ 
    if (args != nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "arguments not supported for get methods");
        return nullptr;
    }
        try
        {
            winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitorStatus return_value = self->obj.Status();

            return py::converter<decltype(return_value)>::convert(return_value);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
}

static PyObject* GeofenceMonitor_remove_GeofenceStateChanged(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>* self, PyObject* args)
{ 
        try
        {
            auto param0 = py::converter<winrt::event_token>::convert_to(args);

            self->obj.GeofenceStateChanged(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            return py::to_PyErr();
        }
}

static PyObject* GeofenceMonitor_remove_StatusChanged(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>* self, PyObject* args)
{ 
        try
        {
            auto param0 = py::converter<winrt::event_token>::convert_to(args);

            self->obj.StatusChanged(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            return py::to_PyErr();
        }
}

static PyMethodDef GeofenceMonitor_methods[] = {
    { "ReadReports", (PyCFunction)GeofenceMonitor_ReadReports, METH_VARARGS, nullptr },
    { "add_GeofenceStateChanged", (PyCFunction)GeofenceMonitor_add_GeofenceStateChanged, METH_O, nullptr },
    { "add_StatusChanged", (PyCFunction)GeofenceMonitor_add_StatusChanged, METH_O, nullptr },
    { "get_Current", (PyCFunction)GeofenceMonitor_get_Current, METH_NOARGS | METH_STATIC, nullptr },
    { "get_Geofences", (PyCFunction)GeofenceMonitor_get_Geofences, METH_NOARGS, nullptr },
    { "get_LastKnownGeoposition", (PyCFunction)GeofenceMonitor_get_LastKnownGeoposition, METH_NOARGS, nullptr },
    { "get_Status", (PyCFunction)GeofenceMonitor_get_Status, METH_NOARGS, nullptr },
    { "remove_GeofenceStateChanged", (PyCFunction)GeofenceMonitor_remove_GeofenceStateChanged, METH_O, nullptr },
    { "remove_StatusChanged", (PyCFunction)GeofenceMonitor_remove_StatusChanged, METH_O, nullptr },
    { "_from", (PyCFunction)GeofenceMonitor__from, METH_O | METH_STATIC, nullptr },
    { nullptr }
};

static PyType_Slot GeofenceMonitor_Type_slots[] = 
{
    { Py_tp_base, nullptr }, // filled out in module init
    { Py_tp_dealloc, GeofenceMonitor_dealloc },
    { Py_tp_new, GeofenceMonitor_new },
    { Py_tp_methods, GeofenceMonitor_methods },
    { 0, nullptr },
};

static PyType_Spec GeofenceMonitor_Type_spec =
{
    "GeofenceMonitor",
    sizeof(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>),
    0,
    Py_TPFLAGS_DEFAULT,
    GeofenceMonitor_Type_slots
};

// ----- GeofenceStateChangeReport class --------------------
PyTypeObject* py::winrt_type<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>::python_type;


PyObject* GeofenceStateChangeReport_new(PyTypeObject* type, PyObject* args, PyObject* kwds)
{
    PyErr_SetString(PyExc_TypeError, "GeofenceStateChangeReport is not activatable");
    return nullptr;
}

static void GeofenceStateChangeReport_dealloc(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>* self)
{
    auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
    py::wrapped_instance(hash_value, nullptr);
    self->obj = nullptr;
}

static PyObject* GeofenceStateChangeReport__from(PyObject* /*unused*/, PyObject* arg)
{
    try
    {
        auto instance = py::converter<winrt::Windows::Foundation::IInspectable>::convert_to(arg);
        return py::converter<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>::convert(instance.as<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>());
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyObject* GeofenceStateChangeReport_get_Geofence(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>* self, PyObject* args)
{ 
    if (args != nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "arguments not supported for get methods");
        return nullptr;
    }
        try
        {
            winrt::Windows::Devices::Geolocation::Geofencing::Geofence return_value = self->obj.Geofence();

            return py::converter<decltype(return_value)>::convert(return_value);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
}

static PyObject* GeofenceStateChangeReport_get_Geoposition(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>* self, PyObject* args)
{ 
    if (args != nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "arguments not supported for get methods");
        return nullptr;
    }
        try
        {
            winrt::Windows::Devices::Geolocation::Geoposition return_value = self->obj.Geoposition();

            return py::converter<decltype(return_value)>::convert(return_value);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
}

static PyObject* GeofenceStateChangeReport_get_NewState(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>* self, PyObject* args)
{ 
    if (args != nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "arguments not supported for get methods");
        return nullptr;
    }
        try
        {
            winrt::Windows::Devices::Geolocation::Geofencing::GeofenceState return_value = self->obj.NewState();

            return py::converter<decltype(return_value)>::convert(return_value);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
}

static PyObject* GeofenceStateChangeReport_get_RemovalReason(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>* self, PyObject* args)
{ 
    if (args != nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "arguments not supported for get methods");
        return nullptr;
    }
        try
        {
            winrt::Windows::Devices::Geolocation::Geofencing::GeofenceRemovalReason return_value = self->obj.RemovalReason();

            return py::converter<decltype(return_value)>::convert(return_value);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
}

static PyMethodDef GeofenceStateChangeReport_methods[] = {
    { "get_Geofence", (PyCFunction)GeofenceStateChangeReport_get_Geofence, METH_NOARGS, nullptr },
    { "get_Geoposition", (PyCFunction)GeofenceStateChangeReport_get_Geoposition, METH_NOARGS, nullptr },
    { "get_NewState", (PyCFunction)GeofenceStateChangeReport_get_NewState, METH_NOARGS, nullptr },
    { "get_RemovalReason", (PyCFunction)GeofenceStateChangeReport_get_RemovalReason, METH_NOARGS, nullptr },
    { "_from", (PyCFunction)GeofenceStateChangeReport__from, METH_O | METH_STATIC, nullptr },
    { nullptr }
};

static PyType_Slot GeofenceStateChangeReport_Type_slots[] = 
{
    { Py_tp_base, nullptr }, // filled out in module init
    { Py_tp_dealloc, GeofenceStateChangeReport_dealloc },
    { Py_tp_new, GeofenceStateChangeReport_new },
    { Py_tp_methods, GeofenceStateChangeReport_methods },
    { 0, nullptr },
};

static PyType_Spec GeofenceStateChangeReport_Type_spec =
{
    "GeofenceStateChangeReport",
    sizeof(py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>),
    0,
    Py_TPFLAGS_DEFAULT,
    GeofenceStateChangeReport_Type_slots
};

// ----- Windows.Devices.Geolocation.Geofencing Initialization --------------------

int initialize_Windows_Devices_Geolocation_Geofencing(PyObject* module)
{
    PyObject* type_object{ nullptr };


    Geofence_Type_slots[0].pfunc = py::winrt_type<py::winrt_base>::python_type;
    type_object = PyType_FromSpec(&Geofence_Type_spec);
    if (type_object == nullptr)
    {
        return -1;
    }
    if (PyModule_AddObject(module, "Geofence", type_object) != 0)
    {
        return -1;
    }
    py::winrt_type<winrt::Windows::Devices::Geolocation::Geofencing::Geofence>::python_type = reinterpret_cast<PyTypeObject*>(type_object);

    GeofenceMonitor_Type_slots[0].pfunc = py::winrt_type<py::winrt_base>::python_type;
    type_object = PyType_FromSpec(&GeofenceMonitor_Type_spec);
    if (type_object == nullptr)
    {
        return -1;
    }
    if (PyModule_AddObject(module, "GeofenceMonitor", type_object) != 0)
    {
        return -1;
    }
    py::winrt_type<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>::python_type = reinterpret_cast<PyTypeObject*>(type_object);

    GeofenceStateChangeReport_Type_slots[0].pfunc = py::winrt_type<py::winrt_base>::python_type;
    type_object = PyType_FromSpec(&GeofenceStateChangeReport_Type_spec);
    if (type_object == nullptr)
    {
        return -1;
    }
    if (PyModule_AddObject(module, "GeofenceStateChangeReport", type_object) != 0)
    {
        return -1;
    }
    py::winrt_type<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>::python_type = reinterpret_cast<PyTypeObject*>(type_object);
    
    return 0;
}
